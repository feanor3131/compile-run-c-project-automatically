#include "tree.h"
#include "par.h"
#include "iostream"
#include "fstream"
#include "string.h"
#include <TRandom3.h>

bool SortDS(const Energy &a, const Energy &b)
{
	return a.e > b.e;
}


tree::tree(TTree *ipt_)
{
	Init();
	ipt = ipt_;
	if(ipt == NULL)
	{
		std::cout << "Don't have the iuput tree!" << std::endl;
		return ;
	}
	GetBranch();
	opt = NULL;
}
tree::~tree()
{}


void tree::Init()
{
	ipt = NULL;
	opt = NULL;
	opf = NULL;

	for(int i=0; i<50; i++)
	{
		GeP0[i] = 0.0;
		GeP1[i] = 0.0;
		GeP2[i] = 0.0;
	}
	std::ifstream ing("gamma_calib_new.txt");
	std::string tmp;
 	if(ing.is_open())
 	{   
 		getline(ing, tmp);
        Double_t t0, t1, t2; 
 		Int_t   tid;
 		while((ing >> tid >> t0 >> t1 >> t2))
 		{
 			GeP0[tid] = t0; 
 			GeP1[tid] = t1; 
  	    	GeP2[tid] = t2; 
 		}  
	}   
	else
		std::cout <<"Cannot open gamma_calib_new.txt" << std::endl;
    ing.close();
	InitEvent();
	run = -1;
}

void tree::InitData(Data* data)
{
	data->det = -1;
	data->id = -1;
	data->e = 0.0;
	data->t = 0;
	data->oe = 0.0;
	data->theta = 0.0;
	data->phi = 0.0;
}

void tree::InitEnergy(Energy* data)
{
	data->id = -1;
	data->e = 0.0;
	data->t = 0;
	data->oe = 0.0;
	data->theta = 0.0;
	data->phi = 0.0;
}

void tree::GetBranch()
{
	if (ipt == NULL)
		return;
   ipt->SetBranchAddress("gamma_count", &gamma_count);
   ipt->SetBranchAddress("gamma_e", gamma_e);
   ipt->SetBranchAddress("gamma_oe", gamma_oe);
   ipt->SetBranchAddress("gamma_id", gamma_id);
   ipt->SetBranchAddress("gamma_t", gamma_t);
   ipt->SetBranchAddress("gamma_theta", gamma_theta);
   ipt->SetBranchAddress("gamma_phi", gamma_phi);
}
void tree::GetEvent()
{
	Long64_t nentries = ipt->GetEntries();
//	nentries = 1E7;
	Data datatmp;
//	TRandom3 *rand = new TRandom3(0);
	for (Long64_t jentry = 0; jentry < nentries; jentry++)
	{
//			if(jentry>5000000)
//					break;
		if (jentry % 1000 == 0)
		{
			std::cout << TString::Format("Process %.2f %%, %lldk / %lldk\r", Double_t(jentry) / nentries * 100.0,
					jentry / 1000, nentries / 1000);
			std::cout << std::flush;
		}
//		if(jentry > 1E6) break;
		ipt->GetEntry(jentry);
       //Ge doppler correction
		for(int i=0; i<gamma_count; i++)
		{
			InitData(&datatmp);
			datatmp.det = 12;
			datatmp.id = gamma_id[i];
//			gamma_oe[i] = gamma_oe[i] + rand->Rndm()-0.5;
			datatmp.e = GeP0[gamma_id[i]] + GeP1[gamma_id[i]]*gamma_oe[i] + GeP2[gamma_id[i]]*gamma_oe[i]*gamma_oe[i];
	//		datatmp.e = gamma_e[i];
			Double_t beta = 0.0345; //0.0345;//0.0335;
			datatmp.oe = datatmp.e;
			Double_t tmptheta = gamma_theta[i]*3.14/180.0;
//			datatmp.e = datatmp.e/((1.0 - beta * TMath::Cos(tmptheta))/TMath::Sqrt(1.0 - beta * beta));
			datatmp.e = datatmp.e*(1.0 - beta * TMath::Cos(tmptheta))/TMath::Sqrt(1.0 - beta * beta);
			//std::cout << tmptheta << std::endl;
			datatmp.t = gamma_t[i] * AllTime;
			datatmp.theta = gamma_theta[i];
			datatmp.phi = gamma_phi[i];
			mdata.insert(std::pair<Long64_t, Data>(datatmp.t, datatmp));
		}

		//based on Beihang gamma_e; doppler has been done
	/*	for( int i=0; i<gamma_count; i++)
		{
			InitData(&datatmp);

			datatmp.det = 12;
			
			datatmp.id = gamma_id[i];

			datatmp.e = gamma_e[i];

			datatmp.t = gamma_t[i] * AllTime;

			datatmp.theta = gamma_theta[i];

			datatmp.phi = gamma_phi[i];

			mdata.insert(std::pair<Long64_t, Data>(datatmp.t, datatmp));
		}
*/
	}
}

void tree::Event(TTree *opt_, TFile *opf_, Int_t run_)
{
	if (opt_ == NULL || opf_ == NULL)
		return;
	opt = opt_;
	opf = opf_;
	run = run_;
	BranchOpt();
	std::cout << "making  map of evnts..." << std::endl;
	GetEvent();

	Long64_t us = 1000;
//	Long64_t ms = 1000 * us;
//	Long64_t sec = 1000 * ms;

	std::cout << "Build event................" << std::endl;
	Long64_t ntrigger = 0;
	Long64_t tbegin = mdata.begin()->second.t;
	InitEvent();
//	struct Energy;
	Energy_ Energytmp;
	for (auto id = mdata.begin(); id != mdata.end(); id++)
	{
		if(id->second.t - tbegin > EventWindow*us)
		{
			EndEvent();
			tbegin = id->second.t;
		
		}
		if(id->second.det == 12)
		{
				InitEnergy(&Energytmp);
				if(id->second.id == 36 || id->second.e<20 || id->second.e>1985) continue;
				Energytmp.id = id->second.id;
				Energytmp.e = id->second.e;
				Energytmp.oe = id->second.oe;
				Energytmp.t = id->second.t;
				Energytmp.theta = id->second.theta;
				Energytmp.phi = id->second.phi;
		//	if(id->second.det==  12)
		//	{
					EventGamma.push_back(Energytmp);
		//	}
		}
		
		ntrigger++;
		if (ntrigger % 1000 == 0)
		{
	//		std::cout << TString::Format("Process %.2f %%, %lldK / %lldK\r", Double_t(ntrigger) / mdata.size() * 100.,
	//				ntrigger/1000, mdata.size()/1000);
			std::cout << std::flush;
		}
	}
	EndEvent();
	std::cout << std::endl;
}
void tree::InitEvent()
{
	EventGamma.clear();
}
void tree::EndEvent()
{
	if( EventGamma.size() > 0)
	{
		opf->cd();
		opt->Fill();
	}
	InitEvent();
}

void tree::BranchOpt()
{
	opt->Branch("run", &run, "run/I");  //file number
	opt->Branch("Ge", &EventGamma);
}
