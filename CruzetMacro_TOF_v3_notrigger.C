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

class CruzetMacro_TOF_v3_notrigger: public L1Ntuple
{
  public :

    //constructor    
    CruzetMacro_TOF_v3_notrigger(std::string filename) : L1Ntuple(filename) {}
    CruzetMacro_TOF_v3_notrigger() {}
    ~CruzetMacro_TOF_v3_notrigger() {}

    //main function macro : arguments can be adpated to your need
    void run(Long64_t nevents);

  private : 

    //your private methods can be declared here
};


// --------------------------------------------------------------------
//                             run function 
// --------------------------------------------------------------------
void CruzetMacro_TOF_v3_notrigger::run(Long64_t nevents){
    
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
    
    double chamber_MeanBx[36]={0};
    
    //transform global phi and eta from bit form to decimal number
    //globalphi(-pi,pi) are devided by 4096, globaleta(0.9,2.4) is devided by 126(?could be 128)
    double Pi=3.14159;
    double step_phi=Pi*2/4096;
    double step_eta=(2.4-0.9)/126;
    double level_arm_ME1_1=6;//z coordinate of the station(can be more precise, unit is meter);
    double level_arm_ME2=8.25;
    double level_arm_ME3=9.3;
    Long64_t light_velocity=300000000;
    double unit_bx=2.5*pow(10,-8);
    Long64_t selected_event[15000]={0};
    Long64_t selected_event_i=0;
    
    //loop over the events
    for (Long64_t ievent=0; ievent<nevents; ievent++){//avoid use of i, be specific
        //load the i-th event
        Long64_t ientry = LoadTree(ievent); if (ientry < 0) break;
        GetEntry(ievent);
        cout<<"============"<<endl;
        
        //process progress
        if(ievent!=0 && (ievent%10000)==0)
        std::cout << "- processing event " << ievent << "\r" << std::flush;

        //print out LCTs in each event and initialize variables
        cout<<"Event #"<< ievent <<" has "<< csctf_->lctChamber.size() <<" LCT(s)!" <<endl;
        int numlct_ME1_1=0;//number of lct in ME+1/1 that is to be synchronised in each event
        int numlct_ME2=0;//number of lct in ME+2 station registered at BX=6 in each event
        int numlct_ME3=0;//number of lct in ME+3 station registered at BX=6 in each event
        int event_flag=0;//mark selected event when event_flag=1
        int lct_flag=0;//mark two lcts in ME+1/1
        int ME2_lct_chamber=0;
        int ME3_lct_chamber=0;
        int ME2_lct_ring=0;
        int ME3_lct_ring=0;
        int first_lct_chamber=0;//this takes first lct's chamber number in ME+1/1
        int second_lct_chamber=0;//this takes the seocnd lct's chamber number in ME+1/1
        int lct_chamber[2]={0};//this store two lcts in ME+1/1 to convenient the histograms fill
        double ME2_lct_eta=-999;//this takes eta coordinate of the lct in ME2(if there is exactly one in a event, otherwise it's the last lct's)
        double ME2_lct_phi=-999;//this takes phi coordinate of the lct in ME2, initialize to 0 is not a good choice
        double ME3_lct_eta=-999;//this takes eta coordinate of the lct in ME3
        double ME3_lct_phi=-999;//this takes phi coordinate of the lct in ME3
        double ME1_1_lct_eta=-999;
        double ME1_1_lct_phi=-999;
        double first_lct_phi=-999;//this takes phi coordinate of 1st lct in ME+1/1
        double first_lct_eta=-999;//this takes eta coordinate of 1st lct in ME+1/1
        double second_lct_phi=-999;//this takes phi coordinate of 2nd lct in ME+1/1
        double second_lct_eta=-999;//this takes eta coordinate of 2nd lct in ME+1/1
        
        //these initialize cartisian coordinates
        double ME2_lct_tan_theta=0;
        double ME3_lct_tan_theta=0;
        double first_lct_tan_theta=0;
        double second_lct_tan_theta=0;
        double ME2_lct_x=0;
        double ME2_lct_y=0;
        double ME2_lct_z=0;
        double ME3_lct_x=0;
        double ME3_lct_y=0;
        double ME3_lct_z=0;
        double first_lct_x=0;
        double first_lct_y=0;
        double first_lct_z=0;
        double second_lct_x=0;
        double second_lct_y=0;
        double second_lct_z=0;
        double first_lct_bx=0;
        double second_lct_bx=0;
        double lct_bx[2]={0};//this stores two lcts in ME+1/1 to convenient the histograms filling
        double distance_0_3=0;
        double distance_0_2=0;
        double first_lct_distance_0_1=0;
        double first_lct_distance_1_2=0;
        double first_lct_distance_1_3=0;
        double second_lct_distance_0_1=0;
        double second_lct_distance_1_2=0;
        double second_lct_distance_1_3=0;
        
        //====================================
        //event selection for TOF correction =
        //====================================
        //loop over LCT in each event: require 1 lct in ME2 and 1 lct in ME3 and 2 neighbouring lcts in ME1/1(not 4 lcts in total for one event, lcts can be in other stations)
        for(int ilct=0;ilct<csctf_->lctChamber.size();ilct++){
            //print out all LCTs' info in an event
            cout<<"LCT #" << ilct <<": Endcap= "<<csctf_->lctEndcap[ilct]<<", Station= "<<csctf_->lctStation[ilct]<<", Ring= "<<csctf_->lctRing[ilct]<<", Chamber= "<<csctf_->lctChamber[ilct]<<", Bx= "<<csctf_->lctBx[ilct]<<", Strip Number= "<<csctf_->lctstripNum[ilct]<<", Wire Group= "<<csctf_->lctwireGroup[ilct]<<", Global Eta= "<<csctf_->lctglobalEta[ilct]<<", Global Phi= "<<csctf_->lctglobalPhi[ilct]<<endl;
            
            //event selection: these selection criteria are also true for signal propagation time correction
            if(csctf_->lctEndcap[ilct]==1){
                cout<<"LCT in +Endcap!"<<endl;
                
                //ME2
                if(csctf_->lctStation[ilct]==2 /*&& csctf_->lctBx[ilct]==6*/){
                    
                    //consider lct may be duplicated to reconstruct tracks, need to count same lcts as one;
                    if(ME2_lct_phi == -Pi+csctf_->lctglobalPhi[ilct]*step_phi && ME2_lct_eta == 0.9+csctf_->lctglobalEta[ilct]*step_eta && ME2_lct_ring == csctf_->lctRing[ilct] && ME2_lct_chamber== csctf_->lctChamber[ilct]){
                        
                        cout<<"Duplicate lcts in ME2."<<endl;
                    
                    }
                    else{//better get coordinates here or you'll need to loop again after event selection
                        numlct_ME2++;
                        ME2_lct_phi=-Pi+csctf_->lctglobalPhi[ilct]*step_phi;
                        ME2_lct_eta=0.9+csctf_->lctglobalEta[ilct]*step_eta;
                        ME2_lct_ring=csctf_->lctRing[ilct];
                        ME2_lct_chamber=csctf_->lctChamber[ilct];
                        cout<<"LCT in ME+2 at BX=6!"<<endl;
                    }
                    
                }
                
                //ME3
                if(csctf_->lctStation[ilct]==3 /*&& csctf_->lctBx[ilct]==6*/){
                    
                    //consider duplicate lcts: endcap, station, ring, chamber, bx, phi, eta; we don't compare wire and strip here.
                    if(ME3_lct_phi == -Pi+csctf_->lctglobalPhi[ilct]*step_phi && ME3_lct_eta == 0.9+csctf_->lctglobalEta[ilct]*step_eta && ME3_lct_ring == csctf_->lctRing[ilct] && ME3_lct_chamber== csctf_->lctChamber[ilct]){
    
                        cout<<"Duplicate lcts in ME3."<<endl;
    
                    }
                    //get coordinates
                    else{
                        numlct_ME3++;
                        ME3_lct_phi=-Pi+csctf_->lctglobalPhi[ilct]*step_phi;
                        ME3_lct_eta=0.9+csctf_->lctglobalEta[ilct]*step_eta;
                        ME3_lct_ring=csctf_->lctRing[ilct];
                        ME3_lct_chamber=csctf_->lctChamber[ilct];
                        cout<<"LCT in ME+3 at BX=6!"<<endl;
                    }
                }
                
                //ME11
                if(csctf_->lctStation[ilct]==1 && csctf_->lctRing[ilct]==1){
                    
                    if((first_lct_phi == -Pi+csctf_->lctglobalPhi[ilct]*step_phi && first_lct_eta == 0.9+csctf_->lctglobalEta[ilct]*step_eta && first_lct_chamber == csctf_->lctChamber[ilct] && first_lct_bx == csctf_->lctBx[ilct]) || (second_lct_phi == -Pi+csctf_->lctglobalPhi[ilct]*step_phi && second_lct_eta == 0.9+csctf_->lctglobalEta[ilct]*step_eta && second_lct_chamber == csctf_->lctChamber[ilct] && second_lct_bx == csctf_->lctBx[ilct]) ){
                        
                        cout<<"Duplicate lcts in ME11."<<endl;
                    }
                    else{
                        numlct_ME1_1++;
                        if(lct_flag==0){
                            //get coordinates and timing info here
                            first_lct_chamber = csctf_->lctChamber[ilct];
                            first_lct_phi=-Pi+csctf_->lctglobalPhi[ilct]*step_phi;
                            first_lct_eta=0.9+csctf_->lctglobalEta[ilct]*step_eta;
                            first_lct_bx=csctf_->lctBx[ilct];
                            lct_flag=1;
                            cout<<"First lct in ME+1/1 in Chamber: "<<csctf_->lctChamber[ilct]<<endl;
                        }
                        else if(lct_flag==1){
                            second_lct_chamber = csctf_->lctChamber[ilct];
                            second_lct_phi=-Pi+csctf_->lctglobalPhi[ilct]*step_phi;
                            second_lct_eta=0.9+csctf_->lctglobalEta[ilct]*step_eta;
                            second_lct_bx=csctf_->lctBx[ilct];
                            lct_flag=2;
                            cout<<"Second lct in ME+1/1 in Chamber: "<<csctf_->lctChamber[ilct]<<endl;
                        }
                    }//end else
                    
                }//end if ME11
                
            }//end if endcap
            
        }//end for loop over lct in a event
        
        cout<<"Loop over all LCTs in this event finished!"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<numlct_ME1_1<<" LCT(s) in ME+1/1, "<<numlct_ME2<<" LCT(s) in ME+2 at BX=6, "<<numlct_ME3<<" LCT(s) in ME+3 at BX=6;"<<endl;
        cout<<"------------------------------------------"<<endl;
        
        
        //decide if two LCTs in ME+1/1 are in neighbouring chambers
        if(numlct_ME3==1 && numlct_ME2==1 && numlct_ME1_1==2){
            cout<<"Deciding if 2 LCTs in ME+1/1 are in neighbouring chambers..."<<endl;
            
            if(first_lct_chamber==second_lct_chamber+1 || first_lct_chamber==second_lct_chamber-1){
                //change flag to 1
                event_flag=1;
                cout<<"2 LCTs are in neighbouring chambers!"<<endl;
            }
            else{
                cout<<"2 LCTs are NOT in neighbouring chambers!"<<endl;
                }
            
        }//end if
        
        //decide if this event is selected
        if(event_flag==1){
            
            //=================
            //Selected events =
            //=================
            cout<<">>>>>>>>>>>>>>>>>>>"<<endl;
            cout<<"Event "<<ievent<<" selected!"<<endl;
            selected_event[selected_event_i]=ievent;
            selected_event_i++;
            
            //transform the spherical coordinate into cartisian coordinate: simple math(r,theta, phi)-->(x,y,z)
            //z=r*cos(theta)-->r=z/cos(theta),x=r*sin(theta)*cos(phi)=z*tan(theta)*cos(phi),y=r*sin(theta)*sin(phi)=z*tan(theta)*sin(phi);
            //tan(theta)=tan(2*theta/2)=2*tan(theta/2)/[1-{tan(theta/2)]^2};
            //tan(theta/2)=exp(-eta);(eta definition)
            //level-arm coordinnate z: ME+1/1= 6 m; ME2=8.25 m; ME3=9.3 m;(rough estimate, could be raw)
            ME2_lct_tan_theta=2*exp(-ME2_lct_eta)/(1-exp(-2*ME2_lct_eta));
            ME3_lct_tan_theta=2*exp(-ME3_lct_eta)/(1-exp(-2*ME3_lct_eta));
            first_lct_tan_theta=2*exp(-first_lct_eta)/(1-exp(-2*first_lct_eta));
            second_lct_tan_theta=2*exp(-second_lct_eta)/(1-exp(-2*second_lct_eta));
            ME2_lct_x=level_arm_ME2*ME2_lct_tan_theta*cos(ME2_lct_phi);
            ME2_lct_y=level_arm_ME2*ME2_lct_tan_theta*sin(ME2_lct_phi);
            ME2_lct_z=level_arm_ME2;
            ME3_lct_x=level_arm_ME3*ME3_lct_tan_theta*cos(ME3_lct_phi);
            ME3_lct_y=level_arm_ME3*ME3_lct_tan_theta*sin(ME3_lct_phi);
            ME3_lct_z=level_arm_ME3;
            first_lct_x=level_arm_ME1_1*first_lct_tan_theta*cos(first_lct_phi);
            first_lct_y=level_arm_ME1_1*first_lct_tan_theta*sin(first_lct_phi);
            first_lct_z=level_arm_ME1_1;
            second_lct_x=level_arm_ME1_1*second_lct_tan_theta*cos(second_lct_phi);
            second_lct_y=level_arm_ME1_1*second_lct_tan_theta*sin(second_lct_phi);
            second_lct_z=level_arm_ME1_1;
            
            cout<<"Coordinates of 4 LCTs:"<<endl;
            cout<<"LCT in ME2: phi= "<<ME2_lct_phi<<", eta= "<<ME2_lct_eta<<", x= "<<ME2_lct_x<<", y= "<<ME2_lct_y<<", z= "<<ME2_lct_z<<endl;
            cout<<"LCT in ME3: phi= "<<ME3_lct_phi<<", eta= "<<ME3_lct_eta<<", x= "<<ME3_lct_x<<", y= "<<ME3_lct_y<<", z= "<<ME3_lct_z<<endl;
            cout<<"1st LCT in ME+1/1: phi= "<<first_lct_phi<<", eta= "<<first_lct_eta<<", x= "<<first_lct_x<<", y= "<<first_lct_y<<", z= "<<first_lct_z<<", chamber= "<<first_lct_chamber<<", bx= "<<first_lct_bx<<endl;
            cout<<"2nd LCT in ME+1/1: phi= "<<second_lct_phi<<", eta= "<<second_lct_eta<<", x= "<<second_lct_x<<", y= "<<second_lct_y<<", z= "<<second_lct_z<<", chamber= "<<second_lct_chamber<<", bx= "<<second_lct_bx<<endl;
            
            //calculate distance and apply TOF correction
            //decide which one in ME2 and ME3 to use:compare y coordinate
            //backwards case: towards IP, use LCT in ME3
            if(ME3_lct_y>=ME2_lct_y){
                distance_0_3=sqrt(pow(ME3_lct_x,2)+pow(ME3_lct_y,2)+pow(ME3_lct_z,2));
                first_lct_distance_0_1=sqrt(pow(first_lct_x,2)+pow(first_lct_y,2)+pow(first_lct_z,2));
                first_lct_distance_1_3=sqrt(pow(first_lct_x-ME3_lct_x,2)+pow(first_lct_y-ME3_lct_y,2)+pow(first_lct_z-ME3_lct_z,2));
                second_lct_distance_0_1=sqrt(pow(second_lct_x,2)+pow(second_lct_y,2)+pow(second_lct_z,2));
                second_lct_distance_1_3=sqrt(pow(second_lct_x-ME3_lct_x,2)+pow(second_lct_y-ME3_lct_y,2)+pow(second_lct_z-ME3_lct_z,2));
                
                //TOF correction:forward and backward case have different correction
                first_lct_bx=first_lct_bx+(-distance_0_3+first_lct_distance_0_1+first_lct_distance_1_3)/(light_velocity*unit_bx);
                second_lct_bx=second_lct_bx+(-distance_0_3+second_lct_distance_0_1+second_lct_distance_1_3)/(light_velocity*unit_bx);
            }
            //forwards case: away IP, use LCT in ME2
            else{
                
                distance_0_2=sqrt(pow(ME2_lct_x,2)+pow(ME2_lct_y,2)+pow(ME2_lct_z,2));
                first_lct_distance_0_1=sqrt(pow(first_lct_x,2)+pow(first_lct_y,2)+pow(first_lct_z,2));
                first_lct_distance_1_2=sqrt(pow(first_lct_x-ME2_lct_x,2)+pow(first_lct_y-ME2_lct_y,2)+pow(first_lct_z-ME2_lct_z,2));
                second_lct_distance_0_1=sqrt(pow(second_lct_x,2)+pow(second_lct_y,2)+pow(second_lct_z,2));
                second_lct_distance_1_2=sqrt(pow(second_lct_x-ME2_lct_x,2)+pow(second_lct_y-ME2_lct_y,2)+pow(second_lct_z-ME2_lct_z,2));
                
                //TOF correction and devide by 25 ns=2.5*10^-8 s to get BX
                first_lct_bx=first_lct_bx+(-distance_0_2+first_lct_distance_0_1-first_lct_distance_1_2)/(light_velocity*unit_bx);
                second_lct_bx=second_lct_bx+(-distance_0_2+second_lct_distance_0_1-second_lct_distance_1_2)/(light_velocity*unit_bx);
            }//end if for deciding muon direction
            
            cout<<"****After correction****"<<endl;
            cout<<"1st LCT in ME+1/1: bx= "<<first_lct_bx<<endl;
            cout<<"2nd LCT in ME+1/1: bx= "<<second_lct_bx<<endl;
                                             
            lct_chamber[0]=first_lct_chamber;
            lct_chamber[1]=second_lct_chamber;
            lct_bx[0]=first_lct_bx;
            lct_bx[1]=second_lct_bx;
                                             
            for(int i=0;i<2;i++){
                
                switch(lct_chamber[i]){
                    case 1:
                        chamber1_bx_plot->Fill(lct_bx[i]);//this specifies chamber1 in ME+1/1, the upgrade is in ME+1/1
                        break;
                    case 2:
                        chamber2_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 3:
                        chamber3_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 4:
                        chamber4_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 5:
                        chamber5_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 6:
                        chamber6_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 7:
                        chamber7_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 8:
                        chamber8_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 9:
                        chamber9_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 10:
                        chamber10_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 11:
                        chamber11_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 12:
                        chamber12_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 13:
                        chamber13_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 14:
                        chamber14_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 15:
                        chamber15_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 16:
                        chamber16_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 17:
                        chamber17_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 18:
                        chamber18_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 19:
                        chamber19_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 20:
                        chamber20_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 21:
                        chamber21_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 22:
                        chamber22_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 23:
                        chamber23_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 24:
                        chamber24_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 25:
                        chamber25_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 26:
                        chamber26_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 27:
                        chamber27_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 28:
                        chamber28_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 29:
                        chamber29_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 30:
                        chamber30_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 31:
                        chamber31_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 32:
                        chamber32_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 33:
                        chamber33_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 34:
                        chamber34_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 35:
                        chamber35_bx_plot->Fill(lct_bx[i]);
                        break;
                    case 36:
                        chamber36_bx_plot->Fill(lct_bx[i]);
                        break;
                    default:
                        break;
                }//end switch
            }//end for i loop
            cout<<"LCTs in ME+1/1 filled!"<<endl;
                                             
        }//end if for selected events
        else{
            cout<<"Event "<<ievent<<" discarded!"<<endl;
        }//end else for discarded events
        
  }//end for loop events
    
    cout<<"==========="<<endl;
    cout<<"Events loop over and writing plots..."<<endl;
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

    //plot meanBx of chambers
    Double_t iChamber[36]={0};
    for(Int_t i=0;i<36;i++){
        cout<<"Mean Bx in Chamber #"<< i+1 <<" is "<<chamber_MeanBx[i]<< endl;
        iChamber[i]=i+1;
    }
    TGraph *myGraph = new TGraph(36,iChamber,chamber_MeanBx);
  
   //write all plots in the new root file
    TFile myFile("/afs/cern.ch/work/w/wshi/public/TimingStudy/TimingStudy_TOF_v3_notrigger.root","RECREATE");
  
    TCanvas *C1=new TCanvas("C1","CSCTFlct Bx ME+1/1 with TOF",700,500);
    //TCanvas *C2=new TCanvas("C2","C2",700,500);
    
    C1->cd();
    C1->SetGrid();
    myGraph->SetTitle("CSCTF LCT BX in ME+1/1 with TOF Correction no trigger");
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
  cout<<"/afs/cern.ch/work/w/wshi/public/TimingStudy/TimingStudy_TOF_v3_notrigger.root finished!"<<endl;
    cout<<"********************************************"<<endl;
    cout<<selected_event_i<<" total selected events, they're:"<<endl;
    for(int i=0;i<selected_event_i;i++){
        cout<<" #"<<selected_event[i]<<endl;
    }
    cout<<"**********************************************"<<endl;
}
