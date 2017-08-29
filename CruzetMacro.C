#include "L1Ntuple.h"
#include "hist.C"
#include "Style.C"
#include "TH1.h"
#include "math.h"
#include "TMath.h"
//#include "TPDF.h"//not sure it exits in root6
#include "TFile.h"
//#include <iostream>
//using namespace std;
//#include <algorithm>
#include <stdlib.h>
//#include <iomanip>
//#include "TChain.h"
#include "TGraph.h"
#include "TGraphErrors.h" 
//#include "TCollection.h"
//#include "TSystemFile.h"
//#include "TSystemDirectory.h"
#include "TLegend.h"
#include "TCanvas.h"
//#include "TChainElement.h" 
//#include "TStyle.h"

// --------------------------------------------------------------------
//                       MacroTemplate macro definition
// --------------------------------------------------------------------

class CruzetMacro : public L1Ntuple
{
  public :

    //constructor    
    CruzetMacro(std::string filename) : L1Ntuple(filename) {}
    CruzetMacro() {}
    ~CruzetMacro() {}

    //main function macro : arguments can be adpated to your need
    void run(Long64_t nevents);

  private : 

    //your private methods can be declared here
};


// --------------------------------------------------------------------
//                             run function 
// --------------------------------------------------------------------
void CruzetMacro::run(Long64_t nevents)
{
  //load TDR style
  setTDRStyle();

  //number of events to process
  if (nevents==-1 || nevents>GetEntries()) nevents=GetEntries();
  std::cout << nevents << " to process ..." << std::endl;
  
  TH1F *chamber1_bx_plot = new TH1F("chamber1_bx_plot","BX Distribution: Chamber 1",200, 0, 20);//last three defines binnumber, lower and upper limit;
  TH1F *chamber2_bx_plot = new TH1F("chamber2_bx_plot","BX Distribution: Chamber 2",200, 0, 20);
  TH1F *chamber3_bx_plot = new TH1F("chamber3_bx_plot","BX Distribution: Chamber 3",200, 0, 20);
  TH1F *chamber4_bx_plot = new TH1F("chamber4_bx_plot","BX Distribution: Chamber 4",200, 0, 20);
  TH1F *chamber5_bx_plot = new TH1F("chamber5_bx_plot","BX Distribution: Chamber 5",200, 0, 20);
  TH1F *chamber6_bx_plot = new TH1F("chamber6_bx_plot","BX Distribution: Chamber 6",200, 0, 20);
    
    TH1F *chamber7_bx_plot = new TH1F("chamber7_bx_plot","BX Distribution: Chamber 7",200, 0, 20);
    TH1F *chamber8_bx_plot = new TH1F("chamber8_bx_plot","BX Distribution: Chamber 8",200, 0, 20);
    TH1F *chamber9_bx_plot = new TH1F("chamber9_bx_plot","BX Distribution: Chamber 9",200, 0, 20);
    TH1F *chamber10_bx_plot = new TH1F("chamber10_bx_plot","BX Distribution: Chamber 10",200, 0, 20);
    TH1F *chamber11_bx_plot = new TH1F("chamber11_bx_plot","BX Distribution: Chamber 11",200, 0, 20);
    
    TH1F *chamber12_bx_plot = new TH1F("chamber12_bx_plot","BX Distribution: Chamber 12",200, 0, 20);
    TH1F *chamber13_bx_plot = new TH1F("chamber13_bx_plot","BX Distribution: Chamber 13",200, 0, 20);
    TH1F *chamber14_bx_plot = new TH1F("chamber14_bx_plot","BX Distribution: Chamber 14",200, 0, 20);
    TH1F *chamber15_bx_plot = new TH1F("chamber15_bx_plot","BX Distribution: Chamber 15",200, 0, 20);
    TH1F *chamber16_bx_plot = new TH1F("chamber16_bx_plot","BX Distribution: Chamber 16",200, 0, 20);
    
    TH1F *chamber17_bx_plot = new TH1F("chamber17_bx_plot","BX Distribution: Chamber 17",200, 0, 20);
    TH1F *chamber18_bx_plot = new TH1F("chamber18_bx_plot","BX Distribution: Chamber 18",200, 0, 20);
    TH1F *chamber19_bx_plot = new TH1F("chamber19_bx_plot","BX Distribution: Chamber 19",200, 0, 20);
    TH1F *chamber20_bx_plot = new TH1F("chamber20_bx_plot","BX Distribution: Chamber 20",200, 0, 20);
    TH1F *chamber21_bx_plot = new TH1F("chamber21_bx_plot","BX Distribution: Chamber 21",200, 0, 20);
    
    TH1F *chamber22_bx_plot = new TH1F("chamber22_bx_plot","BX Distribution: Chamber 22",200, 0, 20);
    TH1F *chamber23_bx_plot = new TH1F("chamber23_bx_plot","BX Distribution: Chamber 23",200, 0, 20);
    TH1F *chamber24_bx_plot = new TH1F("chamber24_bx_plot","BX Distribution: Chamber 24",200, 0, 20);
    TH1F *chamber25_bx_plot = new TH1F("chamber25_bx_plot","BX Distribution: Chamber 25",200, 0, 20);
    TH1F *chamber26_bx_plot = new TH1F("chamber26_bx_plot","BX Distribution: Chamber 26",200, 0, 20);
    
    TH1F *chamber27_bx_plot = new TH1F("chamber27_bx_plot","BX Distribution: Chamber 27",200, 0, 20);
    TH1F *chamber28_bx_plot = new TH1F("chamber28_bx_plot","BX Distribution: Chamber 28",200, 0, 20);
    TH1F *chamber29_bx_plot = new TH1F("chamber29_bx_plot","BX Distribution: Chamber 29",200, 0, 20);
    TH1F *chamber30_bx_plot = new TH1F("chamber30_bx_plot","BX Distribution: Chamber 30",200, 0, 20);
    TH1F *chamber31_bx_plot = new TH1F("chamber31_bx_plot","BX Distribution: Chamber 31",200, 0, 20);
    
    TH1F *chamber32_bx_plot = new TH1F("chamber32_bx_plot","BX Distribution: Chamber 32",200, 0, 20);
    TH1F *chamber33_bx_plot = new TH1F("chamber33_bx_plot","BX Distribution: Chamber 33",200, 0, 20);
    TH1F *chamber34_bx_plot = new TH1F("chamber34_bx_plot","BX Distribution: Chamber 34",200, 0, 20);
    TH1F *chamber35_bx_plot = new TH1F("chamber35_bx_plot","BX Distribution: Chamber 35",200, 0, 20);
    TH1F *chamber36_bx_plot = new TH1F("chamber36_bx_plot","BX Distribution: Chamber 36",200, 0, 20);
    
  Double_t chamber_MeanBx[36]={0};

  //loop over the events
  for (Long64_t ievent=0; ievent<nevents; ievent++)//possible repeat use of i below, avoid abstract use of i, be specific
    {
      //load the i-th event 
      Long64_t ientry = LoadTree(ievent); if (ientry < 0) break;
      GetEntry(ievent);

      //process progress
      if(ievent!=0 && (ievent%10000)==0)
	std::cout << "- processing event " << ievent << "\r" << std::flush;

      //loop over LCTs
        //debuggingstart:print out how many LCTs in each event
        cout<<"Event #"<< ievent <<" has "<< csctf_->lctChamber.size() <<" LCT(s)!" <<endl;
        //debuggingend
      for(int i=0; i<csctf_->lctChamber.size(); i++){//the lctEndcap, lctStation, etc, are all 1*n vectors for n
                                              //LCTs in an event;
          //debuggingstart: print out all LCTs' info in an event
          
          cout<<"-----LCT #" << i <<": Endcap= "<<csctf_->lctEndcap[i]<<", Station= "<<csctf_->lctStation[i]<<", Ring= "<<csctf_->lctRing[i]<<", Chamber= "<<csctf_->lctChamber[i]<<", Bx= "<<csctf_->lctBx[i] <<endl;
          
          //debuggingend
       //plot for different chambers
            if (csctf_->lctEndcap[i]==1 && csctf_->lctStation[i]==1 && csctf_->lctRing[i]==1){
                switch(csctf_->lctChamber[i]){
                     case 1:
                         cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/1!----->BX = "<<csctf_->lctBx[i] <<endl;
                         chamber1_bx_plot->Fill(csctf_->lctBx[i]);//this specifies chamber1 in ME+1/1, the upgrade is in ME+1/1
                         break;
                     case 2:
                         cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/2!----->BX = "<<csctf_->lctBx[i] <<endl;
                         chamber2_bx_plot->Fill(csctf_->lctBx[i]);
                         break;
                     case 3:
                         cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/3!----->BX = "<<csctf_->lctBx[i] <<endl;
                         chamber3_bx_plot->Fill(csctf_->lctBx[i]);
                         break;
                     case 4:
                         cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/4!----->BX = "<<csctf_->lctBx[i] <<endl;
                         chamber4_bx_plot->Fill(csctf_->lctBx[i]);
                         break;
                    case 5:
                        cout<<"Event #"<< ievent <<": LCT #"  << i << " is in ME+1/1/5!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber5_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 6:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/6!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber6_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 7:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/7!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber7_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 8:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/8!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber8_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 9:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/9!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber9_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 10:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/10!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber10_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 11:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/11!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber11_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 12:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/12!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber12_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 13:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/13!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber13_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 14:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/14!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber14_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 15:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/15!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber15_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 16:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/16!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber16_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 17:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/17!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber17_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 18:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/18!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber18_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 19:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/19!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber19_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 20:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/20!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber20_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 21:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/21!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber21_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 22:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/22!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber22_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 23:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/23!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber23_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 24:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/24!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber24_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 25:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/25!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber25_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 26:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/26!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber26_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 27:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/27!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber27_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 28:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/28!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber28_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 29:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/29!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber29_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 30:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/30!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber30_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 31:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/31!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber31_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 32:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/32!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber32_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 33:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/33!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber33_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 34:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/34!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber34_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 35:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/35!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber35_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    case 36:
                        cout<<"Event #"<< ievent <<": LCT #" << i << " is in ME+1/1/36!----->BX = "<<csctf_->lctBx[i] <<endl;
                        chamber36_bx_plot->Fill(csctf_->lctBx[i]);
                        break;
                    default:
                        break;
                }
            }
          }
  }//end loop events

  //chamber_MeanBx[0] = (Double_t)chamber_TOTlctBx[0]/chamber_Nlct[0];
  chamber_MeanBx[0]=chamber1_bx_plot->GetMean(1);//this is an easy way to get mean BX,1 means x axis,2 means y,3 means z;
  chamber_MeanBx[1]=chamber2_bx_plot->GetMean(1);
  chamber_MeanBx[2]=chamber3_bx_plot->GetMean(1);
    chamber_MeanBx[3]=chamber4_bx_plot->GetMean(1);
    chamber_MeanBx[4]=chamber5_bx_plot->GetMean(1);
    chamber_MeanBx[5]=chamber6_bx_plot->GetMean(1);
    chamber_MeanBx[6]=chamber7_bx_plot->GetMean(1);
  
    chamber_MeanBx[7]=chamber8_bx_plot->GetMean(1);
    chamber_MeanBx[8]=chamber9_bx_plot->GetMean(1);
    chamber_MeanBx[9]=chamber10_bx_plot->GetMean(1);
    chamber_MeanBx[10]=chamber11_bx_plot->GetMean(1);
    chamber_MeanBx[11]=chamber12_bx_plot->GetMean(1);
    chamber_MeanBx[12]=chamber13_bx_plot->GetMean(1);
    
    chamber_MeanBx[13]=chamber14_bx_plot->GetMean(1);
    chamber_MeanBx[14]=chamber15_bx_plot->GetMean(1);
    chamber_MeanBx[15]=chamber16_bx_plot->GetMean(1);
    chamber_MeanBx[16]=chamber17_bx_plot->GetMean(1);
    chamber_MeanBx[17]=chamber18_bx_plot->GetMean(1);
    chamber_MeanBx[18]=chamber19_bx_plot->GetMean(1);
    
    chamber_MeanBx[19]=chamber20_bx_plot->GetMean(1);
    chamber_MeanBx[20]=chamber21_bx_plot->GetMean(1);
    chamber_MeanBx[21]=chamber22_bx_plot->GetMean(1);
    chamber_MeanBx[22]=chamber23_bx_plot->GetMean(1);
    chamber_MeanBx[23]=chamber24_bx_plot->GetMean(1);
    chamber_MeanBx[24]=chamber25_bx_plot->GetMean(1);
    
    chamber_MeanBx[25]=chamber26_bx_plot->GetMean(1);
    chamber_MeanBx[26]=chamber27_bx_plot->GetMean(1);
    chamber_MeanBx[27]=chamber28_bx_plot->GetMean(1);
    chamber_MeanBx[28]=chamber29_bx_plot->GetMean(1);
    chamber_MeanBx[29]=chamber30_bx_plot->GetMean(1);
    chamber_MeanBx[30]=chamber31_bx_plot->GetMean(1);
    
    chamber_MeanBx[31]=chamber32_bx_plot->GetMean(1);
    chamber_MeanBx[32]=chamber33_bx_plot->GetMean(1);
    chamber_MeanBx[33]=chamber34_bx_plot->GetMean(1);
    chamber_MeanBx[34]=chamber35_bx_plot->GetMean(1);
    chamber_MeanBx[35]=chamber36_bx_plot->GetMean(1);

//plot meanBx of chambers and do chi-square fit
    Double_t iChamber[36]={0};
    for(Int_t i=0;i<36;i++){
        cout<<"Mean Bx in Chamber #"<< i+1 <<" is "<<chamber_MeanBx[i]<< endl;
        iChamber[i]=i+1;
    }
    TGraph *myGraph = new TGraph(36,iChamber,chamber_MeanBx);
  
//write all plots in the new root file
  TFile myFile("/afs/cern.ch/work/w/wshi/public/TimingStudy/TimingStudy.root","RECREATE");
    
    TCanvas *C1=new TCanvas("C1","CSCTFlct Bx ME+1/1",700,500);
    //TCanvas *C2=new TCanvas("C2","C2",700,500);
    
    C1->cd();
    C1->SetGrid();
    myGraph->SetTitle("CSCTF LCT BX in ME+1/1");
    myGraph->GetXaxis()->SetTitle("Chamber Number");
    //myGraph->GetXaxis()->SetGrid();
    myGraph->GetYaxis()->SetTitle("BX(25ns)");
    //myGraph->GetYaxis()->SetGrid();
    myGraph->SetMarkerStyle(21);
    myGraph->Draw("AP");
    //return C1;
    myGraph->Write();
    
  //C2->cd();
  chamber1_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
  chamber1_bx_plot->GetYaxis()->SetTitle("#LCTs");
 // chamber1_bx_plot->Draw();
  chamber1_bx_plot->Write();
  //C2->SaveAs("/afs/cern.ch/work/w/wshi/public/TimingStudy/chamber1_bx_plot.ps");
  
  chamber2_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
  chamber2_bx_plot->GetYaxis()->SetTitle("#LCTs");
  chamber2_bx_plot->Write();
    
  chamber3_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
  chamber3_bx_plot->GetYaxis()->SetTitle("#LCTs");
  chamber3_bx_plot->Write();
    
    chamber4_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber4_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber4_bx_plot->Write();
    
    chamber5_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber5_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber5_bx_plot->Write();
    
    chamber6_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber6_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber6_bx_plot->Write();
    
    chamber7_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber7_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber7_bx_plot->Write();
    
    chamber8_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber8_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber8_bx_plot->Write();
    
    chamber9_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber9_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber9_bx_plot->Write();
    
    chamber10_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber10_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber10_bx_plot->Write();
    
    chamber11_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber11_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber11_bx_plot->Write();
    
    chamber12_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber12_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber12_bx_plot->Write();
    
    chamber13_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber13_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber13_bx_plot->Write();
    
    chamber14_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber14_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber14_bx_plot->Write();
    
    chamber15_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber15_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber15_bx_plot->Write();
    
    chamber16_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber16_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber16_bx_plot->Write();
    
    chamber17_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber17_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber17_bx_plot->Write();
    
    chamber18_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber18_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber18_bx_plot->Write();
    
    chamber19_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber19_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber19_bx_plot->Write();
    
    chamber20_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber20_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber20_bx_plot->Write();
    
    chamber21_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber21_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber21_bx_plot->Write();
    
    chamber22_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber22_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber22_bx_plot->Write();
    
    chamber23_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber23_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber23_bx_plot->Write();
    
    chamber24_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber24_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber24_bx_plot->Write();
    
    chamber25_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber25_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber25_bx_plot->Write();
    
    chamber26_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber26_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber26_bx_plot->Write();
    
    chamber27_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber27_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber27_bx_plot->Write();
    
    chamber28_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber28_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber28_bx_plot->Write();
    
    chamber29_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber29_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber29_bx_plot->Write();
  
    chamber30_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber30_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber30_bx_plot->Write();
    
    chamber31_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber31_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber31_bx_plot->Write();
    
    chamber32_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber32_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber32_bx_plot->Write();
    
    chamber33_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber33_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber33_bx_plot->Write();
    
    chamber34_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber34_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber34_bx_plot->Write();
    
    chamber35_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber35_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber35_bx_plot->Write();
    
    chamber36_bx_plot->GetXaxis()->SetTitle("BX(25ns)");
    chamber36_bx_plot->GetYaxis()->SetTitle("#LCTs");
    chamber36_bx_plot->Write();
    
    
  myFile.Close();
  cout<<"/afs/cern.ch/work/w/wshi/public/TimingStudy/TimingStudy.root finished!"<<endl;
}
