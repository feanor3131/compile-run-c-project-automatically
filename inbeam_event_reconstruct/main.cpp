
#include "par.h"
#include "tree.h"
#include <TTree.h>
#include <TFile.h>
#include <TMath.h>
#include <TString.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[])
{
	if(argc != 2)
    {
      std::cout << "eg. ./xxx  [run number]" << std::endl;
      exit(1);
    }
 	int run = atoi(argv[1]);
	TString InputFilePath = "/home/share_data/58Ni96Ru/root/";
  TString InputFileName = "root";
	std::cout << Form("Run %03d", run) << std::endl;
  auto ipf = new TFile(Form("%s%s%03d.root", InputFilePath.Data(), InputFileName.Data(), run), "READ");
	if(ipf==0)
		std::cout << "Can not open the input file :"<< Form("%s%s-%03d.root", InputFilePath.Data(), InputFileName.Data(), run) << std::endl;
	TString InputTreeName = "tree"; 
  	auto ipt = (TTree*)ipf->Get(InputTreeName.Data());
	if(ipt==0)
		std::cout << "Can not Get TTree*  :"<< InputTreeName.Data() << std::endl;
    TString OutputFilePath = "./";
    TString OutputFileName = "event";

  	auto opf = new TFile(Form("%s%s%03d.root", OutputFilePath.Data(), OutputFileName.Data(), run), "RECREATE");
	TString OutTreeName = "tree";
  	auto opt = new TTree(OutTreeName.Data(), OutTreeName.Data());
  	std::cout << "output: " << Form("Event-%03d.root", run) << std::endl;
  	auto it = new tree(ipt);
	it->Event(opt, opf, run);
  	opt->Write();
    ipf->Close();
	opf->Close();
  
  	return 0;
}

