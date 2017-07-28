#include "TPad.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH1.h"
#include "TPaveStats.h"

 
void photon1() {

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
c3->SaveAs("Photon1ptvsSAME.pdf");

//***************************************************

hPhoton1_eta01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1eta = (TPaveStats*) hPhoton1_eta01->FindObject("stats");
tps1eta->SetName("All TriPhoton Stats");
double X1eta = tps1eta->GetX1NDC();
double Y1eta = tps1eta->GetY1NDC();
double X2eta = tps1eta->GetX2NDC();
double Y2eta = tps1eta->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_eta->SetLineColor(kRed);
hPhoton1_eta->SetFillColor(3);

TCanvas *c1eta = new TCanvas();
hPhoton1_eta->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2eta = (TPaveStats*) hPhoton1_eta->FindObject("stats");
tps2eta->SetTextColor(kRed);
tps2eta->SetLineColor(kRed);
tps2eta->SetX1NDC(X1);
tps2eta->SetX2NDC(X2);
tps2eta->SetY1NDC(Y1-(Y2-Y1));
tps2eta->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3eta = new TCanvas();
hPhoton1_eta01->Draw();
hPhoton1_eta->Draw("same");
tps1eta->Draw("same");
tps2eta->Draw("same");
c3eta->SaveAs("Photon1etavsSAME.pdf");

//************************************************

hPhoton1_phi01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1phi = (TPaveStats*) hPhoton1_phi01->FindObject("stats");
tps1phi->SetName("All TriPhoton Stats");
double X1phi = tps1phi->GetX1NDC();
double Y1phi = tps1phi->GetY1NDC();
double X2phi = tps1phi->GetX2NDC();
double Y2phi = tps1phi->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_phi->SetLineColor(kRed);
hPhoton1_phi->SetFillColor(3);

TCanvas *c1phi = new TCanvas();
hPhoton1_phi->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2phi = (TPaveStats*) hPhoton1_phi->FindObject("stats");
tps2phi->SetTextColor(kRed);
tps2phi->SetLineColor(kRed);
tps2phi->SetX1NDC(X1);
tps2phi->SetX2NDC(X2);
tps2phi->SetY1NDC(Y1-(Y2-Y1));
tps2phi->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3phi = new TCanvas();
hPhoton1_phi01->Draw();
hPhoton1_phi->Draw("same");
tps1phi->Draw("same");
tps2phi->Draw("same");
c3phi->SaveAs("Photon1phivsSAME.pdf");

//*********************************************

hPhoton1_scEta01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1scEta = (TPaveStats*) hPhoton1_scEta01->FindObject("stats");
tps1scEta->SetName("All TriPhoton Stats");
double X1scEta = tps1scEta->GetX1NDC();
double Y1scEta = tps1scEta->GetY1NDC();
double X2scEta = tps1scEta->GetX2NDC();
double Y2scEta = tps1scEta->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_scEta->SetLineColor(kRed);
hPhoton1_scEta->SetFillColor(3);

TCanvas *c1scEta = new TCanvas();
hPhoton1_scEta->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2scEta = (TPaveStats*) hPhoton1_scEta->FindObject("stats");
tps2scEta->SetTextColor(kRed);
tps2scEta->SetLineColor(kRed);
tps2scEta->SetX1NDC(X1);
tps2scEta->SetX2NDC(X2);
tps2scEta->SetY1NDC(Y1-(Y2-Y1));
tps2scEta->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3scEta = new TCanvas();
hPhoton1_scEta01->Draw();
hPhoton1_scEta->Draw("same");
tps1scEta->Draw("same");
tps2scEta->Draw("same");
c3scEta->SaveAs("Photon1scEtavsSAME.pdf");

//********************************************************

hPhoton1_scPhi01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1scPhi = (TPaveStats*) hPhoton1_scPhi01->FindObject("stats");
tps1scPhi->SetName("All TriPhoton Stats");
double X1scPhi = tps1scPhi->GetX1NDC();
double Y1scPhi = tps1scPhi->GetY1NDC();
double X2scPhi = tps1scPhi->GetX2NDC();
double Y2scPhi = tps1scPhi->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_scPhi->SetLineColor(kRed);
hPhoton1_scPhi->SetFillColor(3);

TCanvas *c1scPhi = new TCanvas();
hPhoton1_scPhi->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2scPhi = (TPaveStats*) hPhoton1_scPhi->FindObject("stats");
tps2scPhi->SetTextColor(kRed);
tps2scPhi->SetLineColor(kRed);
tps2scPhi->SetX1NDC(X1);
tps2scPhi->SetX2NDC(X2);
tps2scPhi->SetY1NDC(Y1-(Y2-Y1));
tps2scPhi->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3scPhi = new TCanvas();
hPhoton1_scPhi01->Draw();
hPhoton1_scPhi->Draw("same");
tps1scPhi->Draw("same");
tps2scPhi->Draw("same");
c3scPhi->SaveAs("Photon1scPhivsSAME.pdf");

}

  
void photon2() {

 gROOT->SetStyle("Plain");
  gStyle->SetPalette(1,0);
  gStyle->SetNdivisions(505);
  gStyle->SetOptStat("ourme");
  
  TFile *f01 = TFile::Open("Triphoton01.root");
  TFile *fHoverE = TFile::Open("HoverETriphoton.root");

  TH1D *hPhoton1_pt01 = (TH1D*) f01->Get("Photon2_pt");
  TH1D *hPhoton1_pt = (TH1D*) fHoverE->Get("Photon2_pt");
  
  TH1D *hPhoton1_eta01 = (TH1D*) f01->Get("Photon2_eta");
  TH1D *hPhoton1_eta = (TH1D*) fHoverE->Get("Photon2_eta");

  TH1D *hPhoton1_phi01 = (TH1D*) f01->Get("Photon2_phi");
  TH1D *hPhoton1_phi = (TH1D*) fHoverE->Get("Photon1_phi");

  TH1D *hPhoton1_scEta01 = (TH1D*) f01->Get("Photon2_scEta");
  TH1D *hPhoton1_scEta = (TH1D*) fHoverE->Get("Photon2_scEta");

  TH1D *hPhoton1_scPhi01 = (TH1D*) f01->Get("Photon2_scPhi");
  TH1D *hPhoton1_scPhi = (TH1D*) fHoverE->Get("Photon2_scPhi");

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
c3->SaveAs("Photon2ptvsSAME.pdf");

//***************************************************

hPhoton1_eta01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1eta = (TPaveStats*) hPhoton1_eta01->FindObject("stats");
tps1eta->SetName("All TriPhoton Stats");
double X1eta = tps1eta->GetX1NDC();
double Y1eta = tps1eta->GetY1NDC();
double X2eta = tps1eta->GetX2NDC();
double Y2eta = tps1eta->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_eta->SetLineColor(kRed);
hPhoton1_eta->SetFillColor(3);

TCanvas *c1eta = new TCanvas();
hPhoton1_eta->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2eta = (TPaveStats*) hPhoton1_eta->FindObject("stats");
tps2eta->SetTextColor(kRed);
tps2eta->SetLineColor(kRed);
tps2eta->SetX1NDC(X1);
tps2eta->SetX2NDC(X2);
tps2eta->SetY1NDC(Y1-(Y2-Y1));
tps2eta->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3eta = new TCanvas();
hPhoton1_eta01->Draw();
hPhoton1_eta->Draw("same");
tps1eta->Draw("same");
tps2eta->Draw("same");
c3eta->SaveAs("Photon2etavsSAME.pdf");

//************************************************

hPhoton1_phi01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1phi = (TPaveStats*) hPhoton1_phi01->FindObject("stats");
tps1phi->SetName("All TriPhoton Stats");
double X1phi = tps1phi->GetX1NDC();
double Y1phi = tps1phi->GetY1NDC();
double X2phi = tps1phi->GetX2NDC();
double Y2phi = tps1phi->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_phi->SetLineColor(kRed);
hPhoton1_phi->SetFillColor(3);

TCanvas *c1phi = new TCanvas();
hPhoton1_phi->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2phi = (TPaveStats*) hPhoton1_phi->FindObject("stats");
tps2phi->SetTextColor(kRed);
tps2phi->SetLineColor(kRed);
tps2phi->SetX1NDC(X1);
tps2phi->SetX2NDC(X2);
tps2phi->SetY1NDC(Y1-(Y2-Y1));
tps2phi->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3phi = new TCanvas();
hPhoton1_phi01->Draw();
hPhoton1_phi->Draw("same");
tps1phi->Draw("same");
tps2phi->Draw("same");
c3phi->SaveAs("Photon2phivsSAME.pdf");

//*********************************************

hPhoton1_scEta01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1scEta = (TPaveStats*) hPhoton1_scEta01->FindObject("stats");
tps1scEta->SetName("All TriPhoton Stats");
double X1scEta = tps1scEta->GetX1NDC();
double Y1scEta = tps1scEta->GetY1NDC();
double X2scEta = tps1scEta->GetX2NDC();
double Y2scEta = tps1scEta->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_scEta->SetLineColor(kRed);
hPhoton1_scEta->SetFillColor(3);

TCanvas *c1scEta = new TCanvas();
hPhoton1_scEta->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2scEta = (TPaveStats*) hPhoton1_scEta->FindObject("stats");
tps2scEta->SetTextColor(kRed);
tps2scEta->SetLineColor(kRed);
tps2scEta->SetX1NDC(X1);
tps2scEta->SetX2NDC(X2);
tps2scEta->SetY1NDC(Y1-(Y2-Y1));
tps2scEta->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3scEta = new TCanvas();
hPhoton1_scEta01->Draw();
hPhoton1_scEta->Draw("same");
tps1scEta->Draw("same");
tps2scEta->Draw("same");
c3scEta->SaveAs("Photon2scEtavsSAME.pdf");

//********************************************************

hPhoton1_scPhi01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1scPhi = (TPaveStats*) hPhoton1_scPhi01->FindObject("stats");
tps1scPhi->SetName("All TriPhoton Stats");
double X1scPhi = tps1scPhi->GetX1NDC();
double Y1scPhi = tps1scPhi->GetY1NDC();
double X2scPhi = tps1scPhi->GetX2NDC();
double Y2scPhi = tps1scPhi->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_scPhi->SetLineColor(kRed);
hPhoton1_scPhi->SetFillColor(3);

TCanvas *c1scPhi = new TCanvas();
hPhoton1_scPhi->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2scPhi = (TPaveStats*) hPhoton1_scPhi->FindObject("stats");
tps2scPhi->SetTextColor(kRed);
tps2scPhi->SetLineColor(kRed);
tps2scPhi->SetX1NDC(X1);
tps2scPhi->SetX2NDC(X2);
tps2scPhi->SetY1NDC(Y1-(Y2-Y1));
tps2scPhi->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3scPhi = new TCanvas();
hPhoton1_scPhi01->Draw();
hPhoton1_scPhi->Draw("same");
tps1scPhi->Draw("same");
tps2scPhi->Draw("same");
c3scPhi->SaveAs("Photon2scPhivsSAME.pdf");

}

void photon3() {

 gROOT->SetStyle("Plain");
  gStyle->SetPalette(1,0);
  gStyle->SetNdivisions(505);
  gStyle->SetOptStat("ourme");
  
  TFile *f01 = TFile::Open("Triphoton01.root");
  TFile *fHoverE = TFile::Open("HoverETriphoton.root");

  TH1D *hPhoton1_pt01 = (TH1D*) f01->Get("Photon3_pt");
  TH1D *hPhoton1_pt = (TH1D*) fHoverE->Get("Photon3_pt");
  
  TH1D *hPhoton1_eta01 = (TH1D*) f01->Get("Photon3_eta");
  TH1D *hPhoton1_eta = (TH1D*) fHoverE->Get("Photon3_eta");

  TH1D *hPhoton1_phi01 = (TH1D*) f01->Get("Photon3_phi");
  TH1D *hPhoton1_phi = (TH1D*) fHoverE->Get("Photon3_phi");

  TH1D *hPhoton1_scEta01 = (TH1D*) f01->Get("Photon3_scEta");
  TH1D *hPhoton1_scEta = (TH1D*) fHoverE->Get("Photon3_scEta");

  TH1D *hPhoton1_scPhi01 = (TH1D*) f01->Get("Photon3_scPhi");
  TH1D *hPhoton1_scPhi = (TH1D*) fHoverE->Get("Photon3_scPhi");

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
c3->SaveAs("Photon3ptvsSAME.pdf");

//***************************************************

hPhoton1_eta01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1eta = (TPaveStats*) hPhoton1_eta01->FindObject("stats");
tps1eta->SetName("All TriPhoton Stats");
double X1eta = tps1eta->GetX1NDC();
double Y1eta = tps1eta->GetY1NDC();
double X2eta = tps1eta->GetX2NDC();
double Y2eta = tps1eta->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_eta->SetLineColor(kRed);
hPhoton1_eta->SetFillColor(3);

TCanvas *c1eta = new TCanvas();
hPhoton1_eta->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2eta = (TPaveStats*) hPhoton1_eta->FindObject("stats");
tps2eta->SetTextColor(kRed);
tps2eta->SetLineColor(kRed);
tps2eta->SetX1NDC(X1);
tps2eta->SetX2NDC(X2);
tps2eta->SetY1NDC(Y1-(Y2-Y1));
tps2eta->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3eta = new TCanvas();
hPhoton1_eta01->Draw();
hPhoton1_eta->Draw("same");
tps1eta->Draw("same");
tps2eta->Draw("same");
c3eta->SaveAs("Photon3etavsSAME.pdf");

//************************************************

hPhoton1_phi01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1phi = (TPaveStats*) hPhoton1_phi01->FindObject("stats");
tps1phi->SetName("All TriPhoton Stats");
double X1phi = tps1phi->GetX1NDC();
double Y1phi = tps1phi->GetY1NDC();
double X2phi = tps1phi->GetX2NDC();
double Y2phi = tps1phi->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_phi->SetLineColor(kRed);
hPhoton1_phi->SetFillColor(3);

TCanvas *c1phi = new TCanvas();
hPhoton1_phi->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2phi = (TPaveStats*) hPhoton1_phi->FindObject("stats");
tps2phi->SetTextColor(kRed);
tps2phi->SetLineColor(kRed);
tps2phi->SetX1NDC(X1);
tps2phi->SetX2NDC(X2);
tps2phi->SetY1NDC(Y1-(Y2-Y1));
tps2phi->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3phi = new TCanvas();
hPhoton1_phi01->Draw();
hPhoton1_phi->Draw("same");
tps1phi->Draw("same");
tps2phi->Draw("same");
c3phi->SaveAs("Photon3phivsSAME.pdf");

//*********************************************

hPhoton1_scEta01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1scEta = (TPaveStats*) hPhoton1_scEta01->FindObject("stats");
tps1scEta->SetName("All TriPhoton Stats");
double X1scEta = tps1scEta->GetX1NDC();
double Y1scEta = tps1scEta->GetY1NDC();
double X2scEta = tps1scEta->GetX2NDC();
double Y2scEta = tps1scEta->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_scEta->SetLineColor(kRed);
hPhoton1_scEta->SetFillColor(3);

TCanvas *c1scEta = new TCanvas();
hPhoton1_scEta->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2scEta = (TPaveStats*) hPhoton1_scEta->FindObject("stats");
tps2scEta->SetTextColor(kRed);
tps2scEta->SetLineColor(kRed);
tps2scEta->SetX1NDC(X1);
tps2scEta->SetX2NDC(X2);
tps2scEta->SetY1NDC(Y1-(Y2-Y1));
tps2scEta->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3scEta = new TCanvas();
hPhoton1_scEta01->Draw();
hPhoton1_scEta->Draw("same");
tps1scEta->Draw("same");
tps2scEta->Draw("same");
c3scEta->SaveAs("Photon3scEtavsSAME.pdf");

//********************************************************

hPhoton1_scPhi01->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the first histogram */
TPaveStats *tps1scPhi = (TPaveStats*) hPhoton1_scPhi01->FindObject("stats");
tps1scPhi->SetName("All TriPhoton Stats");
double X1scPhi = tps1scPhi->GetX1NDC();
double Y1scPhi = tps1scPhi->GetY1NDC();
double X2scPhi = tps1scPhi->GetX2NDC();
double Y2scPhi = tps1scPhi->GetY2NDC();

/*Histogram 2, fill it some data and draw*/
hPhoton1_scPhi->SetLineColor(kRed);
hPhoton1_scPhi->SetFillColor(3);

TCanvas *c1scPhi = new TCanvas();
hPhoton1_scPhi->Draw();
gPad->Update(); //IMPORTANT

/* collect stat of the second histogram (h2) */
TPaveStats *tps2scPhi = (TPaveStats*) hPhoton1_scPhi->FindObject("stats");
tps2scPhi->SetTextColor(kRed);
tps2scPhi->SetLineColor(kRed);
tps2scPhi->SetX1NDC(X1);
tps2scPhi->SetX2NDC(X2);
tps2scPhi->SetY1NDC(Y1-(Y2-Y1));
tps2scPhi->SetY2NDC(Y1);

/* Draw all (two histograms and their stat boxes in one canvas */
TCanvas *c3scPhi = new TCanvas();
hPhoton1_scPhi01->Draw();
hPhoton1_scPhi->Draw("same");
tps1scPhi->Draw("same");
tps2scPhi->Draw("same");
c3scPhi->SaveAs("Photon3scPhivsSAME.pdf");

}
