#include <TMath.h>

#ifndef _PAR_H_
#define _PAR_H_

//input file
#define INPUTFILEPATH "../data/root/"
#define INPUTFILENAME "root"
//input tree
#define INPUTTREENAME "tree"

// output file
#define OUTPUTFILEPATH "../data/eventNewCal/"
#define OUTPUTFILENAME "event"

//output tree
#define OUTPUTTREENAME "tree"

//rate
const Long64_t AllTime = 10;
//Ge
const Double_t GeETh = 0.0;
const Long64_t GeTime = 10;

const Long64_t EventWindow = 2;  //us


#endif  /* end of par.h*/
