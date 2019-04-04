//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 28 12:27:18 2015 by ROOT version 6.02/05
// from TTree tree/
// found on file: /hdfs/TopQuarkGroup/run2/ntuples/searches/TTZToLLNUNU_M-10v2.root
//////////////////////////////////////////////////////////

#ifndef Analyze_h
#define Analyze_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include <utility>
#include <string>

class Analyze {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Bool_t          Event_isData;
   Bool_t          Event_passesAllMetFiltersOfInterest;
   Bool_t          HLTEle27WP75GsfMC_Fired;
   Bool_t          HLTIsoMu20erMC_Fired;
   Bool_t          TopPairElectronPlusJetsConversionSelection_FullSelection;
   Bool_t          TopPairElectronPlusJetsQCDSelection_FullSelection;
   Bool_t          TopPairElectronPlusJetsSelection_FullSelection;
   Bool_t          TopPairMuonPlusJetsQCDSelection3toInf_FullSelection;
   Bool_t          TopPairMuonPlusJetsQCDSelection1p5to3_FullSelection;
   Bool_t          TopPairMuonPlusJetsSelection_FullSelection;
   vector<bool>    *Electrons_HasMatchedConvPhot;
   vector<bool>    *Electrons_isTightConversionElectron;
   vector<bool>    *Electrons_isTightElectron;
   vector<bool>    *Electrons_isTightNonIsoElectron;
   vector<bool>    *Electrons_passConversionVeto;
   vector<bool>    *Event_metFilters;
   vector<bool>    *Muons_PassID;
   vector<bool>    *Muons_isGlobalMuon;
   vector<bool>    *Muons_isPFMuon;
   vector<bool>    *Muons_isTrackerMuon;
   vector<bool>    *Jets_passesMediumCSV;
   Double_t        Event_Time;
   Double_t        Event_PUWeight;
   Double_t        Event_PtHat;
   Double_t        Event_SingleLeptonEnergy;
   Double_t        Event_SingleLeptonPt;
   Double_t        Event_SingleLeptonPx;
   Double_t        Event_SingleLeptonPy;
   Double_t        Event_SingleLeptonPz;
   Double_t        Event_SingleNeutrinoEnergy;
   Double_t        Event_SingleNeutrinoPt;
   Double_t        Event_SingleNeutrinoPx;
   Double_t        Event_SingleNeutrinoPy;
   Double_t        Event_SingleNeutrinoPz;
   Double_t        Event_centralLHEWeight;
   Double_t        Event_generatorWeight;
   Double_t        Event_hadronicBEnergy;
   Double_t        Event_hadronicBPt;
   Double_t        Event_hadronicBPx;
   Double_t        Event_hadronicBPy;
   Double_t        Event_hadronicBPz;
   Double_t        Event_hadronicTopEnergy;
   Double_t        Event_hadronicTopPt;
   Double_t        Event_hadronicTopPx;
   Double_t        Event_hadronicTopPy;
   Double_t        Event_hadronicTopPz;
   Double_t        Event_hadronicWEnergy;
   Double_t        Event_hadronicWPt;
   Double_t        Event_hadronicWPx;
   Double_t        Event_hadronicWPy;
   Double_t        Event_hadronicWPz;
   Double_t        Event_hadronicdecayquarkEnergy;
   Double_t        Event_hadronicdecayquarkPt;
   Double_t        Event_hadronicdecayquarkPx;
   Double_t        Event_hadronicdecayquarkPy;
   Double_t        Event_hadronicdecayquarkPz;
   Double_t        Event_hadronicdecayquarkbarEnergy;
   Double_t        Event_hadronicdecayquarkbarPt;
   Double_t        Event_hadronicdecayquarkbarPx;
   Double_t        Event_hadronicdecayquarkbarPy;
   Double_t        Event_hadronicdecayquarkbarPz;
   Double_t        Event_leptonicBEnergy;
   Double_t        Event_leptonicBPt;
   Double_t        Event_leptonicBPx;
   Double_t        Event_leptonicBPy;
   Double_t        Event_leptonicBPz;
   Double_t        Event_leptonicTopEnergy;
   Double_t        Event_leptonicTopPt;
   Double_t        Event_leptonicTopPx;
   Double_t        Event_leptonicTopPy;
   Double_t        Event_leptonicTopPz;
   Double_t        Event_leptonicWEnergy;
   Double_t        Event_leptonicWPt;
   Double_t        Event_leptonicWPx;
   Double_t        Event_leptonicWPy;
   Double_t        Event_leptonicWPz;
   Double_t        GenMET_ET;
   Double_t        GenMET_Ex;
   Double_t        GenMET_Ey;
   Double_t        GenMET_Phi;
   Double_t        MET_ET;
   Double_t        MET_Ex;
   Double_t        MET_Ey;
   Double_t        MET_Phi;
   Double_t        MET_Significance;
   vector<double>  *Electrons_BeamSpotDXY;
   vector<double>  *Electrons_BeamSpotDXYError;
   vector<double>  *Electrons_ConvRadius;
   vector<double>  *Electrons_DCotTheta;
   vector<double>  *Electrons_DeltaEtaTrkSC;
   vector<double>  *Electrons_DeltaPhiTrkSC;
   vector<double>  *Electrons_Dist;
   vector<double>  *Electrons_ESuperClusterOverP;
   vector<double>  *Electrons_EcalIso03;
   vector<double>  *Electrons_EcalIso04;
   vector<double>  *Electrons_EcalIsoHeep03;
   vector<double>  *Electrons_EcalIsoHeep04;
   vector<double>  *Electrons_Energy;
   vector<double>  *Electrons_Fbrem;
   vector<double>  *Electrons_HadronicOverEM;
   vector<double>  *Electrons_HcalIso03;
   vector<double>  *Electrons_HcalIso04;
   vector<double>  *Electrons_HcalIsoD1Heep03;
   vector<double>  *Electrons_HcalIsoD1Heep04;
   vector<double>  *Electrons_HcalIsoD2Heep03;
   vector<double>  *Electrons_HcalIsoD2Heep04;
   vector<double>  *Electrons_PFRelIso03;
   vector<double>  *Electrons_PFRelIso03DeltaBeta;
   vector<double>  *Electrons_PFRelIso04;
   vector<double>  *Electrons_PFRelIso04DeltaBeta;
   vector<double>  *Electrons_PrimaryVertexDXY;
   vector<double>  *Electrons_PrimaryVertexDXYCorr;
   vector<double>  *Electrons_PrimaryVertexDXYError;
   vector<double>  *Electrons_Px;
   vector<double>  *Electrons_Py;
   vector<double>  *Electrons_Pz;
   vector<double>  *Electrons_RelIso03;
   vector<double>  *Electrons_RelIso04;
   vector<double>  *Electrons_SCEnergy;
   vector<double>  *Electrons_SCEta;
   vector<double>  *Electrons_SCP;
   vector<double>  *Electrons_SCPhi;
   vector<double>  *Electrons_SCPt;
   vector<double>  *Electrons_SCRawEnergy;
   vector<double>  *Electrons_SigmaEtaEta;
   vector<double>  *Electrons_SigmaIEtaIEta;
   vector<double>  *Electrons_TrkIso03;
   vector<double>  *Electrons_TrkIso04;
   vector<double>  *Electrons_TrkIsoHeep03;
   vector<double>  *Electrons_TrkIsoHeep04;
   vector<double>  *Electrons_VtxDistZ;
   vector<double>  *Electrons_VtxDistZCorr;
   vector<double>  *Electrons_eSeedClusterOverPout;
   vector<double>  *Electrons_ecalDrivenMomentum_Px;
   vector<double>  *Electrons_ecalDrivenMomentum_Py;
   vector<double>  *Electrons_ecalDrivenMomentum_Pz;
   vector<double>  *Electrons_mvaNonTrigV0;
   vector<double>  *Electrons_mvaTrigV0;
   vector<double>  *Electrons_shFracInnerHits;
   vector<double>  *Electrons_sumChargedHadronPt03;
   vector<double>  *Electrons_sumChargedHadronPt04;
   vector<double>  *Electrons_sumNeutralHadronPt03;
   vector<double>  *Electrons_sumNeutralHadronPt04;
   vector<double>  *Electrons_sumPUPt03;
   vector<double>  *Electrons_sumPUPt04;
   vector<double>  *Electrons_sumPhotonPt03;
   vector<double>  *Electrons_sumPhotonPt04;
   vector<double>  *Event_PDFWeights;
   vector<double>  *Event_systematicWeights;
   vector<double>  *GenJet_Charge;
   vector<double>  *GenJet_EMF;
   vector<double>  *GenJet_Energy;
   vector<double>  *GenJet_HADF;
   vector<double>  *GenJet_Mass;
   vector<double>  *GenJet_Px;
   vector<double>  *GenJet_Py;
   vector<double>  *GenJet_Pz;
   vector<double>  *GenParticle_Charge;
   vector<double>  *GenParticle_Energy;
   vector<double>  *GenParticle_Mass;
   vector<double>  *GenParticle_Px;
   vector<double>  *GenParticle_Py;
   vector<double>  *GenParticle_Pz;
   vector<double>  *GenParticle_VX;
   vector<double>  *GenParticle_VY;
   vector<double>  *GenParticle_VZ;
   vector<double>  *MET_METUncertaintiesPt;
   vector<double>  *MET_METUncertaintiesPx;
   vector<double>  *MET_METUncertaintiesPy;
   vector<double>  *Muons_BeamSpotDXY;
   vector<double>  *Muons_BeamSpotDXYError;
   vector<double>  *Muons_EcalIso03;
   vector<double>  *Muons_Energy;
   vector<double>  *Muons_GlobalTrack_NormalizedChi2;
   vector<double>  *Muons_HOIso03;
   vector<double>  *Muons_HcalIso03;
   vector<double>  *Muons_PFRelIso03;
   vector<double>  *Muons_PFRelIso03DeltaBeta;
   vector<double>  *Muons_PFRelIso04;
   vector<double>  *Muons_PFRelIso04DeltaBeta;
   vector<double>  *Muons_PrimaryVertexDXY;
   vector<double>  *Muons_PrimaryVertexDXYError;
   vector<double>  *Muons_Px;
   vector<double>  *Muons_Py;
   vector<double>  *Muons_Pz;
   vector<double>  *Muons_RelIso03;
   vector<double>  *Muons_RelTrkIso03;
   vector<double>  *Muons_Track_D0;
   vector<double>  *Muons_Track_D0Error;
   vector<double>  *Muons_Track_Dz;
   vector<double>  *Muons_Track_DzError;
   vector<double>  *Muons_Track_ValidFractionOfHits;
   vector<double>  *Muons_TrkIso03;
   vector<double>  *Muons_Vertex_DistZ;
   vector<double>  *Muons_sumChargedHadronPt03;
   vector<double>  *Muons_sumChargedHadronPt04;
   vector<double>  *Muons_sumNeutralHadronPt03;
   vector<double>  *Muons_sumNeutralHadronPt04;
   vector<double>  *Muons_sumPUPt03;
   vector<double>  *Muons_sumPUPt04;
   vector<double>  *Muons_sumPhotonPt03;
   vector<double>  *Muons_sumPhotonPt04;
   vector<double>  *Jets_BestVertexTrackAssociationFactor;
   vector<double>  *Jets_Charge;
   vector<double>  *Jets_ChargedEmEnergyFraction;
   vector<double>  *Jets_ChargedEmEnergyFractionRAW;
   vector<double>  *Jets_ChargedHadronEnergyFraction;
   vector<double>  *Jets_ChargedHadronEnergyFractionRAW;
   vector<double>  *Jets_ChargedMuEnergyFraction;
   vector<double>  *Jets_ClosestVertexWeighted3DSeparation;
   vector<double>  *Jets_ClosestVertexWeightedXYSeparation;
   vector<double>  *Jets_ClosestVertexWeightedZSeparation;
   vector<double>  *Jets_ElectronEnergyFraction;
   vector<double>  *Jets_Energy;
   vector<double>  *Jets_EnergyRAW;
   vector<double>  *Jets_GenJet_Energy;
   vector<double>  *Jets_GenJet_Eta;
   vector<double>  *Jets_GenJet_Phi;
   vector<double>  *Jets_GenJet_Pt;
   vector<double>  *Jets_GenJet_Px;
   vector<double>  *Jets_GenJet_Py;
   vector<double>  *Jets_GenJet_Pz;
   vector<double>  *Jets_GenParton_Energy;
   vector<double>  *Jets_GenParton_Eta;
   vector<double>  *Jets_GenParton_Phi;
   vector<double>  *Jets_GenParton_Pt;
   vector<double>  *Jets_GenParton_Px;
   vector<double>  *Jets_GenParton_Py;
   vector<double>  *Jets_GenParton_Pz;
   vector<double>  *Jets_JEC;
   vector<double>  *Jets_JECUnc;
   vector<double>  *Jets_L1OffJEC;
   vector<double>  *Jets_L2L3ResJEC;
   vector<double>  *Jets_L2RelJEC;
   vector<double>  *Jets_L3AbsJEC;
   vector<double>  *Jets_Mass;
   vector<double>  *Jets_MuonEnergyFraction;
   vector<double>  *Jets_NeutralEmEnergyFraction;
   vector<double>  *Jets_NeutralEmEnergyFractionRAW;
   vector<double>  *Jets_NeutralHadronEnergyFraction;
   vector<double>  *Jets_NeutralHadronEnergyFractionRAW;
   vector<double>  *Jets_PhotonEnergyFraction;
   vector<double>  *Jets_Px;
   vector<double>  *Jets_PxRAW;
   vector<double>  *Jets_Py;
   vector<double>  *Jets_PyRAW;
   vector<double>  *Jets_Pz;
   vector<double>  *Jets_PzRAW;
   vector<double>  *Jets_btagSF;
   vector<double>  *Jets_btagSFDown;
   vector<double>  *Jets_btagSFUp;
   vector<double>  *Jets_combinedInclusiveSecondaryVertexV2BJetTags;
   vector<double>  *PseudoTopJets_Charge;
   vector<double>  *PseudoTopJets_EMF;
   vector<double>  *PseudoTopJets_Energy;
   vector<double>  *PseudoTopJets_HADF;
   vector<double>  *PseudoTopJets_Mass;
   vector<double>  *PseudoTopJets_Px;
   vector<double>  *PseudoTopJets_Py;
   vector<double>  *PseudoTopJets_Pz;
   vector<double>  *PseudoTopLeptons_Charge;
   vector<double>  *PseudoTopLeptons_EMF;
   vector<double>  *PseudoTopLeptons_Energy;
   vector<double>  *PseudoTopLeptons_HADF;
   vector<double>  *PseudoTopLeptons_Mass;
   vector<double>  *PseudoTopLeptons_Px;
   vector<double>  *PseudoTopLeptons_Py;
   vector<double>  *PseudoTopLeptons_Pz;
   vector<double>  *PseudoTopNeutrinos_Charge;
   vector<double>  *PseudoTopNeutrinos_Energy;
   vector<double>  *PseudoTopNeutrinos_Mass;
   vector<double>  *PseudoTopNeutrinos_Px;
   vector<double>  *PseudoTopNeutrinos_Py;
   vector<double>  *PseudoTopNeutrinos_Pz;
   vector<double>  *PseudoTopNeutrinos_VX;
   vector<double>  *PseudoTopNeutrinos_VY;
   vector<double>  *PseudoTopNeutrinos_VZ;
   vector<double>  *PseudoTops_Charge;
   vector<double>  *PseudoTops_Energy;
   vector<double>  *PseudoTops_Mass;
   vector<double>  *PseudoTops_Px;
   vector<double>  *PseudoTops_Py;
   vector<double>  *PseudoTops_Pz;
   vector<double>  *PseudoTops_VX;
   vector<double>  *PseudoTops_VY;
   vector<double>  *PseudoTops_VZ;
   vector<double>  *HLTEle27WP75GsfMC_toEnergy;
   vector<double>  *HLTIsoMu20erMC_toEnergy;
   vector<double>  *Vertex_Chi2;
   vector<double>  *Vertex_NDF;
   vector<double>  *Vertex_Rho;
   vector<double>  *Vertex_X;
   vector<double>  *Vertex_XErr;
   vector<double>  *Vertex_Y;
   vector<double>  *Vertex_YErr;
   vector<double>  *Vertex_Z;
   vector<double>  *Vertex_ZErr;
   vector<float>   *HLTEle27WP75GsfMC_toEta;
   vector<float>   *HLTEle27WP75GsfMC_toPhi;
   vector<float>   *HLTEle27WP75GsfMC_toPt;
   vector<float>   *HLTIsoMu20erMC_toEta;
   vector<float>   *HLTIsoMu20erMC_toPhi;
   vector<float>   *HLTIsoMu20erMC_toPt;
   Int_t           Event_hadronicBGenJetIndex;
   Int_t           Event_hadronicDecayQuarkBarGenJetIndex;
   Int_t           Event_hadronicDecayQuarkGenJetIndex;
   Int_t           Event_leptonicBGenJetIndex;
   vector<int>     *Electrons_Charge;
   vector<int>     *Electrons_MissingHits;
   vector<int>     *Electrons_NumberOfBrems;
   vector<int>     *Electrons_VtxIndex;
   vector<int>     *Event_NumberOfTrueInteractions;
   vector<int>     *Event_PileUpInteractions;
   vector<int>     *Event_PileUpOriginBX;
   vector<int>     *Event_systematicWeightIDs;
   vector<int>     *GenJet_pdgId;
   vector<int>     *GenParticle_MotherIndex;
   vector<int>     *GenParticle_NumDaught;
   vector<int>     *GenParticle_PdgId;
   vector<int>     *GenParticle_Status;
   vector<int>     *Muons_Charge;
   vector<int>     *Muons_GlobalTrack_NumberOfValidMuonHits;
   vector<int>     *Muons_InnerTrack_NumberOfValidHits;
   vector<int>     *Muons_InnerTrack_NumberOfValidPixelHits;
   vector<int>     *Muons_InnerTrack_PixelLayersWithMeasurement;
   vector<int>     *Muons_InnerTrack_TrackerLayersWithMeasurement;
   vector<int>     *Muons_NumberOfMatchedStations;
   vector<int>     *Muons_NumberOfMatches;
   vector<int>     *Muons_Vertex_Index;
   vector<int>     *Jets_BestVertexTrackAssociationIndex;
   vector<int>     *Jets_ChargedHadronMultiplicity;
   vector<int>     *Jets_ChargedMultiplicity;
   vector<int>     *Jets_ClosestVertex3DIndex;
   vector<int>     *Jets_ClosestVertexXYIndex;
   vector<int>     *Jets_ClosestVertexZIndex;
   vector<int>     *Jets_ElectronMultiplicity;
   vector<int>     *Jets_GenParton_PdgId;
   vector<int>     *Jets_MuonMultiplicity;
   vector<int>     *Jets_NConstituents;
   vector<int>     *Jets_NeutralHadronMultiplicity;
   vector<int>     *Jets_NeutralMultiplicity;
   vector<int>     *Jets_PartonFlavour;
   vector<int>     *Jets_PassLooseID;
   vector<int>     *Jets_PassTightID;
   vector<int>     *Jets_PhotonMultiplicity;
   vector<int>     *PseudoTopJets_pdgId;
   vector<int>     *PseudoTopLeptons_pdgId;
   vector<int>     *PseudoTopNeutrinos_MotherIndex;
   vector<int>     *PseudoTopNeutrinos_NumDaught;
   vector<int>     *PseudoTopNeutrinos_PdgId;
   vector<int>     *PseudoTopNeutrinos_Status;
   vector<int>     *PseudoTops_MotherIndex;
   vector<int>     *PseudoTops_NumDaught;
   vector<int>     *PseudoTops_PdgId;
   vector<int>     *PseudoTops_Status;
   vector<int>     *Vertex_IsFake;
   vector<int>     *Vertex_NTracks;
   vector<int>     *Vertex_NTracksW05;
   UInt_t          Event_Bunch;
   UInt_t          Event_LumiSection;
   UInt_t          Event_NRecoVertices;
   UInt_t          Event_Number;
   UInt_t          Event_Run;
   UInt_t          Event_ProcessID;
   UInt_t          Event_TtbarDecay;
   UInt_t          Vertex_NRecoVertices;
   UInt_t          TopPairElectronPlusJetsConversionSelection_NumberOfBtags;
   UInt_t          TopPairElectronPlusJetsConversionSelection_NumberOfJets;
   UInt_t          TopPairElectronPlusJetsConversionSelection_signalElectronIndex;
   UInt_t          TopPairElectronPlusJetsQCDSelection_NumberOfBtags;
   UInt_t          TopPairElectronPlusJetsQCDSelection_NumberOfJets;
   UInt_t          TopPairElectronPlusJetsQCDSelection_signalElectronIndex;
   UInt_t          TopPairElectronPlusJetsSelection_NumberOfBtags;
   UInt_t          TopPairElectronPlusJetsSelection_NumberOfJets;
   UInt_t          TopPairElectronPlusJetsSelection_signalElectronIndex;
   UInt_t          TopPairMuonPlusJetsQCDSelection3toInf_NumberOfBtags;
   UInt_t          TopPairMuonPlusJetsQCDSelection3toInf_NumberOfJets;
   UInt_t          TopPairMuonPlusJetsQCDSelection3toInf_signalMuonIndex;
   UInt_t          TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfBtags;
   UInt_t          TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfJets;
   UInt_t          TopPairMuonPlusJetsQCDSelection1p5to3_signalMuonIndex;
   UInt_t          TopPairMuonPlusJetsSelection_NumberOfBtags;
   UInt_t          TopPairMuonPlusJetsSelection_NumberOfJets;
   UInt_t          TopPairMuonPlusJetsSelection_signalMuonIndex;
   vector<unsigned int> *MET_METUncertaintyTypes;
   vector<unsigned int> *passesGenSelection;
   vector<unsigned int> *passesOfflineSelection;
   vector<unsigned int> *TopPairElectronPlusJetsConversionSelection_cleanedBJetIndex;
   vector<unsigned int> *TopPairElectronPlusJetsConversionSelection_cleanedJetIndex;
   vector<unsigned int> *TopPairElectronPlusJetsQCDSelection_cleanedBJetIndex;
   vector<unsigned int> *TopPairElectronPlusJetsQCDSelection_cleanedJetIndex;
   vector<unsigned int> *TopPairElectronPlusJetsSelection_cleanedBJetIndex;
   vector<unsigned int> *TopPairElectronPlusJetsSelection_cleanedJetIndex;
   vector<unsigned int> *TopPairMuonPlusJetsQCDSelection3toInf_cleanedBJetIndex;
   vector<unsigned int> *TopPairMuonPlusJetsQCDSelection3toInf_cleanedJetIndex;
   vector<unsigned int> *TopPairMuonPlusJetsQCDSelection1p5to3_cleanedBJetIndex;
   vector<unsigned int> *TopPairMuonPlusJetsQCDSelection1p5to3_cleanedJetIndex;
   vector<unsigned int> *TopPairMuonPlusJetsSelection_cleanedBJetIndex;
   vector<unsigned int> *TopPairMuonPlusJetsSelection_cleanedJetIndex;

   // List of branches
   TBranch        *b_Event_isData;   //!
   TBranch        *b_Event_passesAllMetFiltersOfInterest;   //!
   TBranch        *b_HLTEle27WP75GsfMC_Fired;   //!
   TBranch        *b_HLTIsoMu20erMC_Fired;   //!
   TBranch        *b_TopPairElectronPlusJetsConversionSelection_FullSelection;   //!
   TBranch        *b_TopPairElectronPlusJetsQCDSelection_FullSelection;   //!
   TBranch        *b_TopPairElectronPlusJetsSelection_FullSelection;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection3toInf_FullSelection;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection1p5to3_FullSelection;   //!
   TBranch        *b_TopPairMuonPlusJetsSelection_FullSelection;   //!
   TBranch        *b_Electrons_HasMatchedConvPhot;   //!
   TBranch        *b_Electrons_isTightConversionElectron;   //!
   TBranch        *b_Electrons_isTightElectron;   //!
   TBranch        *b_Electrons_isTightNonIsoElectron;   //!
   TBranch        *b_Electrons_passConversionVeto;   //!
   TBranch        *b_Event_metFilters;   //!
   TBranch        *b_Muons_PassID;   //!
   TBranch        *b_Muons_isGlobalMuon;   //!
   TBranch        *b_Muons_isPFMuon;   //!
   TBranch        *b_Muons_isTrackerMuon;   //!
   TBranch        *b_Jets_passesMediumCSV;   //!
   TBranch        *b_Event_Time;   //!
   TBranch        *b_Event_PUWeight;   //!
   TBranch        *b_Event_PtHat;   //!
   TBranch        *b_Event_SingleLeptonEnergy;   //!
   TBranch        *b_Event_SingleLeptonPt;   //!
   TBranch        *b_Event_SingleLeptonPx;   //!
   TBranch        *b_Event_SingleLeptonPy;   //!
   TBranch        *b_Event_SingleLeptonPz;   //!
   TBranch        *b_Event_SingleNeutrinoEnergy;   //!
   TBranch        *b_Event_SingleNeutrinoPt;   //!
   TBranch        *b_Event_SingleNeutrinoPx;   //!
   TBranch        *b_Event_SingleNeutrinoPy;   //!
   TBranch        *b_Event_SingleNeutrinoPz;   //!
   TBranch        *b_Event_centralLHEWeight;   //!
   TBranch        *b_Event_generatorWeight;   //!
   TBranch        *b_Event_hadronicBEnergy;   //!
   TBranch        *b_Event_hadronicBPt;   //!
   TBranch        *b_Event_hadronicBPx;   //!
   TBranch        *b_Event_hadronicBPy;   //!
   TBranch        *b_Event_hadronicBPz;   //!
   TBranch        *b_Event_hadronicTopEnergy;   //!
   TBranch        *b_Event_hadronicTopPt;   //!
   TBranch        *b_Event_hadronicTopPx;   //!
   TBranch        *b_Event_hadronicTopPy;   //!
   TBranch        *b_Event_hadronicTopPz;   //!
   TBranch        *b_Event_hadronicWEnergy;   //!
   TBranch        *b_Event_hadronicWPt;   //!
   TBranch        *b_Event_hadronicWPx;   //!
   TBranch        *b_Event_hadronicWPy;   //!
   TBranch        *b_Event_hadronicWPz;   //!
   TBranch        *b_Event_hadronicdecayquarkEnergy;   //!
   TBranch        *b_Event_hadronicdecayquarkPt;   //!
   TBranch        *b_Event_hadronicdecayquarkPx;   //!
   TBranch        *b_Event_hadronicdecayquarkPy;   //!
   TBranch        *b_Event_hadronicdecayquarkPz;   //!
   TBranch        *b_Event_hadronicdecayquarkbarEnergy;   //!
   TBranch        *b_Event_hadronicdecayquarkbarPt;   //!
   TBranch        *b_Event_hadronicdecayquarkbarPx;   //!
   TBranch        *b_Event_hadronicdecayquarkbarPy;   //!
   TBranch        *b_Event_hadronicdecayquarkbarPz;   //!
   TBranch        *b_Event_leptonicBEnergy;   //!
   TBranch        *b_Event_leptonicBPt;   //!
   TBranch        *b_Event_leptonicBPx;   //!
   TBranch        *b_Event_leptonicBPy;   //!
   TBranch        *b_Event_leptonicBPz;   //!
   TBranch        *b_Event_leptonicTopEnergy;   //!
   TBranch        *b_Event_leptonicTopPt;   //!
   TBranch        *b_Event_leptonicTopPx;   //!
   TBranch        *b_Event_leptonicTopPy;   //!
   TBranch        *b_Event_leptonicTopPz;   //!
   TBranch        *b_Event_leptonicWEnergy;   //!
   TBranch        *b_Event_leptonicWPt;   //!
   TBranch        *b_Event_leptonicWPx;   //!
   TBranch        *b_Event_leptonicWPy;   //!
   TBranch        *b_Event_leptonicWPz;   //!
   TBranch        *b_GenMET_ET;   //!
   TBranch        *b_GenMET_Ex;   //!
   TBranch        *b_GenMET_Ey;   //!
   TBranch        *b_GenMET_Phi;   //!
   TBranch        *b_MET_ET;   //!
   TBranch        *b_MET_Ex;   //!
   TBranch        *b_MET_Ey;   //!
   TBranch        *b_MET_Phi;   //!
   TBranch        *b_MET_Significance;   //!
   TBranch        *b_Electrons_BeamSpotDXY;   //!
   TBranch        *b_Electrons_BeamSpotDXYError;   //!
   TBranch        *b_Electrons_ConvRadius;   //!
   TBranch        *b_Electrons_DCotTheta;   //!
   TBranch        *b_Electrons_DeltaEtaTrkSC;   //!
   TBranch        *b_Electrons_DeltaPhiTrkSC;   //!
   TBranch        *b_Electrons_Dist;   //!
   TBranch        *b_Electrons_ESuperClusterOverP;   //!
   TBranch        *b_Electrons_EcalIso03;   //!
   TBranch        *b_Electrons_EcalIso04;   //!
   TBranch        *b_Electrons_EcalIsoHeep03;   //!
   TBranch        *b_Electrons_EcalIsoHeep04;   //!
   TBranch        *b_Electrons_Energy;   //!
   TBranch        *b_Electrons_Fbrem;   //!
   TBranch        *b_Electrons_HadronicOverEM;   //!
   TBranch        *b_Electrons_HcalIso03;   //!
   TBranch        *b_Electrons_HcalIso04;   //!
   TBranch        *b_Electrons_HcalIsoD1Heep03;   //!
   TBranch        *b_Electrons_HcalIsoD1Heep04;   //!
   TBranch        *b_Electrons_HcalIsoD2Heep03;   //!
   TBranch        *b_Electrons_HcalIsoD2Heep04;   //!
   TBranch        *b_Electrons_PFRelIso03;   //!
   TBranch        *b_Electrons_PFRelIso03DeltaBeta;   //!
   TBranch        *b_Electrons_PFRelIso04;   //!
   TBranch        *b_Electrons_PFRelIso04DeltaBeta;   //!
   TBranch        *b_Electrons_PrimaryVertexDXY;   //!
   TBranch        *b_Electrons_PrimaryVertexDXYCorr;   //!
   TBranch        *b_Electrons_PrimaryVertexDXYError;   //!
   TBranch        *b_Electrons_Px;   //!
   TBranch        *b_Electrons_Py;   //!
   TBranch        *b_Electrons_Pz;   //!
   TBranch        *b_Electrons_RelIso03;   //!
   TBranch        *b_Electrons_RelIso04;   //!
   TBranch        *b_Electrons_SCEnergy;   //!
   TBranch        *b_Electrons_SCEta;   //!
   TBranch        *b_Electrons_SCP;   //!
   TBranch        *b_Electrons_SCPhi;   //!
   TBranch        *b_Electrons_SCPt;   //!
   TBranch        *b_Electrons_SCRawEnergy;   //!
   TBranch        *b_Electrons_SigmaEtaEta;   //!
   TBranch        *b_Electrons_SigmaIEtaIEta;   //!
   TBranch        *b_Electrons_TrkIso03;   //!
   TBranch        *b_Electrons_TrkIso04;   //!
   TBranch        *b_Electrons_TrkIsoHeep03;   //!
   TBranch        *b_Electrons_TrkIsoHeep04;   //!
   TBranch        *b_Electrons_VtxDistZ;   //!
   TBranch        *b_Electrons_VtxDistZCorr;   //!
   TBranch        *b_Electrons_eSeedClusterOverPout;   //!
   TBranch        *b_Electrons_ecalDrivenMomentum_Px;   //!
   TBranch        *b_Electrons_ecalDrivenMomentum_Py;   //!
   TBranch        *b_Electrons_ecalDrivenMomentum_Pz;   //!
   TBranch        *b_Electrons_mvaNonTrigV0;   //!
   TBranch        *b_Electrons_mvaTrigV0;   //!
   TBranch        *b_Electrons_shFracInnerHits;   //!
   TBranch        *b_Electrons_sumChargedHadronPt03;   //!
   TBranch        *b_Electrons_sumChargedHadronPt04;   //!
   TBranch        *b_Electrons_sumNeutralHadronPt03;   //!
   TBranch        *b_Electrons_sumNeutralHadronPt04;   //!
   TBranch        *b_Electrons_sumPUPt03;   //!
   TBranch        *b_Electrons_sumPUPt04;   //!
   TBranch        *b_Electrons_sumPhotonPt03;   //!
   TBranch        *b_Electrons_sumPhotonPt04;   //!
   TBranch        *b_Event_PDFWeights;   //!
   TBranch        *b_Event_systematicWeights;   //!
   TBranch        *b_GenJet_Charge;   //!
   TBranch        *b_GenJet_EMF;   //!
   TBranch        *b_GenJet_Energy;   //!
   TBranch        *b_GenJet_HADF;   //!
   TBranch        *b_GenJet_Mass;   //!
   TBranch        *b_GenJet_Px;   //!
   TBranch        *b_GenJet_Py;   //!
   TBranch        *b_GenJet_Pz;   //!
   TBranch        *b_GenParticle_Charge;   //!
   TBranch        *b_GenParticle_Energy;   //!
   TBranch        *b_GenParticle_Mass;   //!
   TBranch        *b_GenParticle_Px;   //!
   TBranch        *b_GenParticle_Py;   //!
   TBranch        *b_GenParticle_Pz;   //!
   TBranch        *b_GenParticle_VX;   //!
   TBranch        *b_GenParticle_VY;   //!
   TBranch        *b_GenParticle_VZ;   //!
   TBranch        *b_MET_METUncertaintiesPt;   //!
   TBranch        *b_MET_METUncertaintiesPx;   //!
   TBranch        *b_MET_METUncertaintiesPy;   //!
   TBranch        *b_Muons_BeamSpotDXY;   //!
   TBranch        *b_Muons_BeamSpotDXYError;   //!
   TBranch        *b_Muons_EcalIso03;   //!
   TBranch        *b_Muons_Energy;   //!
   TBranch        *b_Muons_GlobalTrack_NormalizedChi2;   //!
   TBranch        *b_Muons_HOIso03;   //!
   TBranch        *b_Muons_HcalIso03;   //!
   TBranch        *b_Muons_PFRelIso03;   //!
   TBranch        *b_Muons_PFRelIso03DeltaBeta;   //!
   TBranch        *b_Muons_PFRelIso04;   //!
   TBranch        *b_Muons_PFRelIso04DeltaBeta;   //!
   TBranch        *b_Muons_PrimaryVertexDXY;   //!
   TBranch        *b_Muons_PrimaryVertexDXYError;   //!
   TBranch        *b_Muons_Px;   //!
   TBranch        *b_Muons_Py;   //!
   TBranch        *b_Muons_Pz;   //!
   TBranch        *b_Muons_RelIso03;   //!
   TBranch        *b_Muons_RelTrkIso03;   //!
   TBranch        *b_Muons_Track_D0;   //!
   TBranch        *b_Muons_Track_D0Error;   //!
   TBranch        *b_Muons_Track_Dz;   //!
   TBranch        *b_Muons_Track_DzError;   //!
   TBranch        *b_Muons_Track_ValidFractionOfHits;   //!
   TBranch        *b_Muons_TrkIso03;   //!
   TBranch        *b_Muons_Vertex_DistZ;   //!
   TBranch        *b_Muons_sumChargedHadronPt03;   //!
   TBranch        *b_Muons_sumChargedHadronPt04;   //!
   TBranch        *b_Muons_sumNeutralHadronPt03;   //!
   TBranch        *b_Muons_sumNeutralHadronPt04;   //!
   TBranch        *b_Muons_sumPUPt03;   //!
   TBranch        *b_Muons_sumPUPt04;   //!
   TBranch        *b_Muons_sumPhotonPt03;   //!
   TBranch        *b_Muons_sumPhotonPt04;   //!
   TBranch        *b_Jets_BestVertexTrackAssociationFactor;   //!
   TBranch        *b_Jets_Charge;   //!
   TBranch        *b_Jets_ChargedEmEnergyFraction;   //!
   TBranch        *b_Jets_ChargedEmEnergyFractionRAW;   //!
   TBranch        *b_Jets_ChargedHadronEnergyFraction;   //!
   TBranch        *b_Jets_ChargedHadronEnergyFractionRAW;   //!
   TBranch        *b_Jets_ChargedMuEnergyFraction;   //!
   TBranch        *b_Jets_ClosestVertexWeighted3DSeparation;   //!
   TBranch        *b_Jets_ClosestVertexWeightedXYSeparation;   //!
   TBranch        *b_Jets_ClosestVertexWeightedZSeparation;   //!
   TBranch        *b_Jets_ElectronEnergyFraction;   //!
   TBranch        *b_Jets_Energy;   //!
   TBranch        *b_Jets_EnergyRAW;   //!
   TBranch        *b_Jets_GenJet_Energy;   //!
   TBranch        *b_Jets_GenJet_Eta;   //!
   TBranch        *b_Jets_GenJet_Phi;   //!
   TBranch        *b_Jets_GenJet_Pt;   //!
   TBranch        *b_Jets_GenJet_Px;   //!
   TBranch        *b_Jets_GenJet_Py;   //!
   TBranch        *b_Jets_GenJet_Pz;   //!
   TBranch        *b_Jets_GenParton_Energy;   //!
   TBranch        *b_Jets_GenParton_Eta;   //!
   TBranch        *b_Jets_GenParton_Phi;   //!
   TBranch        *b_Jets_GenParton_Pt;   //!
   TBranch        *b_Jets_GenParton_Px;   //!
   TBranch        *b_Jets_GenParton_Py;   //!
   TBranch        *b_Jets_GenParton_Pz;   //!
   TBranch        *b_Jets_JEC;   //!
   TBranch        *b_Jets_JECUnc;   //!
   TBranch        *b_Jets_L1OffJEC;   //!
   TBranch        *b_Jets_L2L3ResJEC;   //!
   TBranch        *b_Jets_L2RelJEC;   //!
   TBranch        *b_Jets_L3AbsJEC;   //!
   TBranch        *b_Jets_Mass;   //!
   TBranch        *b_Jets_MuonEnergyFraction;   //!
   TBranch        *b_Jets_NeutralEmEnergyFraction;   //!
   TBranch        *b_Jets_NeutralEmEnergyFractionRAW;   //!
   TBranch        *b_Jets_NeutralHadronEnergyFraction;   //!
   TBranch        *b_Jets_NeutralHadronEnergyFractionRAW;   //!
   TBranch        *b_Jets_PhotonEnergyFraction;   //!
   TBranch        *b_Jets_Px;   //!
   TBranch        *b_Jets_PxRAW;   //!
   TBranch        *b_Jets_Py;   //!
   TBranch        *b_Jets_PyRAW;   //!
   TBranch        *b_Jets_Pz;   //!
   TBranch        *b_Jets_PzRAW;   //!
   TBranch        *b_Jets_btagSF;   //!
   TBranch        *b_Jets_btagSFDown;   //!
   TBranch        *b_Jets_btagSFUp;   //!
   TBranch        *b_Jets_combinedInclusiveSecondaryVertexV2BJetTags;   //!
   TBranch        *b_PseudoTopJets_Charge;   //!
   TBranch        *b_PseudoTopJets_EMF;   //!
   TBranch        *b_PseudoTopJets_Energy;   //!
   TBranch        *b_PseudoTopJets_HADF;   //!
   TBranch        *b_PseudoTopJets_Mass;   //!
   TBranch        *b_PseudoTopJets_Px;   //!
   TBranch        *b_PseudoTopJets_Py;   //!
   TBranch        *b_PseudoTopJets_Pz;   //!
   TBranch        *b_PseudoTopLeptons_Charge;   //!
   TBranch        *b_PseudoTopLeptons_EMF;   //!
   TBranch        *b_PseudoTopLeptons_Energy;   //!
   TBranch        *b_PseudoTopLeptons_HADF;   //!
   TBranch        *b_PseudoTopLeptons_Mass;   //!
   TBranch        *b_PseudoTopLeptons_Px;   //!
   TBranch        *b_PseudoTopLeptons_Py;   //!
   TBranch        *b_PseudoTopLeptons_Pz;   //!
   TBranch        *b_PseudoTopNeutrinos_Charge;   //!
   TBranch        *b_PseudoTopNeutrinos_Energy;   //!
   TBranch        *b_PseudoTopNeutrinos_Mass;   //!
   TBranch        *b_PseudoTopNeutrinos_Px;   //!
   TBranch        *b_PseudoTopNeutrinos_Py;   //!
   TBranch        *b_PseudoTopNeutrinos_Pz;   //!
   TBranch        *b_PseudoTopNeutrinos_VX;   //!
   TBranch        *b_PseudoTopNeutrinos_VY;   //!
   TBranch        *b_PseudoTopNeutrinos_VZ;   //!
   TBranch        *b_PseudoTops_Charge;   //!
   TBranch        *b_PseudoTops_Energy;   //!
   TBranch        *b_PseudoTops_Mass;   //!
   TBranch        *b_PseudoTops_Px;   //!
   TBranch        *b_PseudoTops_Py;   //!
   TBranch        *b_PseudoTops_Pz;   //!
   TBranch        *b_PseudoTops_VX;   //!
   TBranch        *b_PseudoTops_VY;   //!
   TBranch        *b_PseudoTops_VZ;   //!
   TBranch        *b_HLTEle27WP75GsfMC_toEnergy;   //!
   TBranch        *b_HLTIsoMu20erMC_toEnergy;   //!
   TBranch        *b_Vertex_Chi2;   //!
   TBranch        *b_Vertex_NDF;   //!
   TBranch        *b_Vertex_Rho;   //!
   TBranch        *b_Vertex_X;   //!
   TBranch        *b_Vertex_XErr;   //!
   TBranch        *b_Vertex_Y;   //!
   TBranch        *b_Vertex_YErr;   //!
   TBranch        *b_Vertex_Z;   //!
   TBranch        *b_Vertex_ZErr;   //!
   TBranch        *b_HLTEle27WP75GsfMC_toEta;   //!
   TBranch        *b_HLTEle27WP75GsfMC_toPhi;   //!
   TBranch        *b_HLTEle27WP75GsfMC_toPt;   //!
   TBranch        *b_HLTIsoMu20erMC_toEta;   //!
   TBranch        *b_HLTIsoMu20erMC_toPhi;   //!
   TBranch        *b_HLTIsoMu20erMC_toPt;   //!
   TBranch        *b_Event_hadronicBGenJetIndex;   //!
   TBranch        *b_Event_hadronicDecayQuarkBarGenJetIndex;   //!
   TBranch        *b_Event_hadronicDecayQuarkGenJetIndex;   //!
   TBranch        *b_Event_leptonicBGenJetIndex;   //!
   TBranch        *b_Electrons_Charge;   //!
   TBranch        *b_Electrons_MissingHits;   //!
   TBranch        *b_Electrons_NumberOfBrems;   //!
   TBranch        *b_Electrons_VtxIndex;   //!
   TBranch        *b_Event_NumberOfTrueInteractions;   //!
   TBranch        *b_Event_PileUpInteractions;   //!
   TBranch        *b_Event_PileUpOriginBX;   //!
   TBranch        *b_Event_systematicWeightIDs;   //!
   TBranch        *b_GenJet_pdgId;   //!
   TBranch        *b_GenParticle_MotherIndex;   //!
   TBranch        *b_GenParticle_NumDaught;   //!
   TBranch        *b_GenParticle_PdgId;   //!
   TBranch        *b_GenParticle_Status;   //!
   TBranch        *b_Muons_Charge;   //!
   TBranch        *b_Muons_GlobalTrack_NumberOfValidMuonHits;   //!
   TBranch        *b_Muons_InnerTrack_NumberOfValidHits;   //!
   TBranch        *b_Muons_InnerTrack_NumberOfValidPixelHits;   //!
   TBranch        *b_Muons_InnerTrack_PixelLayersWithMeasurement;   //!
   TBranch        *b_Muons_InnerTrack_TrackerLayersWithMeasurement;   //!
   TBranch        *b_Muons_NumberOfMatchedStations;   //!
   TBranch        *b_Muons_NumberOfMatches;   //!
   TBranch        *b_Muons_Vertex_Index;   //!
   TBranch        *b_Jets_BestVertexTrackAssociationIndex;   //!
   TBranch        *b_Jets_ChargedHadronMultiplicity;   //!
   TBranch        *b_Jets_ChargedMultiplicity;   //!
   TBranch        *b_Jets_ClosestVertex3DIndex;   //!
   TBranch        *b_Jets_ClosestVertexXYIndex;   //!
   TBranch        *b_Jets_ClosestVertexZIndex;   //!
   TBranch        *b_Jets_ElectronMultiplicity;   //!
   TBranch        *b_Jets_GenParton_PdgId;   //!
   TBranch        *b_Jets_MuonMultiplicity;   //!
   TBranch        *b_Jets_NConstituents;   //!
   TBranch        *b_Jets_NeutralHadronMultiplicity;   //!
   TBranch        *b_Jets_NeutralMultiplicity;   //!
   TBranch        *b_Jets_PartonFlavour;   //!
   TBranch        *b_Jets_PassLooseID;   //!
   TBranch        *b_Jets_PassTightID;   //!
   TBranch        *b_Jets_PhotonMultiplicity;   //!
   TBranch        *b_PseudoTopJets_pdgId;   //!
   TBranch        *b_PseudoTopLeptons_pdgId;   //!
   TBranch        *b_PseudoTopNeutrinos_MotherIndex;   //!
   TBranch        *b_PseudoTopNeutrinos_NumDaught;   //!
   TBranch        *b_PseudoTopNeutrinos_PdgId;   //!
   TBranch        *b_PseudoTopNeutrinos_Status;   //!
   TBranch        *b_PseudoTops_MotherIndex;   //!
   TBranch        *b_PseudoTops_NumDaught;   //!
   TBranch        *b_PseudoTops_PdgId;   //!
   TBranch        *b_PseudoTops_Status;   //!
   TBranch        *b_Vertex_IsFake;   //!
   TBranch        *b_Vertex_NTracks;   //!
   TBranch        *b_Vertex_NTracksW05;   //!
   TBranch        *b_Event_Bunch;   //!
   TBranch        *b_Event_LumiSection;   //!
   TBranch        *b_Event_NRecoVertices;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_Run;   //!
   TBranch        *b_Event_ProcessID;   //!
   TBranch        *b_Event_TtbarDecay;   //!
   TBranch        *b_Vertex_NRecoVertices;   //!
   TBranch        *b_TopPairElectronPlusJetsConversionSelection_NumberOfBtags;   //!
   TBranch        *b_TopPairElectronPlusJetsConversionSelection_NumberOfJets;   //!
   TBranch        *b_TopPairElectronPlusJetsConversionSelection_signalElectronIndex;   //!
   TBranch        *b_TopPairElectronPlusJetsQCDSelection_NumberOfBtags;   //!
   TBranch        *b_TopPairElectronPlusJetsQCDSelection_NumberOfJets;   //!
   TBranch        *b_TopPairElectronPlusJetsQCDSelection_signalElectronIndex;   //!
   TBranch        *b_TopPairElectronPlusJetsSelection_NumberOfBtags;   //!
   TBranch        *b_TopPairElectronPlusJetsSelection_NumberOfJets;   //!
   TBranch        *b_TopPairElectronPlusJetsSelection_signalElectronIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection3toInf_NumberOfBtags;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection3toInf_NumberOfJets;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection3toInf_signalMuonIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfBtags;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfJets;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection1p5to3_signalMuonIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsSelection_NumberOfBtags;   //!
   TBranch        *b_TopPairMuonPlusJetsSelection_NumberOfJets;   //!
   TBranch        *b_TopPairMuonPlusJetsSelection_signalMuonIndex;   //!
   TBranch        *b_MET_METUncertaintyTypes;   //!
   TBranch        *b_passesGenSelection;   //!
   TBranch        *b_passesOfflineSelection;   //!
   TBranch        *b_TopPairElectronPlusJetsConversionSelection_cleanedBJetIndex;   //!
   TBranch        *b_TopPairElectronPlusJetsConversionSelection_cleanedJetIndex;   //!
   TBranch        *b_TopPairElectronPlusJetsQCDSelection_cleanedBJetIndex;   //!
   TBranch        *b_TopPairElectronPlusJetsQCDSelection_cleanedJetIndex;   //!
   TBranch        *b_TopPairElectronPlusJetsSelection_cleanedBJetIndex;   //!
   TBranch        *b_TopPairElectronPlusJetsSelection_cleanedJetIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection3toInf_cleanedBJetIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection3toInf_cleanedJetIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection1p5to3_cleanedBJetIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsQCDSelection1p5to3_cleanedJetIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsSelection_cleanedBJetIndex;   //!
   TBranch        *b_TopPairMuonPlusJetsSelection_cleanedJetIndex;   //!

   Analyze(TTree *tree=0);
   virtual ~Analyze();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Analyze_cxx
Analyze::Analyze(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(/*"hdfs/TopQuarkGroup/run2/ntuples/25ns/v12/TTJets_PowhegPythia8/ntuple_merged_001.root"*/"/hdfs/TopQuarkGroup/run2/ntuples/searches/TTZToLLNUNU_M-10v2.root");
    if (!f || !f->IsOpen()) {
      f = new TFile("/hdfs/TopQuarkGroup/run2/ntuples/searches/TTZToLLNUNU_M-10v2.root");
    }
    TDirectory * dir = (TDirectory*)f->Get("/hdfs/TopQuarkGroup/run2/ntuples/searches/TTZToLLNUNU_M-10v2.root:/nTupleTree");
    dir->GetObject("tree",tree);

  }
  
  Init(tree);
}

Analyze::~Analyze()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Analyze::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Analyze::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Analyze::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Electrons_HasMatchedConvPhot = 0;
   Electrons_isTightConversionElectron = 0;
   Electrons_isTightElectron = 0;
   Electrons_isTightNonIsoElectron = 0;
   Electrons_passConversionVeto = 0;
   Event_metFilters = 0;
   Muons_PassID = 0;
   Muons_isGlobalMuon = 0;
   Muons_isPFMuon = 0;
   Muons_isTrackerMuon = 0;
   Jets_passesMediumCSV = 0;
   Electrons_BeamSpotDXY = 0;
   Electrons_BeamSpotDXYError = 0;
   Electrons_ConvRadius = 0;
   Electrons_DCotTheta = 0;
   Electrons_DeltaEtaTrkSC = 0;
   Electrons_DeltaPhiTrkSC = 0;
   Electrons_Dist = 0;
   Electrons_ESuperClusterOverP = 0;
   Electrons_EcalIso03 = 0;
   Electrons_EcalIso04 = 0;
   Electrons_EcalIsoHeep03 = 0;
   Electrons_EcalIsoHeep04 = 0;
   Electrons_Energy = 0;
   Electrons_Fbrem = 0;
   Electrons_HadronicOverEM = 0;
   Electrons_HcalIso03 = 0;
   Electrons_HcalIso04 = 0;
   Electrons_HcalIsoD1Heep03 = 0;
   Electrons_HcalIsoD1Heep04 = 0;
   Electrons_HcalIsoD2Heep03 = 0;
   Electrons_HcalIsoD2Heep04 = 0;
   Electrons_PFRelIso03 = 0;
   Electrons_PFRelIso03DeltaBeta = 0;
   Electrons_PFRelIso04 = 0;
   Electrons_PFRelIso04DeltaBeta = 0;
   Electrons_PrimaryVertexDXY = 0;
   Electrons_PrimaryVertexDXYCorr = 0;
   Electrons_PrimaryVertexDXYError = 0;
   Electrons_Px = 0;
   Electrons_Py = 0;
   Electrons_Pz = 0;
   Electrons_RelIso03 = 0;
   Electrons_RelIso04 = 0;
   Electrons_SCEnergy = 0;
   Electrons_SCEta = 0;
   Electrons_SCP = 0;
   Electrons_SCPhi = 0;
   Electrons_SCPt = 0;
   Electrons_SCRawEnergy = 0;
   Electrons_SigmaEtaEta = 0;
   Electrons_SigmaIEtaIEta = 0;
   Electrons_TrkIso03 = 0;
   Electrons_TrkIso04 = 0;
   Electrons_TrkIsoHeep03 = 0;
   Electrons_TrkIsoHeep04 = 0;
   Electrons_VtxDistZ = 0;
   Electrons_VtxDistZCorr = 0;
   Electrons_eSeedClusterOverPout = 0;
   Electrons_ecalDrivenMomentum_Px = 0;
   Electrons_ecalDrivenMomentum_Py = 0;
   Electrons_ecalDrivenMomentum_Pz = 0;
   Electrons_mvaNonTrigV0 = 0;
   Electrons_mvaTrigV0 = 0;
   Electrons_shFracInnerHits = 0;
   Electrons_sumChargedHadronPt03 = 0;
   Electrons_sumChargedHadronPt04 = 0;
   Electrons_sumNeutralHadronPt03 = 0;
   Electrons_sumNeutralHadronPt04 = 0;
   Electrons_sumPUPt03 = 0;
   Electrons_sumPUPt04 = 0;
   Electrons_sumPhotonPt03 = 0;
   Electrons_sumPhotonPt04 = 0;
   Event_PDFWeights = 0;
   Event_systematicWeights = 0;
   GenJet_Charge = 0;
   GenJet_EMF = 0;
   GenJet_Energy = 0;
   GenJet_HADF = 0;
   GenJet_Mass = 0;
   GenJet_Px = 0;
   GenJet_Py = 0;
   GenJet_Pz = 0;
   GenParticle_Charge = 0;
   GenParticle_Energy = 0;
   GenParticle_Mass = 0;
   GenParticle_Px = 0;
   GenParticle_Py = 0;
   GenParticle_Pz = 0;
   GenParticle_VX = 0;
   GenParticle_VY = 0;
   GenParticle_VZ = 0;
   MET_METUncertaintiesPt = 0;
   MET_METUncertaintiesPx = 0;
   MET_METUncertaintiesPy = 0;
   Muons_BeamSpotDXY = 0;
   Muons_BeamSpotDXYError = 0;
   Muons_EcalIso03 = 0;
   Muons_Energy = 0;
   Muons_GlobalTrack_NormalizedChi2 = 0;
   Muons_HOIso03 = 0;
   Muons_HcalIso03 = 0;
   Muons_PFRelIso03 = 0;
   Muons_PFRelIso03DeltaBeta = 0;
   Muons_PFRelIso04 = 0;
   Muons_PFRelIso04DeltaBeta = 0;
   Muons_PrimaryVertexDXY = 0;
   Muons_PrimaryVertexDXYError = 0;
   Muons_Px = 0;
   Muons_Py = 0;
   Muons_Pz = 0;
   Muons_RelIso03 = 0;
   Muons_RelTrkIso03 = 0;
   Muons_Track_D0 = 0;
   Muons_Track_D0Error = 0;
   Muons_Track_Dz = 0;
   Muons_Track_DzError = 0;
   Muons_Track_ValidFractionOfHits = 0;
   Muons_TrkIso03 = 0;
   Muons_Vertex_DistZ = 0;
   Muons_sumChargedHadronPt03 = 0;
   Muons_sumChargedHadronPt04 = 0;
   Muons_sumNeutralHadronPt03 = 0;
   Muons_sumNeutralHadronPt04 = 0;
   Muons_sumPUPt03 = 0;
   Muons_sumPUPt04 = 0;
   Muons_sumPhotonPt03 = 0;
   Muons_sumPhotonPt04 = 0;
   Jets_BestVertexTrackAssociationFactor = 0;
   Jets_Charge = 0;
   Jets_ChargedEmEnergyFraction = 0;
   Jets_ChargedEmEnergyFractionRAW = 0;
   Jets_ChargedHadronEnergyFraction = 0;
   Jets_ChargedHadronEnergyFractionRAW = 0;
   Jets_ChargedMuEnergyFraction = 0;
   Jets_ClosestVertexWeighted3DSeparation = 0;
   Jets_ClosestVertexWeightedXYSeparation = 0;
   Jets_ClosestVertexWeightedZSeparation = 0;
   Jets_ElectronEnergyFraction = 0;
   Jets_Energy = 0;
   Jets_EnergyRAW = 0;
   Jets_GenJet_Energy = 0;
   Jets_GenJet_Eta = 0;
   Jets_GenJet_Phi = 0;
   Jets_GenJet_Pt = 0;
   Jets_GenJet_Px = 0;
   Jets_GenJet_Py = 0;
   Jets_GenJet_Pz = 0;
   Jets_GenParton_Energy = 0;
   Jets_GenParton_Eta = 0;
   Jets_GenParton_Phi = 0;
   Jets_GenParton_Pt = 0;
   Jets_GenParton_Px = 0;
   Jets_GenParton_Py = 0;
   Jets_GenParton_Pz = 0;
   Jets_JEC = 0;
   Jets_JECUnc = 0;
   Jets_L1OffJEC = 0;
   Jets_L2L3ResJEC = 0;
   Jets_L2RelJEC = 0;
   Jets_L3AbsJEC = 0;
   Jets_Mass = 0;
   Jets_MuonEnergyFraction = 0;
   Jets_NeutralEmEnergyFraction = 0;
   Jets_NeutralEmEnergyFractionRAW = 0;
   Jets_NeutralHadronEnergyFraction = 0;
   Jets_NeutralHadronEnergyFractionRAW = 0;
   Jets_PhotonEnergyFraction = 0;
   Jets_Px = 0;
   Jets_PxRAW = 0;
   Jets_Py = 0;
   Jets_PyRAW = 0;
   Jets_Pz = 0;
   Jets_PzRAW = 0;
   Jets_btagSF = 0;
   Jets_btagSFDown = 0;
   Jets_btagSFUp = 0;
   Jets_combinedInclusiveSecondaryVertexV2BJetTags = 0;
   PseudoTopJets_Charge = 0;
   PseudoTopJets_EMF = 0;
   PseudoTopJets_Energy = 0;
   PseudoTopJets_HADF = 0;
   PseudoTopJets_Mass = 0;
   PseudoTopJets_Px = 0;
   PseudoTopJets_Py = 0;
   PseudoTopJets_Pz = 0;
   PseudoTopLeptons_Charge = 0;
   PseudoTopLeptons_EMF = 0;
   PseudoTopLeptons_Energy = 0;
   PseudoTopLeptons_HADF = 0;
   PseudoTopLeptons_Mass = 0;
   PseudoTopLeptons_Px = 0;
   PseudoTopLeptons_Py = 0;
   PseudoTopLeptons_Pz = 0;
   PseudoTopNeutrinos_Charge = 0;
   PseudoTopNeutrinos_Energy = 0;
   PseudoTopNeutrinos_Mass = 0;
   PseudoTopNeutrinos_Px = 0;
   PseudoTopNeutrinos_Py = 0;
   PseudoTopNeutrinos_Pz = 0;
   PseudoTopNeutrinos_VX = 0;
   PseudoTopNeutrinos_VY = 0;
   PseudoTopNeutrinos_VZ = 0;
   PseudoTops_Charge = 0;
   PseudoTops_Energy = 0;
   PseudoTops_Mass = 0;
   PseudoTops_Px = 0;
   PseudoTops_Py = 0;
   PseudoTops_Pz = 0;
   PseudoTops_VX = 0;
   PseudoTops_VY = 0;
   PseudoTops_VZ = 0;
   HLTEle27WP75GsfMC_toEnergy = 0;
   HLTIsoMu20erMC_toEnergy = 0;
   Vertex_Chi2 = 0;
   Vertex_NDF = 0;
   Vertex_Rho = 0;
   Vertex_X = 0;
   Vertex_XErr = 0;
   Vertex_Y = 0;
   Vertex_YErr = 0;
   Vertex_Z = 0;
   Vertex_ZErr = 0;
   HLTEle27WP75GsfMC_toEta = 0;
   HLTEle27WP75GsfMC_toPhi = 0;
   HLTEle27WP75GsfMC_toPt = 0;
   HLTIsoMu20erMC_toEta = 0;
   HLTIsoMu20erMC_toPhi = 0;
   HLTIsoMu20erMC_toPt = 0;
   Electrons_Charge = 0;
   Electrons_MissingHits = 0;
   Electrons_NumberOfBrems = 0;
   Electrons_VtxIndex = 0;
   Event_NumberOfTrueInteractions = 0;
   Event_PileUpInteractions = 0;
   Event_PileUpOriginBX = 0;
   Event_systematicWeightIDs = 0;
   GenJet_pdgId = 0;
   GenParticle_MotherIndex = 0;
   GenParticle_NumDaught = 0;
   GenParticle_PdgId = 0;
   GenParticle_Status = 0;
   Muons_Charge = 0;
   Muons_GlobalTrack_NumberOfValidMuonHits = 0;
   Muons_InnerTrack_NumberOfValidHits = 0;
   Muons_InnerTrack_NumberOfValidPixelHits = 0;
   Muons_InnerTrack_PixelLayersWithMeasurement = 0;
   Muons_InnerTrack_TrackerLayersWithMeasurement = 0;
   Muons_NumberOfMatchedStations = 0;
   Muons_NumberOfMatches = 0;
   Muons_Vertex_Index = 0;
   Jets_BestVertexTrackAssociationIndex = 0;
   Jets_ChargedHadronMultiplicity = 0;
   Jets_ChargedMultiplicity = 0;
   Jets_ClosestVertex3DIndex = 0;
   Jets_ClosestVertexXYIndex = 0;
   Jets_ClosestVertexZIndex = 0;
   Jets_ElectronMultiplicity = 0;
   Jets_GenParton_PdgId = 0;
   Jets_MuonMultiplicity = 0;
   Jets_NConstituents = 0;
   Jets_NeutralHadronMultiplicity = 0;
   Jets_NeutralMultiplicity = 0;
   Jets_PartonFlavour = 0;
   Jets_PassLooseID = 0;
   Jets_PassTightID = 0;
   Jets_PhotonMultiplicity = 0;
   PseudoTopJets_pdgId = 0;
   PseudoTopLeptons_pdgId = 0;
   PseudoTopNeutrinos_MotherIndex = 0;
   PseudoTopNeutrinos_NumDaught = 0;
   PseudoTopNeutrinos_PdgId = 0;
   PseudoTopNeutrinos_Status = 0;
   PseudoTops_MotherIndex = 0;
   PseudoTops_NumDaught = 0;
   PseudoTops_PdgId = 0;
   PseudoTops_Status = 0;
   Vertex_IsFake = 0;
   Vertex_NTracks = 0;
   Vertex_NTracksW05 = 0;
   MET_METUncertaintyTypes = 0;
   passesGenSelection = 0;
   passesOfflineSelection = 0;
   TopPairElectronPlusJetsConversionSelection_cleanedBJetIndex = 0;
   TopPairElectronPlusJetsConversionSelection_cleanedJetIndex = 0;
   TopPairElectronPlusJetsQCDSelection_cleanedBJetIndex = 0;
   TopPairElectronPlusJetsQCDSelection_cleanedJetIndex = 0;
   TopPairElectronPlusJetsSelection_cleanedBJetIndex = 0;
   TopPairElectronPlusJetsSelection_cleanedJetIndex = 0;
   TopPairMuonPlusJetsQCDSelection3toInf_cleanedBJetIndex = 0;
   TopPairMuonPlusJetsQCDSelection3toInf_cleanedJetIndex = 0;
   TopPairMuonPlusJetsQCDSelection1p5to3_cleanedBJetIndex = 0;
   TopPairMuonPlusJetsQCDSelection1p5to3_cleanedJetIndex = 0;
   TopPairMuonPlusJetsSelection_cleanedBJetIndex = 0;
   TopPairMuonPlusJetsSelection_cleanedJetIndex = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event.isData", &Event_isData, &b_Event_isData);
   fChain->SetBranchAddress("Event.passesAllMetFiltersOfInterest", &Event_passesAllMetFiltersOfInterest, &b_Event_passesAllMetFiltersOfInterest);
   fChain->SetBranchAddress("HLTEle27WP75GsfMC.Fired", &HLTEle27WP75GsfMC_Fired, &b_HLTEle27WP75GsfMC_Fired);
   fChain->SetBranchAddress("HLTIsoMu20erMC.Fired", &HLTIsoMu20erMC_Fired, &b_HLTIsoMu20erMC_Fired);
   fChain->SetBranchAddress("TopPairElectronPlusJetsConversionSelection.FullSelection", &TopPairElectronPlusJetsConversionSelection_FullSelection, &b_TopPairElectronPlusJetsConversionSelection_FullSelection);
   fChain->SetBranchAddress("TopPairElectronPlusJetsQCDSelection.FullSelection", &TopPairElectronPlusJetsQCDSelection_FullSelection, &b_TopPairElectronPlusJetsQCDSelection_FullSelection);
   fChain->SetBranchAddress("TopPairElectronPlusJetsSelection.FullSelection", &TopPairElectronPlusJetsSelection_FullSelection, &b_TopPairElectronPlusJetsSelection_FullSelection);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection3toInf.FullSelection", &TopPairMuonPlusJetsQCDSelection3toInf_FullSelection, &b_TopPairMuonPlusJetsQCDSelection3toInf_FullSelection);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection1p5to3.FullSelection", &TopPairMuonPlusJetsQCDSelection1p5to3_FullSelection, &b_TopPairMuonPlusJetsQCDSelection1p5to3_FullSelection);
   fChain->SetBranchAddress("TopPairMuonPlusJetsSelection.FullSelection", &TopPairMuonPlusJetsSelection_FullSelection, &b_TopPairMuonPlusJetsSelection_FullSelection);
   fChain->SetBranchAddress("Electrons.HasMatchedConvPhot", &Electrons_HasMatchedConvPhot, &b_Electrons_HasMatchedConvPhot);
   fChain->SetBranchAddress("Electrons.isTightConversionElectron", &Electrons_isTightConversionElectron, &b_Electrons_isTightConversionElectron);
   fChain->SetBranchAddress("Electrons.isTightElectron", &Electrons_isTightElectron, &b_Electrons_isTightElectron);
   fChain->SetBranchAddress("Electrons.isTightNonIsoElectron", &Electrons_isTightNonIsoElectron, &b_Electrons_isTightNonIsoElectron);
   fChain->SetBranchAddress("Electrons.passConversionVeto", &Electrons_passConversionVeto, &b_Electrons_passConversionVeto);
   fChain->SetBranchAddress("Event.metFilters", &Event_metFilters, &b_Event_metFilters);
   fChain->SetBranchAddress("Muons.PassID", &Muons_PassID, &b_Muons_PassID);
   fChain->SetBranchAddress("Muons.isGlobalMuon", &Muons_isGlobalMuon, &b_Muons_isGlobalMuon);
   fChain->SetBranchAddress("Muons.isPFMuon", &Muons_isPFMuon, &b_Muons_isPFMuon);
   fChain->SetBranchAddress("Muons.isTrackerMuon", &Muons_isTrackerMuon, &b_Muons_isTrackerMuon);
   fChain->SetBranchAddress("Jets.passesMediumCSV", &Jets_passesMediumCSV, &b_Jets_passesMediumCSV);
   fChain->SetBranchAddress("Event.Time", &Event_Time, &b_Event_Time);
   fChain->SetBranchAddress("Event.PUWeight", &Event_PUWeight, &b_Event_PUWeight);
   fChain->SetBranchAddress("Event.PtHat", &Event_PtHat, &b_Event_PtHat);
   fChain->SetBranchAddress("Event.SingleLeptonEnergy", &Event_SingleLeptonEnergy, &b_Event_SingleLeptonEnergy);
   fChain->SetBranchAddress("Event.SingleLeptonPt", &Event_SingleLeptonPt, &b_Event_SingleLeptonPt);
   fChain->SetBranchAddress("Event.SingleLeptonPx", &Event_SingleLeptonPx, &b_Event_SingleLeptonPx);
   fChain->SetBranchAddress("Event.SingleLeptonPy", &Event_SingleLeptonPy, &b_Event_SingleLeptonPy);
   fChain->SetBranchAddress("Event.SingleLeptonPz", &Event_SingleLeptonPz, &b_Event_SingleLeptonPz);
   fChain->SetBranchAddress("Event.SingleNeutrinoEnergy", &Event_SingleNeutrinoEnergy, &b_Event_SingleNeutrinoEnergy);
   fChain->SetBranchAddress("Event.SingleNeutrinoPt", &Event_SingleNeutrinoPt, &b_Event_SingleNeutrinoPt);
   fChain->SetBranchAddress("Event.SingleNeutrinoPx", &Event_SingleNeutrinoPx, &b_Event_SingleNeutrinoPx);
   fChain->SetBranchAddress("Event.SingleNeutrinoPy", &Event_SingleNeutrinoPy, &b_Event_SingleNeutrinoPy);
   fChain->SetBranchAddress("Event.SingleNeutrinoPz", &Event_SingleNeutrinoPz, &b_Event_SingleNeutrinoPz);
   fChain->SetBranchAddress("Event.centralLHEWeight", &Event_centralLHEWeight, &b_Event_centralLHEWeight);
   fChain->SetBranchAddress("Event.generatorWeight", &Event_generatorWeight, &b_Event_generatorWeight);
   fChain->SetBranchAddress("Event.hadronicBEnergy", &Event_hadronicBEnergy, &b_Event_hadronicBEnergy);
   fChain->SetBranchAddress("Event.hadronicBPt", &Event_hadronicBPt, &b_Event_hadronicBPt);
   fChain->SetBranchAddress("Event.hadronicBPx", &Event_hadronicBPx, &b_Event_hadronicBPx);
   fChain->SetBranchAddress("Event.hadronicBPy", &Event_hadronicBPy, &b_Event_hadronicBPy);
   fChain->SetBranchAddress("Event.hadronicBPz", &Event_hadronicBPz, &b_Event_hadronicBPz);
   fChain->SetBranchAddress("Event.hadronicTopEnergy", &Event_hadronicTopEnergy, &b_Event_hadronicTopEnergy);
   fChain->SetBranchAddress("Event.hadronicTopPt", &Event_hadronicTopPt, &b_Event_hadronicTopPt);
   fChain->SetBranchAddress("Event.hadronicTopPx", &Event_hadronicTopPx, &b_Event_hadronicTopPx);
   fChain->SetBranchAddress("Event.hadronicTopPy", &Event_hadronicTopPy, &b_Event_hadronicTopPy);
   fChain->SetBranchAddress("Event.hadronicTopPz", &Event_hadronicTopPz, &b_Event_hadronicTopPz);
   fChain->SetBranchAddress("Event.hadronicWEnergy", &Event_hadronicWEnergy, &b_Event_hadronicWEnergy);
   fChain->SetBranchAddress("Event.hadronicWPt", &Event_hadronicWPt, &b_Event_hadronicWPt);
   fChain->SetBranchAddress("Event.hadronicWPx", &Event_hadronicWPx, &b_Event_hadronicWPx);
   fChain->SetBranchAddress("Event.hadronicWPy", &Event_hadronicWPy, &b_Event_hadronicWPy);
   fChain->SetBranchAddress("Event.hadronicWPz", &Event_hadronicWPz, &b_Event_hadronicWPz);
   fChain->SetBranchAddress("Event.hadronicdecayquarkEnergy", &Event_hadronicdecayquarkEnergy, &b_Event_hadronicdecayquarkEnergy);
   fChain->SetBranchAddress("Event.hadronicdecayquarkPt", &Event_hadronicdecayquarkPt, &b_Event_hadronicdecayquarkPt);
   fChain->SetBranchAddress("Event.hadronicdecayquarkPx", &Event_hadronicdecayquarkPx, &b_Event_hadronicdecayquarkPx);
   fChain->SetBranchAddress("Event.hadronicdecayquarkPy", &Event_hadronicdecayquarkPy, &b_Event_hadronicdecayquarkPy);
   fChain->SetBranchAddress("Event.hadronicdecayquarkPz", &Event_hadronicdecayquarkPz, &b_Event_hadronicdecayquarkPz);
   fChain->SetBranchAddress("Event.hadronicdecayquarkbarEnergy", &Event_hadronicdecayquarkbarEnergy, &b_Event_hadronicdecayquarkbarEnergy);
   fChain->SetBranchAddress("Event.hadronicdecayquarkbarPt", &Event_hadronicdecayquarkbarPt, &b_Event_hadronicdecayquarkbarPt);
   fChain->SetBranchAddress("Event.hadronicdecayquarkbarPx", &Event_hadronicdecayquarkbarPx, &b_Event_hadronicdecayquarkbarPx);
   fChain->SetBranchAddress("Event.hadronicdecayquarkbarPy", &Event_hadronicdecayquarkbarPy, &b_Event_hadronicdecayquarkbarPy);
   fChain->SetBranchAddress("Event.hadronicdecayquarkbarPz", &Event_hadronicdecayquarkbarPz, &b_Event_hadronicdecayquarkbarPz);
   fChain->SetBranchAddress("Event.leptonicBEnergy", &Event_leptonicBEnergy, &b_Event_leptonicBEnergy);
   fChain->SetBranchAddress("Event.leptonicBPt", &Event_leptonicBPt, &b_Event_leptonicBPt);
   fChain->SetBranchAddress("Event.leptonicBPx", &Event_leptonicBPx, &b_Event_leptonicBPx);
   fChain->SetBranchAddress("Event.leptonicBPy", &Event_leptonicBPy, &b_Event_leptonicBPy);
   fChain->SetBranchAddress("Event.leptonicBPz", &Event_leptonicBPz, &b_Event_leptonicBPz);
   fChain->SetBranchAddress("Event.leptonicTopEnergy", &Event_leptonicTopEnergy, &b_Event_leptonicTopEnergy);
   fChain->SetBranchAddress("Event.leptonicTopPt", &Event_leptonicTopPt, &b_Event_leptonicTopPt);
   fChain->SetBranchAddress("Event.leptonicTopPx", &Event_leptonicTopPx, &b_Event_leptonicTopPx);
   fChain->SetBranchAddress("Event.leptonicTopPy", &Event_leptonicTopPy, &b_Event_leptonicTopPy);
   fChain->SetBranchAddress("Event.leptonicTopPz", &Event_leptonicTopPz, &b_Event_leptonicTopPz);
   fChain->SetBranchAddress("Event.leptonicWEnergy", &Event_leptonicWEnergy, &b_Event_leptonicWEnergy);
   fChain->SetBranchAddress("Event.leptonicWPt", &Event_leptonicWPt, &b_Event_leptonicWPt);
   fChain->SetBranchAddress("Event.leptonicWPx", &Event_leptonicWPx, &b_Event_leptonicWPx);
   fChain->SetBranchAddress("Event.leptonicWPy", &Event_leptonicWPy, &b_Event_leptonicWPy);
   fChain->SetBranchAddress("Event.leptonicWPz", &Event_leptonicWPz, &b_Event_leptonicWPz);
   fChain->SetBranchAddress("GenMET.ET", &GenMET_ET, &b_GenMET_ET);
   fChain->SetBranchAddress("GenMET.Ex", &GenMET_Ex, &b_GenMET_Ex);
   fChain->SetBranchAddress("GenMET.Ey", &GenMET_Ey, &b_GenMET_Ey);
   fChain->SetBranchAddress("GenMET.Phi", &GenMET_Phi, &b_GenMET_Phi);
   fChain->SetBranchAddress("MET.ET", &MET_ET, &b_MET_ET);
   fChain->SetBranchAddress("MET.Ex", &MET_Ex, &b_MET_Ex);
   fChain->SetBranchAddress("MET.Ey", &MET_Ey, &b_MET_Ey);
   fChain->SetBranchAddress("MET.Phi", &MET_Phi, &b_MET_Phi);
   fChain->SetBranchAddress("MET.Significance", &MET_Significance, &b_MET_Significance);
   fChain->SetBranchAddress("Electrons.BeamSpotDXY", &Electrons_BeamSpotDXY, &b_Electrons_BeamSpotDXY);
   fChain->SetBranchAddress("Electrons.BeamSpotDXYError", &Electrons_BeamSpotDXYError, &b_Electrons_BeamSpotDXYError);
   fChain->SetBranchAddress("Electrons.ConvRadius", &Electrons_ConvRadius, &b_Electrons_ConvRadius);
   fChain->SetBranchAddress("Electrons.DCotTheta", &Electrons_DCotTheta, &b_Electrons_DCotTheta);
   fChain->SetBranchAddress("Electrons.DeltaEtaTrkSC", &Electrons_DeltaEtaTrkSC, &b_Electrons_DeltaEtaTrkSC);
   fChain->SetBranchAddress("Electrons.DeltaPhiTrkSC", &Electrons_DeltaPhiTrkSC, &b_Electrons_DeltaPhiTrkSC);
   fChain->SetBranchAddress("Electrons.Dist", &Electrons_Dist, &b_Electrons_Dist);
   fChain->SetBranchAddress("Electrons.ESuperClusterOverP", &Electrons_ESuperClusterOverP, &b_Electrons_ESuperClusterOverP);
   fChain->SetBranchAddress("Electrons.EcalIso03", &Electrons_EcalIso03, &b_Electrons_EcalIso03);
   fChain->SetBranchAddress("Electrons.EcalIso04", &Electrons_EcalIso04, &b_Electrons_EcalIso04);
   fChain->SetBranchAddress("Electrons.EcalIsoHeep03", &Electrons_EcalIsoHeep03, &b_Electrons_EcalIsoHeep03);
   fChain->SetBranchAddress("Electrons.EcalIsoHeep04", &Electrons_EcalIsoHeep04, &b_Electrons_EcalIsoHeep04);
   fChain->SetBranchAddress("Electrons.Energy", &Electrons_Energy, &b_Electrons_Energy);
   fChain->SetBranchAddress("Electrons.Fbrem", &Electrons_Fbrem, &b_Electrons_Fbrem);
   fChain->SetBranchAddress("Electrons.HadronicOverEM", &Electrons_HadronicOverEM, &b_Electrons_HadronicOverEM);
   fChain->SetBranchAddress("Electrons.HcalIso03", &Electrons_HcalIso03, &b_Electrons_HcalIso03);
   fChain->SetBranchAddress("Electrons.HcalIso04", &Electrons_HcalIso04, &b_Electrons_HcalIso04);
   fChain->SetBranchAddress("Electrons.HcalIsoD1Heep03", &Electrons_HcalIsoD1Heep03, &b_Electrons_HcalIsoD1Heep03);
   fChain->SetBranchAddress("Electrons.HcalIsoD1Heep04", &Electrons_HcalIsoD1Heep04, &b_Electrons_HcalIsoD1Heep04);
   fChain->SetBranchAddress("Electrons.HcalIsoD2Heep03", &Electrons_HcalIsoD2Heep03, &b_Electrons_HcalIsoD2Heep03);
   fChain->SetBranchAddress("Electrons.HcalIsoD2Heep04", &Electrons_HcalIsoD2Heep04, &b_Electrons_HcalIsoD2Heep04);
   fChain->SetBranchAddress("Electrons.PFRelIso03", &Electrons_PFRelIso03, &b_Electrons_PFRelIso03);
   fChain->SetBranchAddress("Electrons.PFRelIso03DeltaBeta", &Electrons_PFRelIso03DeltaBeta, &b_Electrons_PFRelIso03DeltaBeta);
   fChain->SetBranchAddress("Electrons.PFRelIso04", &Electrons_PFRelIso04, &b_Electrons_PFRelIso04);
   fChain->SetBranchAddress("Electrons.PFRelIso04DeltaBeta", &Electrons_PFRelIso04DeltaBeta, &b_Electrons_PFRelIso04DeltaBeta);
   fChain->SetBranchAddress("Electrons.PrimaryVertexDXY", &Electrons_PrimaryVertexDXY, &b_Electrons_PrimaryVertexDXY);
   fChain->SetBranchAddress("Electrons.PrimaryVertexDXYCorr", &Electrons_PrimaryVertexDXYCorr, &b_Electrons_PrimaryVertexDXYCorr);
   fChain->SetBranchAddress("Electrons.PrimaryVertexDXYError", &Electrons_PrimaryVertexDXYError, &b_Electrons_PrimaryVertexDXYError);
   fChain->SetBranchAddress("Electrons.Px", &Electrons_Px, &b_Electrons_Px);
   fChain->SetBranchAddress("Electrons.Py", &Electrons_Py, &b_Electrons_Py);
   fChain->SetBranchAddress("Electrons.Pz", &Electrons_Pz, &b_Electrons_Pz);
   fChain->SetBranchAddress("Electrons.RelIso03", &Electrons_RelIso03, &b_Electrons_RelIso03);
   fChain->SetBranchAddress("Electrons.RelIso04", &Electrons_RelIso04, &b_Electrons_RelIso04);
   fChain->SetBranchAddress("Electrons.SCEnergy", &Electrons_SCEnergy, &b_Electrons_SCEnergy);
   fChain->SetBranchAddress("Electrons.SCEta", &Electrons_SCEta, &b_Electrons_SCEta);
   fChain->SetBranchAddress("Electrons.SCP", &Electrons_SCP, &b_Electrons_SCP);
   fChain->SetBranchAddress("Electrons.SCPhi", &Electrons_SCPhi, &b_Electrons_SCPhi);
   fChain->SetBranchAddress("Electrons.SCPt", &Electrons_SCPt, &b_Electrons_SCPt);
   fChain->SetBranchAddress("Electrons.SCRawEnergy", &Electrons_SCRawEnergy, &b_Electrons_SCRawEnergy);
   fChain->SetBranchAddress("Electrons.SigmaEtaEta", &Electrons_SigmaEtaEta, &b_Electrons_SigmaEtaEta);
   fChain->SetBranchAddress("Electrons.SigmaIEtaIEta", &Electrons_SigmaIEtaIEta, &b_Electrons_SigmaIEtaIEta);
   fChain->SetBranchAddress("Electrons.TrkIso03", &Electrons_TrkIso03, &b_Electrons_TrkIso03);
   fChain->SetBranchAddress("Electrons.TrkIso04", &Electrons_TrkIso04, &b_Electrons_TrkIso04);
   fChain->SetBranchAddress("Electrons.TrkIsoHeep03", &Electrons_TrkIsoHeep03, &b_Electrons_TrkIsoHeep03);
   fChain->SetBranchAddress("Electrons.TrkIsoHeep04", &Electrons_TrkIsoHeep04, &b_Electrons_TrkIsoHeep04);
   fChain->SetBranchAddress("Electrons.VtxDistZ", &Electrons_VtxDistZ, &b_Electrons_VtxDistZ);
   fChain->SetBranchAddress("Electrons.VtxDistZCorr", &Electrons_VtxDistZCorr, &b_Electrons_VtxDistZCorr);
   fChain->SetBranchAddress("Electrons.eSeedClusterOverPout", &Electrons_eSeedClusterOverPout, &b_Electrons_eSeedClusterOverPout);
   fChain->SetBranchAddress("Electrons.ecalDrivenMomentum.Px", &Electrons_ecalDrivenMomentum_Px, &b_Electrons_ecalDrivenMomentum_Px);
   fChain->SetBranchAddress("Electrons.ecalDrivenMomentum.Py", &Electrons_ecalDrivenMomentum_Py, &b_Electrons_ecalDrivenMomentum_Py);
   fChain->SetBranchAddress("Electrons.ecalDrivenMomentum.Pz", &Electrons_ecalDrivenMomentum_Pz, &b_Electrons_ecalDrivenMomentum_Pz);
   fChain->SetBranchAddress("Electrons.mvaNonTrigV0", &Electrons_mvaNonTrigV0, &b_Electrons_mvaNonTrigV0);
   fChain->SetBranchAddress("Electrons.mvaTrigV0", &Electrons_mvaTrigV0, &b_Electrons_mvaTrigV0);
   fChain->SetBranchAddress("Electrons.shFracInnerHits", &Electrons_shFracInnerHits, &b_Electrons_shFracInnerHits);
   fChain->SetBranchAddress("Electrons.sumChargedHadronPt03", &Electrons_sumChargedHadronPt03, &b_Electrons_sumChargedHadronPt03);
   fChain->SetBranchAddress("Electrons.sumChargedHadronPt04", &Electrons_sumChargedHadronPt04, &b_Electrons_sumChargedHadronPt04);
   fChain->SetBranchAddress("Electrons.sumNeutralHadronPt03", &Electrons_sumNeutralHadronPt03, &b_Electrons_sumNeutralHadronPt03);
   fChain->SetBranchAddress("Electrons.sumNeutralHadronPt04", &Electrons_sumNeutralHadronPt04, &b_Electrons_sumNeutralHadronPt04);
   fChain->SetBranchAddress("Electrons.sumPUPt03", &Electrons_sumPUPt03, &b_Electrons_sumPUPt03);
   fChain->SetBranchAddress("Electrons.sumPUPt04", &Electrons_sumPUPt04, &b_Electrons_sumPUPt04);
   fChain->SetBranchAddress("Electrons.sumPhotonPt03", &Electrons_sumPhotonPt03, &b_Electrons_sumPhotonPt03);
   fChain->SetBranchAddress("Electrons.sumPhotonPt04", &Electrons_sumPhotonPt04, &b_Electrons_sumPhotonPt04);
   fChain->SetBranchAddress("Event.PDFWeights", &Event_PDFWeights, &b_Event_PDFWeights);
   fChain->SetBranchAddress("Event.systematicWeights", &Event_systematicWeights, &b_Event_systematicWeights);
   fChain->SetBranchAddress("GenJet.Charge", &GenJet_Charge, &b_GenJet_Charge);
   fChain->SetBranchAddress("GenJet.EMF", &GenJet_EMF, &b_GenJet_EMF);
   fChain->SetBranchAddress("GenJet.Energy", &GenJet_Energy, &b_GenJet_Energy);
   fChain->SetBranchAddress("GenJet.HADF", &GenJet_HADF, &b_GenJet_HADF);
   fChain->SetBranchAddress("GenJet.Mass", &GenJet_Mass, &b_GenJet_Mass);
   fChain->SetBranchAddress("GenJet.Px", &GenJet_Px, &b_GenJet_Px);
   fChain->SetBranchAddress("GenJet.Py", &GenJet_Py, &b_GenJet_Py);
   fChain->SetBranchAddress("GenJet.Pz", &GenJet_Pz, &b_GenJet_Pz);
   fChain->SetBranchAddress("GenParticle.Charge", &GenParticle_Charge, &b_GenParticle_Charge);
   fChain->SetBranchAddress("GenParticle.Energy", &GenParticle_Energy, &b_GenParticle_Energy);
   fChain->SetBranchAddress("GenParticle.Mass", &GenParticle_Mass, &b_GenParticle_Mass);
   fChain->SetBranchAddress("GenParticle.Px", &GenParticle_Px, &b_GenParticle_Px);
   fChain->SetBranchAddress("GenParticle.Py", &GenParticle_Py, &b_GenParticle_Py);
   fChain->SetBranchAddress("GenParticle.Pz", &GenParticle_Pz, &b_GenParticle_Pz);
   fChain->SetBranchAddress("GenParticle.VX", &GenParticle_VX, &b_GenParticle_VX);
   fChain->SetBranchAddress("GenParticle.VY", &GenParticle_VY, &b_GenParticle_VY);
   fChain->SetBranchAddress("GenParticle.VZ", &GenParticle_VZ, &b_GenParticle_VZ);
   fChain->SetBranchAddress("MET.METUncertaintiesPt", &MET_METUncertaintiesPt, &b_MET_METUncertaintiesPt);
   fChain->SetBranchAddress("MET.METUncertaintiesPx", &MET_METUncertaintiesPx, &b_MET_METUncertaintiesPx);
   fChain->SetBranchAddress("MET.METUncertaintiesPy", &MET_METUncertaintiesPy, &b_MET_METUncertaintiesPy);
   fChain->SetBranchAddress("Muons.BeamSpotDXY", &Muons_BeamSpotDXY, &b_Muons_BeamSpotDXY);
   fChain->SetBranchAddress("Muons.BeamSpotDXYError", &Muons_BeamSpotDXYError, &b_Muons_BeamSpotDXYError);
   fChain->SetBranchAddress("Muons.EcalIso03", &Muons_EcalIso03, &b_Muons_EcalIso03);
   fChain->SetBranchAddress("Muons.Energy", &Muons_Energy, &b_Muons_Energy);
   fChain->SetBranchAddress("Muons.GlobalTrack.NormalizedChi2", &Muons_GlobalTrack_NormalizedChi2, &b_Muons_GlobalTrack_NormalizedChi2);
   fChain->SetBranchAddress("Muons.HOIso03", &Muons_HOIso03, &b_Muons_HOIso03);
   fChain->SetBranchAddress("Muons.HcalIso03", &Muons_HcalIso03, &b_Muons_HcalIso03);
   fChain->SetBranchAddress("Muons.PFRelIso03", &Muons_PFRelIso03, &b_Muons_PFRelIso03);
   fChain->SetBranchAddress("Muons.PFRelIso03DeltaBeta", &Muons_PFRelIso03DeltaBeta, &b_Muons_PFRelIso03DeltaBeta);
   fChain->SetBranchAddress("Muons.PFRelIso04", &Muons_PFRelIso04, &b_Muons_PFRelIso04);
   fChain->SetBranchAddress("Muons.PFRelIso04DeltaBeta", &Muons_PFRelIso04DeltaBeta, &b_Muons_PFRelIso04DeltaBeta);
   fChain->SetBranchAddress("Muons.PrimaryVertexDXY", &Muons_PrimaryVertexDXY, &b_Muons_PrimaryVertexDXY);
   fChain->SetBranchAddress("Muons.PrimaryVertexDXYError", &Muons_PrimaryVertexDXYError, &b_Muons_PrimaryVertexDXYError);
   fChain->SetBranchAddress("Muons.Px", &Muons_Px, &b_Muons_Px);
   fChain->SetBranchAddress("Muons.Py", &Muons_Py, &b_Muons_Py);
   fChain->SetBranchAddress("Muons.Pz", &Muons_Pz, &b_Muons_Pz);
   fChain->SetBranchAddress("Muons.RelIso03", &Muons_RelIso03, &b_Muons_RelIso03);
   fChain->SetBranchAddress("Muons.RelTrkIso03", &Muons_RelTrkIso03, &b_Muons_RelTrkIso03);
   fChain->SetBranchAddress("Muons.Track.D0", &Muons_Track_D0, &b_Muons_Track_D0);
   fChain->SetBranchAddress("Muons.Track.D0Error", &Muons_Track_D0Error, &b_Muons_Track_D0Error);
   fChain->SetBranchAddress("Muons.Track.Dz", &Muons_Track_Dz, &b_Muons_Track_Dz);
   fChain->SetBranchAddress("Muons.Track.DzError", &Muons_Track_DzError, &b_Muons_Track_DzError);
   fChain->SetBranchAddress("Muons.Track.ValidFractionOfHits", &Muons_Track_ValidFractionOfHits, &b_Muons_Track_ValidFractionOfHits);
   fChain->SetBranchAddress("Muons.TrkIso03", &Muons_TrkIso03, &b_Muons_TrkIso03);
   fChain->SetBranchAddress("Muons.Vertex.DistZ", &Muons_Vertex_DistZ, &b_Muons_Vertex_DistZ);
   fChain->SetBranchAddress("Muons.sumChargedHadronPt03", &Muons_sumChargedHadronPt03, &b_Muons_sumChargedHadronPt03);
   fChain->SetBranchAddress("Muons.sumChargedHadronPt04", &Muons_sumChargedHadronPt04, &b_Muons_sumChargedHadronPt04);
   fChain->SetBranchAddress("Muons.sumNeutralHadronPt03", &Muons_sumNeutralHadronPt03, &b_Muons_sumNeutralHadronPt03);
   fChain->SetBranchAddress("Muons.sumNeutralHadronPt04", &Muons_sumNeutralHadronPt04, &b_Muons_sumNeutralHadronPt04);
   fChain->SetBranchAddress("Muons.sumPUPt03", &Muons_sumPUPt03, &b_Muons_sumPUPt03);
   fChain->SetBranchAddress("Muons.sumPUPt04", &Muons_sumPUPt04, &b_Muons_sumPUPt04);
   fChain->SetBranchAddress("Muons.sumPhotonPt03", &Muons_sumPhotonPt03, &b_Muons_sumPhotonPt03);
   fChain->SetBranchAddress("Muons.sumPhotonPt04", &Muons_sumPhotonPt04, &b_Muons_sumPhotonPt04);
   fChain->SetBranchAddress("Jets.BestVertexTrackAssociationFactor", &Jets_BestVertexTrackAssociationFactor, &b_Jets_BestVertexTrackAssociationFactor);
   fChain->SetBranchAddress("Jets.Charge", &Jets_Charge, &b_Jets_Charge);
   fChain->SetBranchAddress("Jets.ChargedEmEnergyFraction", &Jets_ChargedEmEnergyFraction, &b_Jets_ChargedEmEnergyFraction);
   fChain->SetBranchAddress("Jets.ChargedEmEnergyFractionRAW", &Jets_ChargedEmEnergyFractionRAW, &b_Jets_ChargedEmEnergyFractionRAW);
   fChain->SetBranchAddress("Jets.ChargedHadronEnergyFraction", &Jets_ChargedHadronEnergyFraction, &b_Jets_ChargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jets.ChargedHadronEnergyFractionRAW", &Jets_ChargedHadronEnergyFractionRAW, &b_Jets_ChargedHadronEnergyFractionRAW);
   fChain->SetBranchAddress("Jets.ChargedMuEnergyFraction", &Jets_ChargedMuEnergyFraction, &b_Jets_ChargedMuEnergyFraction);
   fChain->SetBranchAddress("Jets.ClosestVertexWeighted3DSeparation", &Jets_ClosestVertexWeighted3DSeparation, &b_Jets_ClosestVertexWeighted3DSeparation);
   fChain->SetBranchAddress("Jets.ClosestVertexWeightedXYSeparation", &Jets_ClosestVertexWeightedXYSeparation, &b_Jets_ClosestVertexWeightedXYSeparation);
   fChain->SetBranchAddress("Jets.ClosestVertexWeightedZSeparation", &Jets_ClosestVertexWeightedZSeparation, &b_Jets_ClosestVertexWeightedZSeparation);
   fChain->SetBranchAddress("Jets.ElectronEnergyFraction", &Jets_ElectronEnergyFraction, &b_Jets_ElectronEnergyFraction);
   fChain->SetBranchAddress("Jets.Energy", &Jets_Energy, &b_Jets_Energy);
   fChain->SetBranchAddress("Jets.EnergyRAW", &Jets_EnergyRAW, &b_Jets_EnergyRAW);
   fChain->SetBranchAddress("Jets.GenJet.Energy", &Jets_GenJet_Energy, &b_Jets_GenJet_Energy);
   fChain->SetBranchAddress("Jets.GenJet.Eta", &Jets_GenJet_Eta, &b_Jets_GenJet_Eta);
   fChain->SetBranchAddress("Jets.GenJet.Phi", &Jets_GenJet_Phi, &b_Jets_GenJet_Phi);
   fChain->SetBranchAddress("Jets.GenJet.Pt", &Jets_GenJet_Pt, &b_Jets_GenJet_Pt);
   fChain->SetBranchAddress("Jets.GenJet.Px", &Jets_GenJet_Px, &b_Jets_GenJet_Px);
   fChain->SetBranchAddress("Jets.GenJet.Py", &Jets_GenJet_Py, &b_Jets_GenJet_Py);
   fChain->SetBranchAddress("Jets.GenJet.Pz", &Jets_GenJet_Pz, &b_Jets_GenJet_Pz);
   fChain->SetBranchAddress("Jets.GenParton.Energy", &Jets_GenParton_Energy, &b_Jets_GenParton_Energy);
   fChain->SetBranchAddress("Jets.GenParton.Eta", &Jets_GenParton_Eta, &b_Jets_GenParton_Eta);
   fChain->SetBranchAddress("Jets.GenParton.Phi", &Jets_GenParton_Phi, &b_Jets_GenParton_Phi);
   fChain->SetBranchAddress("Jets.GenParton.Pt", &Jets_GenParton_Pt, &b_Jets_GenParton_Pt);
   fChain->SetBranchAddress("Jets.GenParton.Px", &Jets_GenParton_Px, &b_Jets_GenParton_Px);
   fChain->SetBranchAddress("Jets.GenParton.Py", &Jets_GenParton_Py, &b_Jets_GenParton_Py);
   fChain->SetBranchAddress("Jets.GenParton.Pz", &Jets_GenParton_Pz, &b_Jets_GenParton_Pz);
   fChain->SetBranchAddress("Jets.JEC", &Jets_JEC, &b_Jets_JEC);
   fChain->SetBranchAddress("Jets.JECUnc", &Jets_JECUnc, &b_Jets_JECUnc);
   fChain->SetBranchAddress("Jets.L1OffJEC", &Jets_L1OffJEC, &b_Jets_L1OffJEC);
   fChain->SetBranchAddress("Jets.L2L3ResJEC", &Jets_L2L3ResJEC, &b_Jets_L2L3ResJEC);
   fChain->SetBranchAddress("Jets.L2RelJEC", &Jets_L2RelJEC, &b_Jets_L2RelJEC);
   fChain->SetBranchAddress("Jets.L3AbsJEC", &Jets_L3AbsJEC, &b_Jets_L3AbsJEC);
   fChain->SetBranchAddress("Jets.Mass", &Jets_Mass, &b_Jets_Mass);
   fChain->SetBranchAddress("Jets.MuonEnergyFraction", &Jets_MuonEnergyFraction, &b_Jets_MuonEnergyFraction);
   fChain->SetBranchAddress("Jets.NeutralEmEnergyFraction", &Jets_NeutralEmEnergyFraction, &b_Jets_NeutralEmEnergyFraction);
   fChain->SetBranchAddress("Jets.NeutralEmEnergyFractionRAW", &Jets_NeutralEmEnergyFractionRAW, &b_Jets_NeutralEmEnergyFractionRAW);
   fChain->SetBranchAddress("Jets.NeutralHadronEnergyFraction", &Jets_NeutralHadronEnergyFraction, &b_Jets_NeutralHadronEnergyFraction);
   fChain->SetBranchAddress("Jets.NeutralHadronEnergyFractionRAW", &Jets_NeutralHadronEnergyFractionRAW, &b_Jets_NeutralHadronEnergyFractionRAW);
   fChain->SetBranchAddress("Jets.PhotonEnergyFraction", &Jets_PhotonEnergyFraction, &b_Jets_PhotonEnergyFraction);
   fChain->SetBranchAddress("Jets.Px", &Jets_Px, &b_Jets_Px);
   fChain->SetBranchAddress("Jets.PxRAW", &Jets_PxRAW, &b_Jets_PxRAW);
   fChain->SetBranchAddress("Jets.Py", &Jets_Py, &b_Jets_Py);
   fChain->SetBranchAddress("Jets.PyRAW", &Jets_PyRAW, &b_Jets_PyRAW);
   fChain->SetBranchAddress("Jets.Pz", &Jets_Pz, &b_Jets_Pz);
   fChain->SetBranchAddress("Jets.PzRAW", &Jets_PzRAW, &b_Jets_PzRAW);
   fChain->SetBranchAddress("Jets.btagSF", &Jets_btagSF, &b_Jets_btagSF);
   fChain->SetBranchAddress("Jets.btagSFDown", &Jets_btagSFDown, &b_Jets_btagSFDown);
   fChain->SetBranchAddress("Jets.btagSFUp", &Jets_btagSFUp, &b_Jets_btagSFUp);
   fChain->SetBranchAddress("Jets.combinedInclusiveSecondaryVertexV2BJetTags", &Jets_combinedInclusiveSecondaryVertexV2BJetTags, &b_Jets_combinedInclusiveSecondaryVertexV2BJetTags);
   fChain->SetBranchAddress("PseudoTopJets.Charge", &PseudoTopJets_Charge, &b_PseudoTopJets_Charge);
   fChain->SetBranchAddress("PseudoTopJets.EMF", &PseudoTopJets_EMF, &b_PseudoTopJets_EMF);
   fChain->SetBranchAddress("PseudoTopJets.Energy", &PseudoTopJets_Energy, &b_PseudoTopJets_Energy);
   fChain->SetBranchAddress("PseudoTopJets.HADF", &PseudoTopJets_HADF, &b_PseudoTopJets_HADF);
   fChain->SetBranchAddress("PseudoTopJets.Mass", &PseudoTopJets_Mass, &b_PseudoTopJets_Mass);
   fChain->SetBranchAddress("PseudoTopJets.Px", &PseudoTopJets_Px, &b_PseudoTopJets_Px);
   fChain->SetBranchAddress("PseudoTopJets.Py", &PseudoTopJets_Py, &b_PseudoTopJets_Py);
   fChain->SetBranchAddress("PseudoTopJets.Pz", &PseudoTopJets_Pz, &b_PseudoTopJets_Pz);
   fChain->SetBranchAddress("PseudoTopLeptons.Charge", &PseudoTopLeptons_Charge, &b_PseudoTopLeptons_Charge);
   fChain->SetBranchAddress("PseudoTopLeptons.EMF", &PseudoTopLeptons_EMF, &b_PseudoTopLeptons_EMF);
   fChain->SetBranchAddress("PseudoTopLeptons.Energy", &PseudoTopLeptons_Energy, &b_PseudoTopLeptons_Energy);
   fChain->SetBranchAddress("PseudoTopLeptons.HADF", &PseudoTopLeptons_HADF, &b_PseudoTopLeptons_HADF);
   fChain->SetBranchAddress("PseudoTopLeptons.Mass", &PseudoTopLeptons_Mass, &b_PseudoTopLeptons_Mass);
   fChain->SetBranchAddress("PseudoTopLeptons.Px", &PseudoTopLeptons_Px, &b_PseudoTopLeptons_Px);
   fChain->SetBranchAddress("PseudoTopLeptons.Py", &PseudoTopLeptons_Py, &b_PseudoTopLeptons_Py);
   fChain->SetBranchAddress("PseudoTopLeptons.Pz", &PseudoTopLeptons_Pz, &b_PseudoTopLeptons_Pz);
   fChain->SetBranchAddress("PseudoTopNeutrinos.Charge", &PseudoTopNeutrinos_Charge, &b_PseudoTopNeutrinos_Charge);
   fChain->SetBranchAddress("PseudoTopNeutrinos.Energy", &PseudoTopNeutrinos_Energy, &b_PseudoTopNeutrinos_Energy);
   fChain->SetBranchAddress("PseudoTopNeutrinos.Mass", &PseudoTopNeutrinos_Mass, &b_PseudoTopNeutrinos_Mass);
   fChain->SetBranchAddress("PseudoTopNeutrinos.Px", &PseudoTopNeutrinos_Px, &b_PseudoTopNeutrinos_Px);
   fChain->SetBranchAddress("PseudoTopNeutrinos.Py", &PseudoTopNeutrinos_Py, &b_PseudoTopNeutrinos_Py);
   fChain->SetBranchAddress("PseudoTopNeutrinos.Pz", &PseudoTopNeutrinos_Pz, &b_PseudoTopNeutrinos_Pz);
   fChain->SetBranchAddress("PseudoTopNeutrinos.VX", &PseudoTopNeutrinos_VX, &b_PseudoTopNeutrinos_VX);
   fChain->SetBranchAddress("PseudoTopNeutrinos.VY", &PseudoTopNeutrinos_VY, &b_PseudoTopNeutrinos_VY);
   fChain->SetBranchAddress("PseudoTopNeutrinos.VZ", &PseudoTopNeutrinos_VZ, &b_PseudoTopNeutrinos_VZ);
   fChain->SetBranchAddress("PseudoTops.Charge", &PseudoTops_Charge, &b_PseudoTops_Charge);
   fChain->SetBranchAddress("PseudoTops.Energy", &PseudoTops_Energy, &b_PseudoTops_Energy);
   fChain->SetBranchAddress("PseudoTops.Mass", &PseudoTops_Mass, &b_PseudoTops_Mass);
   fChain->SetBranchAddress("PseudoTops.Px", &PseudoTops_Px, &b_PseudoTops_Px);
   fChain->SetBranchAddress("PseudoTops.Py", &PseudoTops_Py, &b_PseudoTops_Py);
   fChain->SetBranchAddress("PseudoTops.Pz", &PseudoTops_Pz, &b_PseudoTops_Pz);
   fChain->SetBranchAddress("PseudoTops.VX", &PseudoTops_VX, &b_PseudoTops_VX);
   fChain->SetBranchAddress("PseudoTops.VY", &PseudoTops_VY, &b_PseudoTops_VY);
   fChain->SetBranchAddress("PseudoTops.VZ", &PseudoTops_VZ, &b_PseudoTops_VZ);
   fChain->SetBranchAddress("HLTEle27WP75GsfMC.toEnergy", &HLTEle27WP75GsfMC_toEnergy, &b_HLTEle27WP75GsfMC_toEnergy);
   fChain->SetBranchAddress("HLTIsoMu20erMC.toEnergy", &HLTIsoMu20erMC_toEnergy, &b_HLTIsoMu20erMC_toEnergy);
   fChain->SetBranchAddress("Vertex.Chi2", &Vertex_Chi2, &b_Vertex_Chi2);
   fChain->SetBranchAddress("Vertex.NDF", &Vertex_NDF, &b_Vertex_NDF);
   fChain->SetBranchAddress("Vertex.Rho", &Vertex_Rho, &b_Vertex_Rho);
   fChain->SetBranchAddress("Vertex.X", &Vertex_X, &b_Vertex_X);
   fChain->SetBranchAddress("Vertex.XErr", &Vertex_XErr, &b_Vertex_XErr);
   fChain->SetBranchAddress("Vertex.Y", &Vertex_Y, &b_Vertex_Y);
   fChain->SetBranchAddress("Vertex.YErr", &Vertex_YErr, &b_Vertex_YErr);
   fChain->SetBranchAddress("Vertex.Z", &Vertex_Z, &b_Vertex_Z);
   fChain->SetBranchAddress("Vertex.ZErr", &Vertex_ZErr, &b_Vertex_ZErr);
   fChain->SetBranchAddress("HLTEle27WP75GsfMC.toEta", &HLTEle27WP75GsfMC_toEta, &b_HLTEle27WP75GsfMC_toEta);
   fChain->SetBranchAddress("HLTEle27WP75GsfMC.toPhi", &HLTEle27WP75GsfMC_toPhi, &b_HLTEle27WP75GsfMC_toPhi);
   fChain->SetBranchAddress("HLTEle27WP75GsfMC.toPt", &HLTEle27WP75GsfMC_toPt, &b_HLTEle27WP75GsfMC_toPt);
   fChain->SetBranchAddress("HLTIsoMu20erMC.toEta", &HLTIsoMu20erMC_toEta, &b_HLTIsoMu20erMC_toEta);
   fChain->SetBranchAddress("HLTIsoMu20erMC.toPhi", &HLTIsoMu20erMC_toPhi, &b_HLTIsoMu20erMC_toPhi);
   fChain->SetBranchAddress("HLTIsoMu20erMC.toPt", &HLTIsoMu20erMC_toPt, &b_HLTIsoMu20erMC_toPt);
   fChain->SetBranchAddress("Event.hadronicBGenJetIndex", &Event_hadronicBGenJetIndex, &b_Event_hadronicBGenJetIndex);
   fChain->SetBranchAddress("Event.hadronicDecayQuarkBarGenJetIndex", &Event_hadronicDecayQuarkBarGenJetIndex, &b_Event_hadronicDecayQuarkBarGenJetIndex);
   fChain->SetBranchAddress("Event.hadronicDecayQuarkGenJetIndex", &Event_hadronicDecayQuarkGenJetIndex, &b_Event_hadronicDecayQuarkGenJetIndex);
   fChain->SetBranchAddress("Event.leptonicBGenJetIndex", &Event_leptonicBGenJetIndex, &b_Event_leptonicBGenJetIndex);
   fChain->SetBranchAddress("Electrons.Charge", &Electrons_Charge, &b_Electrons_Charge);
   fChain->SetBranchAddress("Electrons.MissingHits", &Electrons_MissingHits, &b_Electrons_MissingHits);
   fChain->SetBranchAddress("Electrons.NumberOfBrems", &Electrons_NumberOfBrems, &b_Electrons_NumberOfBrems);
   fChain->SetBranchAddress("Electrons.VtxIndex", &Electrons_VtxIndex, &b_Electrons_VtxIndex);
   fChain->SetBranchAddress("Event.NumberOfTrueInteractions", &Event_NumberOfTrueInteractions, &b_Event_NumberOfTrueInteractions);
   fChain->SetBranchAddress("Event.PileUpInteractions", &Event_PileUpInteractions, &b_Event_PileUpInteractions);
   fChain->SetBranchAddress("Event.PileUpOriginBX", &Event_PileUpOriginBX, &b_Event_PileUpOriginBX);
   fChain->SetBranchAddress("Event.systematicWeightIDs", &Event_systematicWeightIDs, &b_Event_systematicWeightIDs);
   fChain->SetBranchAddress("GenJet.pdgId", &GenJet_pdgId, &b_GenJet_pdgId);
   fChain->SetBranchAddress("GenParticle.MotherIndex", &GenParticle_MotherIndex, &b_GenParticle_MotherIndex);
   fChain->SetBranchAddress("GenParticle.NumDaught", &GenParticle_NumDaught, &b_GenParticle_NumDaught);
   fChain->SetBranchAddress("GenParticle.PdgId", &GenParticle_PdgId, &b_GenParticle_PdgId);
   fChain->SetBranchAddress("GenParticle.Status", &GenParticle_Status, &b_GenParticle_Status);
   fChain->SetBranchAddress("Muons.Charge", &Muons_Charge, &b_Muons_Charge);
   fChain->SetBranchAddress("Muons.GlobalTrack.NumberOfValidMuonHits", &Muons_GlobalTrack_NumberOfValidMuonHits, &b_Muons_GlobalTrack_NumberOfValidMuonHits);
   fChain->SetBranchAddress("Muons.InnerTrack.NumberOfValidHits", &Muons_InnerTrack_NumberOfValidHits, &b_Muons_InnerTrack_NumberOfValidHits);
   fChain->SetBranchAddress("Muons.InnerTrack.NumberOfValidPixelHits", &Muons_InnerTrack_NumberOfValidPixelHits, &b_Muons_InnerTrack_NumberOfValidPixelHits);
   fChain->SetBranchAddress("Muons.InnerTrack.PixelLayersWithMeasurement", &Muons_InnerTrack_PixelLayersWithMeasurement, &b_Muons_InnerTrack_PixelLayersWithMeasurement);
   fChain->SetBranchAddress("Muons.InnerTrack.TrackerLayersWithMeasurement", &Muons_InnerTrack_TrackerLayersWithMeasurement, &b_Muons_InnerTrack_TrackerLayersWithMeasurement);
   fChain->SetBranchAddress("Muons.NumberOfMatchedStations", &Muons_NumberOfMatchedStations, &b_Muons_NumberOfMatchedStations);
   fChain->SetBranchAddress("Muons.NumberOfMatches", &Muons_NumberOfMatches, &b_Muons_NumberOfMatches);
   fChain->SetBranchAddress("Muons.Vertex.Index", &Muons_Vertex_Index, &b_Muons_Vertex_Index);
   fChain->SetBranchAddress("Jets.BestVertexTrackAssociationIndex", &Jets_BestVertexTrackAssociationIndex, &b_Jets_BestVertexTrackAssociationIndex);
   fChain->SetBranchAddress("Jets.ChargedHadronMultiplicity", &Jets_ChargedHadronMultiplicity, &b_Jets_ChargedHadronMultiplicity);
   fChain->SetBranchAddress("Jets.ChargedMultiplicity", &Jets_ChargedMultiplicity, &b_Jets_ChargedMultiplicity);
   fChain->SetBranchAddress("Jets.ClosestVertex3DIndex", &Jets_ClosestVertex3DIndex, &b_Jets_ClosestVertex3DIndex);
   fChain->SetBranchAddress("Jets.ClosestVertexXYIndex", &Jets_ClosestVertexXYIndex, &b_Jets_ClosestVertexXYIndex);
   fChain->SetBranchAddress("Jets.ClosestVertexZIndex", &Jets_ClosestVertexZIndex, &b_Jets_ClosestVertexZIndex);
   fChain->SetBranchAddress("Jets.ElectronMultiplicity", &Jets_ElectronMultiplicity, &b_Jets_ElectronMultiplicity);
   fChain->SetBranchAddress("Jets.GenParton.PdgId", &Jets_GenParton_PdgId, &b_Jets_GenParton_PdgId);
   fChain->SetBranchAddress("Jets.MuonMultiplicity", &Jets_MuonMultiplicity, &b_Jets_MuonMultiplicity);
   fChain->SetBranchAddress("Jets.NConstituents", &Jets_NConstituents, &b_Jets_NConstituents);
   fChain->SetBranchAddress("Jets.NeutralHadronMultiplicity", &Jets_NeutralHadronMultiplicity, &b_Jets_NeutralHadronMultiplicity);
   fChain->SetBranchAddress("Jets.NeutralMultiplicity", &Jets_NeutralMultiplicity, &b_Jets_NeutralMultiplicity);
   fChain->SetBranchAddress("Jets.PartonFlavour", &Jets_PartonFlavour, &b_Jets_PartonFlavour);
   fChain->SetBranchAddress("Jets.PassLooseID", &Jets_PassLooseID, &b_Jets_PassLooseID);
   fChain->SetBranchAddress("Jets.PassTightID", &Jets_PassTightID, &b_Jets_PassTightID);
   fChain->SetBranchAddress("Jets.PhotonMultiplicity", &Jets_PhotonMultiplicity, &b_Jets_PhotonMultiplicity);
   fChain->SetBranchAddress("PseudoTopJets.pdgId", &PseudoTopJets_pdgId, &b_PseudoTopJets_pdgId);
   fChain->SetBranchAddress("PseudoTopLeptons.pdgId", &PseudoTopLeptons_pdgId, &b_PseudoTopLeptons_pdgId);
   fChain->SetBranchAddress("PseudoTopNeutrinos.MotherIndex", &PseudoTopNeutrinos_MotherIndex, &b_PseudoTopNeutrinos_MotherIndex);
   fChain->SetBranchAddress("PseudoTopNeutrinos.NumDaught", &PseudoTopNeutrinos_NumDaught, &b_PseudoTopNeutrinos_NumDaught);
   fChain->SetBranchAddress("PseudoTopNeutrinos.PdgId", &PseudoTopNeutrinos_PdgId, &b_PseudoTopNeutrinos_PdgId);
   fChain->SetBranchAddress("PseudoTopNeutrinos.Status", &PseudoTopNeutrinos_Status, &b_PseudoTopNeutrinos_Status);
   fChain->SetBranchAddress("PseudoTops.MotherIndex", &PseudoTops_MotherIndex, &b_PseudoTops_MotherIndex);
   fChain->SetBranchAddress("PseudoTops.NumDaught", &PseudoTops_NumDaught, &b_PseudoTops_NumDaught);
   fChain->SetBranchAddress("PseudoTops.PdgId", &PseudoTops_PdgId, &b_PseudoTops_PdgId);
   fChain->SetBranchAddress("PseudoTops.Status", &PseudoTops_Status, &b_PseudoTops_Status);
   fChain->SetBranchAddress("Vertex.IsFake", &Vertex_IsFake, &b_Vertex_IsFake);
   fChain->SetBranchAddress("Vertex.NTracks", &Vertex_NTracks, &b_Vertex_NTracks);
   fChain->SetBranchAddress("Vertex.NTracksW05", &Vertex_NTracksW05, &b_Vertex_NTracksW05);
   fChain->SetBranchAddress("Event.Bunch", &Event_Bunch, &b_Event_Bunch);
   fChain->SetBranchAddress("Event.LumiSection", &Event_LumiSection, &b_Event_LumiSection);
   fChain->SetBranchAddress("Event.NRecoVertices", &Event_NRecoVertices, &b_Event_NRecoVertices);
   fChain->SetBranchAddress("Event.Number", &Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.Run", &Event_Run, &b_Event_Run);
   fChain->SetBranchAddress("Event.ProcessID", &Event_ProcessID, &b_Event_ProcessID);
   fChain->SetBranchAddress("Event.TtbarDecay", &Event_TtbarDecay, &b_Event_TtbarDecay);
   fChain->SetBranchAddress("Vertex.NRecoVertices", &Vertex_NRecoVertices, &b_Vertex_NRecoVertices);
   fChain->SetBranchAddress("TopPairElectronPlusJetsConversionSelection.NumberOfBtags", &TopPairElectronPlusJetsConversionSelection_NumberOfBtags, &b_TopPairElectronPlusJetsConversionSelection_NumberOfBtags);
   fChain->SetBranchAddress("TopPairElectronPlusJetsConversionSelection.NumberOfJets", &TopPairElectronPlusJetsConversionSelection_NumberOfJets, &b_TopPairElectronPlusJetsConversionSelection_NumberOfJets);
   fChain->SetBranchAddress("TopPairElectronPlusJetsConversionSelection.signalElectronIndex", &TopPairElectronPlusJetsConversionSelection_signalElectronIndex, &b_TopPairElectronPlusJetsConversionSelection_signalElectronIndex);
   fChain->SetBranchAddress("TopPairElectronPlusJetsQCDSelection.NumberOfBtags", &TopPairElectronPlusJetsQCDSelection_NumberOfBtags, &b_TopPairElectronPlusJetsQCDSelection_NumberOfBtags);
   fChain->SetBranchAddress("TopPairElectronPlusJetsQCDSelection.NumberOfJets", &TopPairElectronPlusJetsQCDSelection_NumberOfJets, &b_TopPairElectronPlusJetsQCDSelection_NumberOfJets);
   fChain->SetBranchAddress("TopPairElectronPlusJetsQCDSelection.signalElectronIndex", &TopPairElectronPlusJetsQCDSelection_signalElectronIndex, &b_TopPairElectronPlusJetsQCDSelection_signalElectronIndex);
   fChain->SetBranchAddress("TopPairElectronPlusJetsSelection.NumberOfBtags", &TopPairElectronPlusJetsSelection_NumberOfBtags, &b_TopPairElectronPlusJetsSelection_NumberOfBtags);
   fChain->SetBranchAddress("TopPairElectronPlusJetsSelection.NumberOfJets", &TopPairElectronPlusJetsSelection_NumberOfJets, &b_TopPairElectronPlusJetsSelection_NumberOfJets);
   fChain->SetBranchAddress("TopPairElectronPlusJetsSelection.signalElectronIndex", &TopPairElectronPlusJetsSelection_signalElectronIndex, &b_TopPairElectronPlusJetsSelection_signalElectronIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection3toInf.NumberOfBtags", &TopPairMuonPlusJetsQCDSelection3toInf_NumberOfBtags, &b_TopPairMuonPlusJetsQCDSelection3toInf_NumberOfBtags);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection3toInf.NumberOfJets", &TopPairMuonPlusJetsQCDSelection3toInf_NumberOfJets, &b_TopPairMuonPlusJetsQCDSelection3toInf_NumberOfJets);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection3toInf.signalMuonIndex", &TopPairMuonPlusJetsQCDSelection3toInf_signalMuonIndex, &b_TopPairMuonPlusJetsQCDSelection3toInf_signalMuonIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection1p5to3.NumberOfBtags", &TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfBtags, &b_TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfBtags);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection1p5to3.NumberOfJets", &TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfJets, &b_TopPairMuonPlusJetsQCDSelection1p5to3_NumberOfJets);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection1p5to3.signalMuonIndex", &TopPairMuonPlusJetsQCDSelection1p5to3_signalMuonIndex, &b_TopPairMuonPlusJetsQCDSelection1p5to3_signalMuonIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsSelection.NumberOfBtags", &TopPairMuonPlusJetsSelection_NumberOfBtags, &b_TopPairMuonPlusJetsSelection_NumberOfBtags);
   fChain->SetBranchAddress("TopPairMuonPlusJetsSelection.NumberOfJets", &TopPairMuonPlusJetsSelection_NumberOfJets, &b_TopPairMuonPlusJetsSelection_NumberOfJets);
   fChain->SetBranchAddress("TopPairMuonPlusJetsSelection.signalMuonIndex", &TopPairMuonPlusJetsSelection_signalMuonIndex, &b_TopPairMuonPlusJetsSelection_signalMuonIndex);
   fChain->SetBranchAddress("MET.METUncertaintyTypes", &MET_METUncertaintyTypes, &b_MET_METUncertaintyTypes);
   fChain->SetBranchAddress("passesGenSelection", &passesGenSelection, &b_passesGenSelection);
   fChain->SetBranchAddress("passesOfflineSelection", &passesOfflineSelection, &b_passesOfflineSelection);
   fChain->SetBranchAddress("TopPairElectronPlusJetsConversionSelection.cleanedBJetIndex", &TopPairElectronPlusJetsConversionSelection_cleanedBJetIndex, &b_TopPairElectronPlusJetsConversionSelection_cleanedBJetIndex);
   fChain->SetBranchAddress("TopPairElectronPlusJetsConversionSelection.cleanedJetIndex", &TopPairElectronPlusJetsConversionSelection_cleanedJetIndex, &b_TopPairElectronPlusJetsConversionSelection_cleanedJetIndex);
   fChain->SetBranchAddress("TopPairElectronPlusJetsQCDSelection.cleanedBJetIndex", &TopPairElectronPlusJetsQCDSelection_cleanedBJetIndex, &b_TopPairElectronPlusJetsQCDSelection_cleanedBJetIndex);
   fChain->SetBranchAddress("TopPairElectronPlusJetsQCDSelection.cleanedJetIndex", &TopPairElectronPlusJetsQCDSelection_cleanedJetIndex, &b_TopPairElectronPlusJetsQCDSelection_cleanedJetIndex);
   fChain->SetBranchAddress("TopPairElectronPlusJetsSelection.cleanedBJetIndex", &TopPairElectronPlusJetsSelection_cleanedBJetIndex, &b_TopPairElectronPlusJetsSelection_cleanedBJetIndex);
   fChain->SetBranchAddress("TopPairElectronPlusJetsSelection.cleanedJetIndex", &TopPairElectronPlusJetsSelection_cleanedJetIndex, &b_TopPairElectronPlusJetsSelection_cleanedJetIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection3toInf.cleanedBJetIndex", &TopPairMuonPlusJetsQCDSelection3toInf_cleanedBJetIndex, &b_TopPairMuonPlusJetsQCDSelection3toInf_cleanedBJetIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection3toInf.cleanedJetIndex", &TopPairMuonPlusJetsQCDSelection3toInf_cleanedJetIndex, &b_TopPairMuonPlusJetsQCDSelection3toInf_cleanedJetIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection1p5to3.cleanedBJetIndex", &TopPairMuonPlusJetsQCDSelection1p5to3_cleanedBJetIndex, &b_TopPairMuonPlusJetsQCDSelection1p5to3_cleanedBJetIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsQCDSelection1p5to3.cleanedJetIndex", &TopPairMuonPlusJetsQCDSelection1p5to3_cleanedJetIndex, &b_TopPairMuonPlusJetsQCDSelection1p5to3_cleanedJetIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsSelection.cleanedBJetIndex", &TopPairMuonPlusJetsSelection_cleanedBJetIndex, &b_TopPairMuonPlusJetsSelection_cleanedBJetIndex);
   fChain->SetBranchAddress("TopPairMuonPlusJetsSelection.cleanedJetIndex", &TopPairMuonPlusJetsSelection_cleanedJetIndex, &b_TopPairMuonPlusJetsSelection_cleanedJetIndex);
   Notify();
}

Bool_t Analyze::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Analyze::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Analyze::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Analysis_cxx
