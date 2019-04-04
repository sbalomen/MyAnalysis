#define Analyze_cxx
#include "Analyze.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <utility>
#include <TLorentzVector.h>
#include <cmath>
using namespace std;

void Analyze::Loop()
{
  // if (fChain == 0) return;
  TFile *fout = TFile::Open("histsttZ.root","recreate");
  TH1D lpt("lpt","Lepton Pt",20,0,300);
  TH1D MET("MET","Missing ET",20,0,300);
  TH1D ttZMET("ttZMET","ttZ Missing ET",20,0,300);
  TH1D Zper("Zper","Zs per event",10,0,10);
  TH1D JetPt("JetPt", "Jets Pt",20,0,300);
  TH1D JetsPer("JetsPer","Jets per event",15,0,15);
  TH1D Hthist("Hthist","Ht",30,0,1500);
  TH1D eHthist("eHthist","Ht (e events)",30,0,1500);
  TH1D muHthist("muHthist","Ht (mu events)",30,0,1500); 
  TH1D Mthist("Mthist","Mt",40,0,2000);
  TH1D eMthist("eMthist","Mt (e events)",40,0,2000);
  TH1D muMthist("muMthis","Mt (mu events)",40,0,2000);
  TH2F METMt("METMt","MET:Mt",40,0,2000,20,0,300);
  TH2F eMETMt("eMETMt","MET:Mt (e events)",40,0,2000,20,0,300);
  TH2F muMETMt("muMETMt","MET:Mt (mu events)",40,0,2000,20,0,300);
  TH2F METHt("METHt","MET:Ht",30,0,1500,20,0,300);
  TH2F eMETHt("eMETHt","MET:Ht (e events)",30,0,1500,20,0,300);
  TH2F muMETHt("muMETHt","MET:Ht (mu events)",30,0,1500,20,0,300);
  TH1D DR("DR","DeltaR",20,0,5);
  
  Long64_t nentries = fChain->GetEntriesFast();
  cout << "All Entries: " <<  nentries << endl;
  
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    if (jentry%1000==0) {
      cout << "\b\b\b\b\b\b\b\b\b\b" << jentry;
      cout.flush();
    }
    //code begins here
    vector<TLorentzVector> Jets;
    TLorentzVector jet;
    TLorentzVector temp;
    TLorentzVector sum;
    TLorentzVector l;
    TLorentzVector v;
    bool f=false;
    int Z_index=-100;
    int index=0;
    int NZ=0;
    if (TopPairElectronPlusJetsSelection_FullSelection>0){
      MET.Fill(MET_ET);
      float Ht=0;
      l.SetPxPyPzE(Electrons_Px->at(TopPairElectronPlusJetsSelection_signalElectronIndex),Electrons_Py->at(TopPairElectronPlusJetsSelection_signalElectronIndex),Electrons_Pz->at(TopPairElectronPlusJetsSelection_signalElectronIndex),Electrons_Energy->at(TopPairElectronPlusJetsSelection_signalElectronIndex));
      v.SetPxPyPzE(Event_SingleNeutrinoPx,Event_SingleNeutrinoPy,Event_SingleNeutrinoPz,Event_SingleNeutrinoEnergy);
      for (unsigned int i=0; i<Jets_Mass->size(); i++){
	jet.SetPxPyPzE(Jets_Px->at(i),Jets_Py->at(i),Jets_Pz->at(i),Jets_Energy->at(i));
	if (jet.Pt()>25){
	  Jets.push_back(jet);
	}
      }	
      for (unsigned int i=0; i<GenParticle_PdgId->size(); i++, index++){
	if (GenParticle_PdgId->at(i)==23){
	  Z_index = index;
	  NZ++;
	}
	if ((fabs(GenParticle_PdgId->at(i))==12 || fabs(GenParticle_PdgId->at(i))==14 || fabs(GenParticle_PdgId->at(i)==16)) && GenParticle_MotherIndex->at(i)==Z_index){
	  f=true;
	}
      }
      Zper.Fill(NZ);
      if (f==true){
	ttZMET.Fill(MET_ET);
	DR.Fill(l.DeltaR(v));
	lpt.Fill(l.Pt());
	JetsPer.Fill(Jets.size());
	for (unsigned int i=0; i<Jets.size(); i++){
	  JetPt.Fill(Jets[i].Pt());
	  if (fabs(Jets[i].Eta())<2.4)
	  Ht = Ht + Jets[i].Pt();
	}
	Hthist.Fill(Ht);
	eHthist.Fill(Ht);
	METHt.Fill(Ht,MET_ET);
	eMETHt.Fill(Ht,MET_ET);
	for (unsigned int i=0; i<Jets.size(); i++){
	  for (unsigned int j=i+1; j<Jets.size(); j++){
	    if (Jets[i].Pt()<Jets[j].Pt()){
	      temp=Jets[i];
	      Jets[i]=Jets[j];
	      Jets[j]=temp;
	    }
	  }
	}
	sum = Jets[0]+Jets[1]+Jets[2]+Jets[3]+l;
	Mthist.Fill(sum.Mt());
	eMthist.Fill(sum.Mt());
	METMt.Fill(sum.Mt(),MET_ET);
	eMETMt.Fill(sum.Mt(),MET_ET);
      }
    }
    if (TopPairMuonPlusJetsSelection_FullSelection>0){
      MET.Fill(MET_ET);
      float Ht=0;
      l.SetPxPyPzE(Muons_Px->at(TopPairMuonPlusJetsSelection_signalMuonIndex),Muons_Py->at(TopPairMuonPlusJetsSelection_signalMuonIndex),Muons_Pz->at(TopPairMuonPlusJetsSelection_signalMuonIndex),Muons_Energy->at(TopPairMuonPlusJetsSelection_signalMuonIndex));
      v.SetPxPyPzE(Event_SingleNeutrinoPx,Event_SingleNeutrinoPy,Event_SingleNeutrinoPz,Event_SingleNeutrinoEnergy);
      for (unsigned int i=0; i<Jets_Mass->size(); i++){
	jet.SetPxPyPzE(Jets_Px->at(i),Jets_Py->at(i),Jets_Pz->at(i),Jets_Energy->at(i));
	if (jet.Pt()>25){
	  Jets.push_back(jet);
	}
      }	
      for (unsigned int i=0; i<GenParticle_PdgId->size(); i++, index++){
	if (GenParticle_PdgId->at(i)==23){
	  Z_index = index;
	  NZ++;
	}
	if ((fabs(GenParticle_PdgId->at(i))==12 || fabs(GenParticle_PdgId->at(i))==14 || fabs(GenParticle_PdgId->at(i)==16)) && GenParticle_MotherIndex->at(i)==Z_index){
	  f=true;
	}
      }
      Zper.Fill(NZ);
      if (f==true){
	ttZMET.Fill(MET_ET);
	DR.Fill(l.DeltaR(v));
	lpt.Fill(l.Pt());
	JetsPer.Fill(Jets.size());
	for (unsigned int i=0; i<Jets.size(); i++){
	  JetPt.Fill(Jets[i].Pt());
	  if (fabs(Jets[i].Eta())<2.4)
	  Ht = Ht + Jets[i].Pt();
	}
	Hthist.Fill(Ht);
	muHthist.Fill(Ht);
	METHt.Fill(Ht,MET_ET);
	muMETHt.Fill(Ht,MET_ET);
	for (unsigned int i=0; i<Jets.size(); i++){
	  for (unsigned int j=i+1; j<Jets.size(); j++){
	    if (Jets[i].Pt()<Jets[j].Pt()){
	      temp=Jets[i];
	      Jets[i]=Jets[j];
	      Jets[j]=temp;
	    }
	  }
	}
	sum = Jets[0]+Jets[1]+Jets[2]+Jets[3]+l;
	Mthist.Fill(sum.Mt());
	muMthist.Fill(sum.Mt());
	METMt.Fill(sum.Mt(),MET_ET);
	muMETMt.Fill(sum.Mt(),MET_ET);
      }
    }     
  }
  fout->Write();
  fout->Close();
}
