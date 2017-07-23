#define TriPhotonClass_cxx
#include "CMS_lumi.C"
#include "TriPhotonClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <TTree.h>
#include <TLatex.h>
#include <TBox.h>
#include <TF1.h>
#include <TPad.h>
#include <stdio.h>
#include <math.h>
#include <TMath.h>
#include <TH1D.h>

void TriPhotonClass::Loop()
{
//   In a ROOT session, you can do:
//      root> .L TriPhotonClass.C
//      root> TriPhotonClass t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

  //====
  //CMS
  //===
    //gROOT->LoadMacro("CMS_lumi.C");
    writeExtraText = true;       // if extra text
    //extraText  = "Preliminary";  // default extra text is "Preliminary"
    //extraText = "work in progress";
    //lumi_8TeV  = "19.1 fb^{-1}"; // default is "19.7 fb^{-1}"
    //lumi_7TeV  = "4.9 fb^{-1}";  // default is "5.1 fb^{-1}"
    //lumi_sqrtS = "13 TeV";       // used with iPeriod = 0, e.g. for simulation-only plots (default is an empty string)

    //int iPeriod = 7;    // 1=7TeV, 2=8TeV, 3=7+8TeV, 7=7+8+13TeV, 0=free form (uses lumi_sqrtS)

//==========
//HISTOGRAMS
//==========
 
   TH1F *photon1_pt = new TH1F("Photon1_pt", "Photon1_pt", 100, 0, 600);  
   TH1F *photon1_eta = new TH1F("Photon1_eta", "Photon1_eta", 100, -1.1, 1.1);
   TH1F *photon1_phi = new TH1F("Photon1_phi", "Photon1_phi",100, -1.05,1.05);
   TH1F *photon1_scEta = new TH1F("Photon1_scEta", "Photon1_scEta",100, -1.05,1.05); 
   TH1F *photon1_scPhi = new TH1F("Photon1_scPhi", "Photon1_scPhi", 100, -1.1, 1.1); 
 
  //Counters
  int N_total = 0;

  if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      N_total++;
      //===============
      //FILL HISTOGRAMS
      //===============
      
      photon1_pt-> Fill(Photon1_pt);
      photon1_eta->Fill(Photon1_eta);
      photon1_phi->Fill(Photon1_phi);
      photon1_scEta->Fill(Photon1_scEta);
      photon1_scPhi->Fill(Photon1_scPhi);

   }//end of event loop 
      
    cout << endl;
    cout << "Total Photons : " << N_total << endl;

      //============
      //EVENTS COUNT
      //============
      
      //=============
      //CANVAS SET-UP
      //=============

      TCanvas *p1pt = new TCanvas("Photon1_pt", "", 800, 600);
      CMS_lumi(p1pt, 7, 11);
      photon1_pt->SetLineColor(kOrange+10);
      photon1_pt->Draw();
      p1pt->SetLeftMargin(0.15);
      p1pt->SetBottomMargin(0.15);
      photon1_pt->SetFillColor(kOrange-3);
      //photon1_pt->GetYaxis()->SetTitle("Events");
      photon1_pt->GetXaxis()->SetTitle("Photon1_pt");

////////SAVE OUTPUT 
////***** Save histograms to root file 
    TFile *f = new TFile("HoverETriphoton.root", "RECREATE");
    photon1_pt->Write();
////***** Save as pdf/.C/.png 
    p1pt->SaveAs("Photon1pt.pdf");
////***** Change directory and close directory
    f->cd();
    f->Close();

}
