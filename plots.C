#include "TPad.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH1.h"
#include "TPaveStats.h"
  
void multStatsample() {

  gROOT->SetStyle("Plain");
  gStyle->SetPalette(1,0);
  gStyle->SetNdivisions(505);
  gStyle->SetOptStat("ourme");
  
  TFile *f01 = TFile::Open("Triphoton01.root");
  TFile *fHoverE = TFile::Open("HoverETriphoton.root");

  TH1D *hPhoton1_pt01 = (TH1D*) f01->Get("Photon1_pt");
  TH1D *hPhoton1_pt = (TH1D*) fHoverE->Get("Photon1_pt");
  
  TH1D *hPhoton1_eta01 = (TH1D*) f01->Get("Photon1_eta");
  TH1D *hPhoton1_eta = (TH1D*) fHoverE->Get("Photon1_eta");

  TH1D *hPhoton1_phi01 = (TH1D*) f01->Get("Photon1_phi");
  TH1D *hPhoton1_phi = (TH1D*) fHoverE->Get("Photon1_phi");

  TH1D *hPhoton1_scEta01 = (TH1D*) f01->Get("Photon1_scEta");
  TH1D *hPhoton1_scEta = (TH1D*) fHoverE->Get("Photon1_scEta");

  TH1D *hPhoton1_scPhi01 = (TH1D*) f01->Get("Photon1_scPhi");
  TH1D *hPhoton1_scPhi = (TH1D*) fHoverE->Get("Photon1_scPhi");

hPhoton1_pt01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1 = (TPaveStats*) hPhoton1_pt01->FindObject("stats");
tps1->SetName("All TriPhoton Stats");
double X1 = tps1->GetX1NDC();
double Y1 = tps1->GetY1NDC();
double X2 = tps1->GetX2NDC();
double Y2 = tps1->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_pt->SetLineColor(kRed);
hPhoton1_pt->SetFillColor(3);

TCanvas *c1 = new TCanvas();
hPhoton1_pt->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2 = (TPaveStats*) hPhoton1_pt->FindObject("stats");
tps2->SetTextColor(kRed);
tps2->SetLineColor(kRed);
tps2->SetX1NDC(X1);
tps2->SetX2NDC(X2);
tps2->SetY1NDC(Y1-(Y2-Y1));
tps2->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3 = new TCanvas();
hPhoton1_pt01->Draw();
hPhoton1_pt->Draw("same");
tps1->Draw("same");
tps2->Draw("same");
}


/*
void plot_same1(){

  TCanvas *canvas_same = new TCanvas("canvas_same","canvas_same",800,600);
  hPhoton1_pt01->Draw("same");
  hPhoton1_pt->SetFillColor(5);
  hPhoton1_pt->SetLineColor(3); 
  hPhoton1_pt->Draw("same");  
  canvas_same->SaveAs("Photon1vsSAME.pdf");  

  TCanvas *canvas_same_eta = new TCanvas("canvas_same_eta","canvas_same_eta",800,600);
  hPhoton1_eta01->Draw("same");
  hPhoton1_eta->SetFillColor(5);
  hPhoton1_eta->SetLineColor(3); 
  hPhoton1_eta->Draw("same");  
  canvas_same_eta->SaveAs("Photon1vsSAMEeta.pdf");  

  TCanvas *canvas_same_phi = new TCanvas("canvas_same_phi","canvas_same_phi",800,600);
  hPhoton1_phi01->Draw("same");  
  hPhoton1_phi->SetFillColor(5);
  hPhoton1_phi->SetLineColor(3); 
  hPhoton1_phi->Draw("same");  
  canvas_same_phi->SaveAs("Photon1vsSAME_phi.pdf");  

  TCanvas *canvas_same_scEta = new TCanvas("canvas_same_scEta","canvas_same_scEta",800,600);
  hPhoton1_scEta01->Draw("same");
  hPhoton1_scEta->SetFillColor(5);
  hPhoton1_scEta->SetLineColor(3); 
  hPhoton1_scEta->Draw("same");  
  canvas_same_scEta->SaveAs("Photon1vsSAMEscEta.pdf");  
 
  TCanvas *canvas_same_scPhi = new TCanvas("canvas_same_scPhi","canvas_same_scPhi",800,600);
  hPhoton1_scPhi01->Draw("same");  
  hPhoton1_scPhi->SetFillColor(5);
  hPhoton1_scPhi->SetLineColor(3); 
  hPhoton1_scPhi->Draw("same");  
  canvas_same_scPhi->SaveAs("Photon1vsSAMEscPhi.pdf");  

}

void plot_triphoton1() {
 TCanvas *canvas = new TCanvas("canvas","canvas",1500,600);
  canvas->Divide(2,1);

  canvas->cd(1);
  hPhoton1_pt01->Draw("Photon1_pt");
  hPhoton1_pt01->SetTitle("Photon1_pt");

  canvas->cd(2);
  hPhoton1_pt->Draw("Photon1_pt");
  hPhoton1_pt->SetTitle("Photon1_pt passed H/E");
  canvas->SaveAs("Photon1vs.pdf");
   

//**********************************
  TCanvas *canvas_eta = new TCanvas("canvas_eta","canvas_eta",1500,600);
  canvas_eta->Divide(2,1);

  canvas_eta->cd(1);
  hPhoton1_eta01->Draw("Photon1_eta");
  hPhoton1_eta01->SetTitle("Photon1_eta");

  canvas_eta->cd(2);
  hPhoton1_eta->Draw("Photon1_eta");
  hPhoton1_eta->SetTitle("Photon1_pt passed H/E");
  canvas_eta->SaveAs("Photon1etavs.pdf");
   
  //***********************************
  TCanvas *canvas_phi = new TCanvas("canvas_phi","canvas_phi",1500,600);
  canvas->Divide(2,1);

  canvas_phi->cd(1);
  hPhoton1_phi01->Draw("Photon1_phi");
  hPhoton1_phi01->SetTitle("Photon1_phi");

  canvas_phi->cd(2);
  hPhoton1_phi->Draw("Photon1_phi");
  hPhoton1_phi->SetTitle("Photon1_phi passed H/E");
  canvas_phi->SaveAs("Photon1vsphi.pdf");
  //************************************

  TCanvas *canvas_scEta = new TCanvas("canvas_scEta","canvas_scEta",1500,600);
  canvas_scEta->Divide(2,1);

  canvas_scEta->cd(1);
  hPhoton1_eta01->Draw("Photon1_scEta");
  hPhoton1_eta01->SetTitle("Photon1_scEta");

  canvas_scEta->cd(2);
  hPhoton1_scEta->Draw("Photon1_scEta");
  hPhoton1_scEta->SetTitle("Photon1_scEta passed H/E");
  canvas_scEta->SaveAs("Photon1scEta.pdf");
   
//***************************************
  TCanvas *canvas_scPhi = new TCanvas("canvas_scPhi","canvas_scPhi",1500,600);
  canvas_scPhi->Divide(2,1);

  canvas_scPhi->cd(1);
  hPhoton1_scPhi01->Draw("Photon1_sPhi");
  hPhoton1_scPhi01->SetTitle("Photon1_scPhi");

  canvas_scPhi->cd(2);
  hPhoton1_scPhi->Draw("Photon1_scPhi");
  hPhoton1_scPhi->SetTitle("Photon1_scPhi passed H/E");
  canvas_scPhi->SaveAs("Photon1scPhi.pdf");
  
}*/
