//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Jul 22 21:11:35 2017 by ROOT version 6.08/06
// from TTree fTree/TriphotonTree
// found on file: TriphotonAnalyzertest.root
//////////////////////////////////////////////////////////

#ifndef TriPhotonClass_h
#define TriPhotonClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class TriPhotonClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Long64_t        Event_run;
   Long64_t        Event_LS;
   Long64_t        Event_evnum;
   Long64_t        Event_processid;
   Long64_t        Event_bx;
   Long64_t        Event_orbit;
   Float_t         Event_ptHat;
   Float_t         Event_alphaqcd;
   Float_t         Event_alphaqed;
   Float_t         Event_qscale;
   Float_t         Event_x1;
   Float_t         Event_x2;
   Float_t         Event_pdf1;
   Float_t         Event_pdf2;
   Float_t         Event_weight0;
   Float_t         Event_weight;
   Float_t         Event_weightPuUp;
   Float_t         Event_weightPu;
   Float_t         Event_weightPuDown;
   Float_t         Event_weightLumi;
   Float_t         Event_weightAll;
   Int_t           Event_interactingParton1PdgId;
   Int_t           Event_interactingParton2PdgId;
   Int_t           Event_pdf_id1;
   Int_t           Event_pdf_id2;
   Int_t           Event_npv_true;
   Bool_t          Event_beamHaloIDLoose;
   Bool_t          Event_beamHaloIDTight;
   Bool_t          Event_beamHaloIDTight2015;
   Double_t        Photon1Cand_pt;
   Double_t        Photon1Cand_eta;
   Double_t        Photon1Cand_phi;
   Double_t        Photon1Cand_scEta;
   Double_t        Photon1Cand_scPhi;
   Double_t        Photon1Cand_rho;
   Double_t        Photon1Cand_chargedHadIso03;
   Double_t        Photon1Cand_neutralHadIso03;
   Double_t        Photon1Cand_photonIso03;
   Double_t        Photon1Cand_rhoCorChargedHadIso03;
   Double_t        Photon1Cand_rhoCorNeutralHadIso03;
   Double_t        Photon1Cand_rhoCorPhotonIso03;
   Double_t        Photon1Cand_corPhotonIso03;
   Double_t        Photon1Cand_hadTowerOverEm;
   Double_t        Photon1Cand_hadronicOverEm;
   Double_t        Photon1Cand_r9;
   Double_t        Photon1Cand_r9_5x5;
   Double_t        Photon1Cand_sigmaIetaIeta;
   Double_t        Photon1Cand_sigmaIetaIeta5x5;
   Double_t        Photon1Cand_sigmaEtaEta;
   Double_t        Photon1Cand_sigmaIphiIphi;
   Double_t        Photon1Cand_sigmaIphiIphi5x5;
   Double_t        Photon1Cand_sigmaIetaIphi;
   Double_t        Photon1Cand_sigmaIetaIphi5x5;
   Double_t        Photon1Cand_maxEnergyXtal;
   Double_t        Photon1Cand_iEta;
   Double_t        Photon1Cand_iPhi;
   Double_t        Photon1Cand_alphaHighPtID;
   Double_t        Photon1Cand_kappaHighPtID;
   Double_t        Photon1Cand_phoEAHighPtID;
   Double_t        Photon1Cand_chEAegmID;
   Double_t        Photon1Cand_nhEAegmID;
   Double_t        Photon1Cand_phoEAegmID;
   Bool_t          Photon1Cand_passEGMLooseID;
   Bool_t          Photon1Cand_passEGMMediumID;
   Bool_t          Photon1Cand_passEGMTightID;
   Bool_t          Photon1Cand_isEB;
   Bool_t          Photon1Cand_isEE;
   Bool_t          Photon1Cand_isEBEtaGap;
   Bool_t          Photon1Cand_isEBPhiGap;
   Bool_t          Photon1Cand_isEERingGap;
   Bool_t          Photon1Cand_isEEDeeGap;
   Bool_t          Photon1Cand_isEBEEGap;
   Bool_t          Photon1Cand_passElectronVeto;
   Bool_t          Photon1Cand_passHTowOverE;
   Bool_t          Photon1Cand_passChIso;
   Bool_t          Photon1Cand_passCorPhoIso;
   Bool_t          Photon1Cand_passSieie;
   Bool_t          Photon1Cand_passHighPtID;
   Bool_t          Photon1Cand_passChIsoDenom;
   Bool_t          Photon1Cand_passCorPhoIsoDenom;
   Bool_t          Photon1Cand_isFakeable;
   Bool_t          Photon1Cand_isNumeratorObjCand;
   Bool_t          Photon1Cand_isDenominatorObj;
   Bool_t          Photon1Cand_isSaturated;
   Bool_t          Photon1Cand_isMCTruthFake;
   Double_t        Photon2Cand_pt;
   Double_t        Photon2Cand_eta;
   Double_t        Photon2Cand_phi;
   Double_t        Photon2Cand_scEta;
   Double_t        Photon2Cand_scPhi;
   Double_t        Photon2Cand_rho;
   Double_t        Photon2Cand_chargedHadIso03;
   Double_t        Photon2Cand_neutralHadIso03;
   Double_t        Photon2Cand_photonIso03;
   Double_t        Photon2Cand_rhoCorChargedHadIso03;
   Double_t        Photon2Cand_rhoCorNeutralHadIso03;
   Double_t        Photon2Cand_rhoCorPhotonIso03;
   Double_t        Photon2Cand_corPhotonIso03;
   Double_t        Photon2Cand_hadTowerOverEm;
   Double_t        Photon2Cand_hadronicOverEm;
   Double_t        Photon2Cand_r9;
   Double_t        Photon2Cand_r9_5x5;
   Double_t        Photon2Cand_sigmaIetaIeta;
   Double_t        Photon2Cand_sigmaIetaIeta5x5;
   Double_t        Photon2Cand_sigmaEtaEta;
   Double_t        Photon2Cand_sigmaIphiIphi;
   Double_t        Photon2Cand_sigmaIphiIphi5x5;
   Double_t        Photon2Cand_sigmaIetaIphi;
   Double_t        Photon2Cand_sigmaIetaIphi5x5;
   Double_t        Photon2Cand_maxEnergyXtal;
   Double_t        Photon2Cand_iEta;
   Double_t        Photon2Cand_iPhi;
   Double_t        Photon2Cand_alphaHighPtID;
   Double_t        Photon2Cand_kappaHighPtID;
   Double_t        Photon2Cand_phoEAHighPtID;
   Double_t        Photon2Cand_chEAegmID;
   Double_t        Photon2Cand_nhEAegmID;
   Double_t        Photon2Cand_phoEAegmID;
   Bool_t          Photon2Cand_passEGMLooseID;
   Bool_t          Photon2Cand_passEGMMediumID;
   Bool_t          Photon2Cand_passEGMTightID;
   Bool_t          Photon2Cand_isEB;
   Bool_t          Photon2Cand_isEE;
   Bool_t          Photon2Cand_isEBEtaGap;
   Bool_t          Photon2Cand_isEBPhiGap;
   Bool_t          Photon2Cand_isEERingGap;
   Bool_t          Photon2Cand_isEEDeeGap;
   Bool_t          Photon2Cand_isEBEEGap;
   Bool_t          Photon2Cand_passElectronVeto;
   Bool_t          Photon2Cand_passHTowOverE;
   Bool_t          Photon2Cand_passChIso;
   Bool_t          Photon2Cand_passCorPhoIso;
   Bool_t          Photon2Cand_passSieie;
   Bool_t          Photon2Cand_passHighPtID;
   Bool_t          Photon2Cand_passChIsoDenom;
   Bool_t          Photon2Cand_passCorPhoIsoDenom;
   Bool_t          Photon2Cand_isFakeable;
   Bool_t          Photon2Cand_isNumeratorObjCand;
   Bool_t          Photon2Cand_isDenominatorObj;
   Bool_t          Photon2Cand_isSaturated;
   Bool_t          Photon2Cand_isMCTruthFake;
   Double_t        Photon3Cand_pt;
   Double_t        Photon3Cand_eta;
   Double_t        Photon3Cand_phi;
   Double_t        Photon3Cand_scEta;
   Double_t        Photon3Cand_scPhi;
   Double_t        Photon3Cand_rho;
   Double_t        Photon3Cand_chargedHadIso03;
   Double_t        Photon3Cand_neutralHadIso03;
   Double_t        Photon3Cand_photonIso03;
   Double_t        Photon3Cand_rhoCorChargedHadIso03;
   Double_t        Photon3Cand_rhoCorNeutralHadIso03;
   Double_t        Photon3Cand_rhoCorPhotonIso03;
   Double_t        Photon3Cand_corPhotonIso03;
   Double_t        Photon3Cand_hadTowerOverEm;
   Double_t        Photon3Cand_hadronicOverEm;
   Double_t        Photon3Cand_r9;
   Double_t        Photon3Cand_r9_5x5;
   Double_t        Photon3Cand_sigmaIetaIeta;
   Double_t        Photon3Cand_sigmaIetaIeta5x5;
   Double_t        Photon3Cand_sigmaEtaEta;
   Double_t        Photon3Cand_sigmaIphiIphi;
   Double_t        Photon3Cand_sigmaIphiIphi5x5;
   Double_t        Photon3Cand_sigmaIetaIphi;
   Double_t        Photon3Cand_sigmaIetaIphi5x5;
   Double_t        Photon3Cand_maxEnergyXtal;
   Double_t        Photon3Cand_iEta;
   Double_t        Photon3Cand_iPhi;
   Double_t        Photon3Cand_alphaHighPtID;
   Double_t        Photon3Cand_kappaHighPtID;
   Double_t        Photon3Cand_phoEAHighPtID;
   Double_t        Photon3Cand_chEAegmID;
   Double_t        Photon3Cand_nhEAegmID;
   Double_t        Photon3Cand_phoEAegmID;
   Bool_t          Photon3Cand_passEGMLooseID;
   Bool_t          Photon3Cand_passEGMMediumID;
   Bool_t          Photon3Cand_passEGMTightID;
   Bool_t          Photon3Cand_isEB;
   Bool_t          Photon3Cand_isEE;
   Bool_t          Photon3Cand_isEBEtaGap;
   Bool_t          Photon3Cand_isEBPhiGap;
   Bool_t          Photon3Cand_isEERingGap;
   Bool_t          Photon3Cand_isEEDeeGap;
   Bool_t          Photon3Cand_isEBEEGap;
   Bool_t          Photon3Cand_passElectronVeto;
   Bool_t          Photon3Cand_passHTowOverE;
   Bool_t          Photon3Cand_passChIso;
   Bool_t          Photon3Cand_passCorPhoIso;
   Bool_t          Photon3Cand_passSieie;
   Bool_t          Photon3Cand_passHighPtID;
   Bool_t          Photon3Cand_passChIsoDenom;
   Bool_t          Photon3Cand_passCorPhoIsoDenom;
   Bool_t          Photon3Cand_isFakeable;
   Bool_t          Photon3Cand_isNumeratorObjCand;
   Bool_t          Photon3Cand_isDenominatorObj;
   Bool_t          Photon3Cand_isSaturated;
   Bool_t          Photon3Cand_isMCTruthFake;
   Double_t        Photon1_pt;
   Double_t        Photon1_eta;
   Double_t        Photon1_phi;
   Double_t        Photon1_scEta;
   Double_t        Photon1_scPhi;
   Double_t        Photon1_rho;
   Double_t        Photon1_chargedHadIso03;
   Double_t        Photon1_neutralHadIso03;
   Double_t        Photon1_photonIso03;
   Double_t        Photon1_rhoCorChargedHadIso03;
   Double_t        Photon1_rhoCorNeutralHadIso03;
   Double_t        Photon1_rhoCorPhotonIso03;
   Double_t        Photon1_corPhotonIso03;
   Double_t        Photon1_hadTowerOverEm;
   Double_t        Photon1_hadronicOverEm;
   Double_t        Photon1_r9;
   Double_t        Photon1_r9_5x5;
   Double_t        Photon1_sigmaIetaIeta;
   Double_t        Photon1_sigmaIetaIeta5x5;
   Double_t        Photon1_sigmaEtaEta;
   Double_t        Photon1_sigmaIphiIphi;
   Double_t        Photon1_sigmaIphiIphi5x5;
   Double_t        Photon1_sigmaIetaIphi;
   Double_t        Photon1_sigmaIetaIphi5x5;
   Double_t        Photon1_maxEnergyXtal;
   Double_t        Photon1_iEta;
   Double_t        Photon1_iPhi;
   Double_t        Photon1_alphaHighPtID;
   Double_t        Photon1_kappaHighPtID;
   Double_t        Photon1_phoEAHighPtID;
   Double_t        Photon1_chEAegmID;
   Double_t        Photon1_nhEAegmID;
   Double_t        Photon1_phoEAegmID;
   Bool_t          Photon1_passEGMLooseID;
   Bool_t          Photon1_passEGMMediumID;
   Bool_t          Photon1_passEGMTightID;
   Bool_t          Photon1_isEB;
   Bool_t          Photon1_isEE;
   Bool_t          Photon1_isEBEtaGap;
   Bool_t          Photon1_isEBPhiGap;
   Bool_t          Photon1_isEERingGap;
   Bool_t          Photon1_isEEDeeGap;
   Bool_t          Photon1_isEBEEGap;
   Bool_t          Photon1_passElectronVeto;
   Bool_t          Photon1_passHTowOverE;
   Bool_t          Photon1_passChIso;
   Bool_t          Photon1_passCorPhoIso;
   Bool_t          Photon1_passSieie;
   Bool_t          Photon1_passHighPtID;
   Bool_t          Photon1_passChIsoDenom;
   Bool_t          Photon1_passCorPhoIsoDenom;
   Bool_t          Photon1_isFakeable;
   Bool_t          Photon1_isNumeratorObjCand;
   Bool_t          Photon1_isDenominatorObj;
   Bool_t          Photon1_isSaturated;
   Bool_t          Photon1_isMCTruthFake;
   Double_t        Photon2_pt;
   Double_t        Photon2_eta;
   Double_t        Photon2_phi;
   Double_t        Photon2_scEta;
   Double_t        Photon2_scPhi;
   Double_t        Photon2_rho;
   Double_t        Photon2_chargedHadIso03;
   Double_t        Photon2_neutralHadIso03;
   Double_t        Photon2_photonIso03;
   Double_t        Photon2_rhoCorChargedHadIso03;
   Double_t        Photon2_rhoCorNeutralHadIso03;
   Double_t        Photon2_rhoCorPhotonIso03;
   Double_t        Photon2_corPhotonIso03;
   Double_t        Photon2_hadTowerOverEm;
   Double_t        Photon2_hadronicOverEm;
   Double_t        Photon2_r9;
   Double_t        Photon2_r9_5x5;
   Double_t        Photon2_sigmaIetaIeta;
   Double_t        Photon2_sigmaIetaIeta5x5;
   Double_t        Photon2_sigmaEtaEta;
   Double_t        Photon2_sigmaIphiIphi;
   Double_t        Photon2_sigmaIphiIphi5x5;
   Double_t        Photon2_sigmaIetaIphi;
   Double_t        Photon2_sigmaIetaIphi5x5;
   Double_t        Photon2_maxEnergyXtal;
   Double_t        Photon2_iEta;
   Double_t        Photon2_iPhi;
   Double_t        Photon2_alphaHighPtID;
   Double_t        Photon2_kappaHighPtID;
   Double_t        Photon2_phoEAHighPtID;
   Double_t        Photon2_chEAegmID;
   Double_t        Photon2_nhEAegmID;
   Double_t        Photon2_phoEAegmID;
   Bool_t          Photon2_passEGMLooseID;
   Bool_t          Photon2_passEGMMediumID;
   Bool_t          Photon2_passEGMTightID;
   Bool_t          Photon2_isEB;
   Bool_t          Photon2_isEE;
   Bool_t          Photon2_isEBEtaGap;
   Bool_t          Photon2_isEBPhiGap;
   Bool_t          Photon2_isEERingGap;
   Bool_t          Photon2_isEEDeeGap;
   Bool_t          Photon2_isEBEEGap;
   Bool_t          Photon2_passElectronVeto;
   Bool_t          Photon2_passHTowOverE;
   Bool_t          Photon2_passChIso;
   Bool_t          Photon2_passCorPhoIso;
   Bool_t          Photon2_passSieie;
   Bool_t          Photon2_passHighPtID;
   Bool_t          Photon2_passChIsoDenom;
   Bool_t          Photon2_passCorPhoIsoDenom;
   Bool_t          Photon2_isFakeable;
   Bool_t          Photon2_isNumeratorObjCand;
   Bool_t          Photon2_isDenominatorObj;
   Bool_t          Photon2_isSaturated;
   Bool_t          Photon2_isMCTruthFake;
   Double_t        Photon3_pt;
   Double_t        Photon3_eta;
   Double_t        Photon3_phi;
   Double_t        Photon3_scEta;
   Double_t        Photon3_scPhi;
   Double_t        Photon3_rho;
   Double_t        Photon3_chargedHadIso03;
   Double_t        Photon3_neutralHadIso03;
   Double_t        Photon3_photonIso03;
   Double_t        Photon3_rhoCorChargedHadIso03;
   Double_t        Photon3_rhoCorNeutralHadIso03;
   Double_t        Photon3_rhoCorPhotonIso03;
   Double_t        Photon3_corPhotonIso03;
   Double_t        Photon3_hadTowerOverEm;
   Double_t        Photon3_hadronicOverEm;
   Double_t        Photon3_r9;
   Double_t        Photon3_r9_5x5;
   Double_t        Photon3_sigmaIetaIeta;
   Double_t        Photon3_sigmaIetaIeta5x5;
   Double_t        Photon3_sigmaEtaEta;
   Double_t        Photon3_sigmaIphiIphi;
   Double_t        Photon3_sigmaIphiIphi5x5;
   Double_t        Photon3_sigmaIetaIphi;
   Double_t        Photon3_sigmaIetaIphi5x5;
   Double_t        Photon3_maxEnergyXtal;
   Double_t        Photon3_iEta;
   Double_t        Photon3_iPhi;
   Double_t        Photon3_alphaHighPtID;
   Double_t        Photon3_kappaHighPtID;
   Double_t        Photon3_phoEAHighPtID;
   Double_t        Photon3_chEAegmID;
   Double_t        Photon3_nhEAegmID;
   Double_t        Photon3_phoEAegmID;
   Bool_t          Photon3_passEGMLooseID;
   Bool_t          Photon3_passEGMMediumID;
   Bool_t          Photon3_passEGMTightID;
   Bool_t          Photon3_isEB;
   Bool_t          Photon3_isEE;
   Bool_t          Photon3_isEBEtaGap;
   Bool_t          Photon3_isEBPhiGap;
   Bool_t          Photon3_isEERingGap;
   Bool_t          Photon3_isEEDeeGap;
   Bool_t          Photon3_isEBEEGap;
   Bool_t          Photon3_passElectronVeto;
   Bool_t          Photon3_passHTowOverE;
   Bool_t          Photon3_passChIso;
   Bool_t          Photon3_passCorPhoIso;
   Bool_t          Photon3_passSieie;
   Bool_t          Photon3_passHighPtID;
   Bool_t          Photon3_passChIsoDenom;
   Bool_t          Photon3_passCorPhoIsoDenom;
   Bool_t          Photon3_isFakeable;
   Bool_t          Photon3_isNumeratorObjCand;
   Bool_t          Photon3_isDenominatorObj;
   Bool_t          Photon3_isSaturated;
   Bool_t          Photon3_isMCTruthFake;

   // List of branches
   TBranch        *b_Event;   //!
   TBranch        *b_Photon1Cand;   //!
   TBranch        *b_Photon2Cand;   //!
   TBranch        *b_Photon3Cand;   //!
   TBranch        *b_Photon1;   //!
   TBranch        *b_Photon2;   //!
   TBranch        *b_Photon3;   //!

   TriPhotonClass(TTree *tree=0);
   virtual ~TriPhotonClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef TriPhotonClass_cxx
TriPhotonClass::TriPhotonClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("TriphotonAnalyzertest.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("TriphotonAnalyzertest.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("TriphotonAnalyzertest.root:/demo");
      dir->GetObject("fTree",tree);

   }
   Init(tree);
}

TriPhotonClass::~TriPhotonClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t TriPhotonClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t TriPhotonClass::LoadTree(Long64_t entry)
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

void TriPhotonClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_run, &b_Event);
   fChain->SetBranchAddress("Photon1Cand", &Photon1Cand_pt, &b_Photon1Cand);
   fChain->SetBranchAddress("Photon2Cand", &Photon2Cand_pt, &b_Photon2Cand);
   fChain->SetBranchAddress("Photon3Cand", &Photon3Cand_pt, &b_Photon3Cand);
   fChain->SetBranchAddress("Photon1", &Photon1_pt, &b_Photon1);
   fChain->SetBranchAddress("Photon2", &Photon2_pt, &b_Photon2);
   fChain->SetBranchAddress("Photon3", &Photon3_pt, &b_Photon3);
   Notify();
}

Bool_t TriPhotonClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void TriPhotonClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t TriPhotonClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef TriPhotonClass_cxx
