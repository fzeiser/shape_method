void Ge76_Mathis()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jun  1 05:54:24 2019) by ROOT version6.04/02
   TCanvas *c1 = new TCanvas("c1", "c1",8,30,699,498);
   c1->Range(689.125,-8.789971,4849.875,-7.401494);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);

   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg_norm");
   multigraph->SetTitle("normalized integral values");

   Double_t Graph_fx1001[2] = {
   2220,
   1640};
   Double_t Graph_fy1001[2] = {
   5.108413e-09,
   6.443201e-09};
   Double_t Graph_fex1001[2] = {
   100,
   100};
   Double_t Graph_fey1001[2] = {
   1.268567e-10,
   1.996804e-10};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,1462,2398);
   Graph_Graph1001->SetMinimum(4.815424e-09);
   Graph_Graph1001->SetMaximum(6.809014e-09);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);

   multigraph->Add(gre,"");

   Double_t Graph_fx1002[2] = {
   2620,
   2040};
   Double_t Graph_fy1002[2] = {
   5.481589e-09,
   5.522658e-09};
   Double_t Graph_fex1002[2] = {
   100,
   100};
   Double_t Graph_fey1002[2] = {
   1.534765e-10,
   2.053746e-10};
   gre = new TGraphErrors(2,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,1862,2798);
   Graph_Graph1002->SetMinimum(5.276208e-09);
   Graph_Graph1002->SetMaximum(5.769107e-09);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);

   multigraph->Add(gre,"");

   Double_t Graph_fx1003[2] = {
   3020,
   2440};
   Double_t Graph_fy1003[2] = {
   5.400816e-09,
   5.494334e-09};
   Double_t Graph_fex1003[2] = {
   100,
   100};
   Double_t Graph_fey1003[2] = {
   7.151545e-11,
   9.092629e-11};
   gre = new TGraphErrors(2,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,2262,3198);
   Graph_Graph1003->SetMinimum(5.303704e-09);
   Graph_Graph1003->SetMaximum(5.610857e-09);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);

   multigraph->Add(gre,"");

   Double_t Graph_fx1004[2] = {
   3420,
   2840};
   Double_t Graph_fy1004[2] = {
   1.033168e-08,
   5.429839e-09};
   Double_t Graph_fex1004[2] = {
   100,
   100};
   Double_t Graph_fey1004[2] = {
   4.917283e-11,
   4.859481e-11};
   gre = new TGraphErrors(2,Graph_fx1004,Graph_fy1004,Graph_fex1004,Graph_fey1004);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,2662,3598);
   Graph_Graph1004->SetMinimum(4.881283e-09);
   Graph_Graph1004->SetMaximum(1.088081e-08);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);

   multigraph->Add(gre,"");

   Double_t Graph_fx1005[2] = {
   3820,
   3240};
   Double_t Graph_fy1005[2] = {
   1.383527e-08,
   8.810419e-09};
   Double_t Graph_fex1005[2] = {
   100,
   100};
   Double_t Graph_fey1005[2] = {
   1.628133e-11,
   1.757328e-11};
   gre = new TGraphErrors(2,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,3062,3998);
   Graph_Graph1005->SetMinimum(8.286976e-09);
   Graph_Graph1005->SetMaximum(1.435742e-08);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);

   multigraph->Add(gre,"");

   Double_t Graph_fx1006[2] = {
   2320,
   1740};
   Double_t Graph_fy1006[2] = {
   4.61908e-09,
   5.403081e-09};
   Double_t Graph_fex1006[2] = {
   100,
   100};
   Double_t Graph_fey1006[2] = {
   9.789452e-11,
   1.523016e-10};
   gre = new TGraphErrors(2,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,1562,2498);
   Graph_Graph1006->SetMinimum(4.417766e-09);
   Graph_Graph1006->SetMaximum(5.658803e-09);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);

   multigraph->Add(gre,"");

   Double_t Graph_fx1007[2] = {
   2720,
   2140};
   Double_t Graph_fy1007[2] = {
   4.7731e-09,
   4.862391e-09};
   Double_t Graph_fex1007[2] = {
   100,
   100};
   Double_t Graph_fey1007[2] = {
   1.15871e-10,
   1.52039e-10};
   gre = new TGraphErrors(2,Graph_fx1007,Graph_fy1007,Graph_fex1007,Graph_fey1007);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,1962,2898);
   Graph_Graph1007->SetMinimum(4.621509e-09);
   Graph_Graph1007->SetMaximum(5.05015e-09);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);

   multigraph->Add(gre,"");

   Double_t Graph_fx1008[2] = {
   3120,
   2540};
   Double_t Graph_fy1008[2] = {
   5.996184e-09,
   4.800811e-09};
   Double_t Graph_fex1008[2] = {
   100,
   100};
   Double_t Graph_fey1008[2] = {
   5.511691e-11,
   6.406331e-11};
   gre = new TGraphErrors(2,Graph_fx1008,Graph_fy1008,Graph_fex1008,Graph_fey1008);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,2362,3298);
   Graph_Graph1008->SetMinimum(4.605292e-09);
   Graph_Graph1008->SetMaximum(6.182756e-09);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);

   multigraph->Add(gre,"");

   Double_t Graph_fx1009[2] = {
   3520,
   2940};
   Double_t Graph_fy1009[2] = {
   1.048978e-08,
   5.625206e-09};
   Double_t Graph_fex1009[2] = {
   100,
   100};
   Double_t Graph_fey1009[2] = {
   3.442571e-11,
   3.405654e-11};
   gre = new TGraphErrors(2,Graph_fx1009,Graph_fy1009,Graph_fex1009,Graph_fey1009);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,2762,3698);
   Graph_Graph1009->SetMinimum(5.097844e-09);
   Graph_Graph1009->SetMaximum(1.101751e-08);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);

   multigraph->Add(gre,"");

   Double_t Graph_fx1010[2] = {
   3920,
   3340};
   Double_t Graph_fy1010[2] = {
   1.511647e-08,
   8.980082e-09};
   Double_t Graph_fex1010[2] = {
   100,
   100};
   Double_t Graph_fey1010[2] = {
   1.131408e-11,
   1.186546e-11};
   gre = new TGraphErrors(2,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,3162,4098);
   Graph_Graph1010->SetMinimum(8.35226e-09);
   Graph_Graph1010->SetMaximum(1.574374e-08);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);

   multigraph->Add(gre,"");

   Double_t Graph_fx1011[2] = {
   2420,
   1840};
   Double_t Graph_fy1011[2] = {
   3.797456e-09,
   6.175622e-09};
   Double_t Graph_fex1011[2] = {
   100,
   100};
   Double_t Graph_fey1011[2] = {
   6.611061e-11,
   1.130697e-10};
   gre = new TGraphErrors(2,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,1662,2598);
   Graph_Graph1011->SetMinimum(3.47561e-09);
   Graph_Graph1011->SetMaximum(6.544426e-09);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);

   multigraph->Add(gre,"");

   Double_t Graph_fx1012[2] = {
   2820,
   2240};
   Double_t Graph_fy1012[2] = {
   4.81726e-09,
   4.535507e-09};
   Double_t Graph_fex1012[2] = {
   100,
   100};
   Double_t Graph_fey1012[2] = {
   7.223903e-11,
   8.942025e-11};
   gre = new TGraphErrors(2,Graph_fx1012,Graph_fy1012,Graph_fex1012,Graph_fey1012);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","Graph",100,2062,2998);
   Graph_Graph1012->SetMinimum(4.401746e-09);
   Graph_Graph1012->SetMaximum(4.93384e-09);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);

   multigraph->Add(gre,"");

   Double_t Graph_fx1013[2] = {
   3220,
   2640};
   Double_t Graph_fy1013[2] = {
   8.086361e-09,
   4.729819e-09};
   Double_t Graph_fex1013[2] = {
   100,
   100};
   Double_t Graph_fey1013[2] = {
   3.618628e-11,
   3.719203e-11};
   gre = new TGraphErrors(2,Graph_fx1013,Graph_fy1013,Graph_fex1013,Graph_fey1013);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","Graph",100,2462,3398);
   Graph_Graph1013->SetMinimum(4.349635e-09);
   Graph_Graph1013->SetMaximum(8.46554e-09);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);

   multigraph->Add(gre,"");

   Double_t Graph_fx1014[2] = {
   3620,
   3040};
   Double_t Graph_fy1014[2] = {
   1.199582e-08,
   7.044676e-09};
   Double_t Graph_fex1014[2] = {
   100,
   100};
   Double_t Graph_fey1014[2] = {
   1.939179e-11,
   1.982862e-11};
   gre = new TGraphErrors(2,Graph_fx1014,Graph_fy1014,Graph_fex1014,Graph_fey1014);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","Graph",100,2862,3798);
   Graph_Graph1014->SetMinimum(6.52581e-09);
   Graph_Graph1014->SetMaximum(1.251425e-08);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);

   multigraph->Add(gre,"");

   Double_t Graph_fx1015[2] = {
   4020,
   3440};
   Double_t Graph_fy1015[2] = {
   1.881075e-08,
   1.045926e-08};
   Double_t Graph_fex1015[2] = {
   100,
   100};
   Double_t Graph_fey1015[2] = {
   6.532091e-12,
   6.720903e-12};
   gre = new TGraphErrors(2,Graph_fx1015,Graph_fy1015,Graph_fex1015,Graph_fey1015);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Graph",100,3262,4198);
   Graph_Graph1015->SetMinimum(9.616065e-09);
   Graph_Graph1015->SetMaximum(1.965376e-08);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);

   multigraph->Add(gre,"");

   Double_t Graph_fx1016[2] = {
   2520,
   1940};
   Double_t Graph_fy1016[2] = {
   4.986746e-09,
   5.457116e-09};
   Double_t Graph_fex1016[2] = {
   100,
   100};
   Double_t Graph_fey1016[2] = {
   5.726163e-11,
   8.021593e-11};
   gre = new TGraphErrors(2,Graph_fx1016,Graph_fy1016,Graph_fex1016,Graph_fey1016);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Graph",100,1762,2698);
   Graph_Graph1016->SetMinimum(4.8687e-09);
   Graph_Graph1016->SetMaximum(5.598117e-09);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);

   multigraph->Add(gre,"");

   Double_t Graph_fx1017[2] = {
   2920,
   2340};
   Double_t Graph_fy1017[2] = {
   5.284862e-09,
   5.132723e-09};
   Double_t Graph_fex1017[2] = {
   100,
   100};
   Double_t Graph_fey1017[2] = {
   4.283138e-11,
   5.4095e-11};
   gre = new TGraphErrors(2,Graph_fx1017,Graph_fy1017,Graph_fex1017,Graph_fey1017);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,2162,3098);
   Graph_Graph1017->SetMinimum(5.053721e-09);
   Graph_Graph1017->SetMaximum(5.3526e-09);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);

   multigraph->Add(gre,"");

   Double_t Graph_fx1018[2] = {
   3320,
   2740};
   Double_t Graph_fy1018[2] = {
   9.871307e-09,
   5.237647e-09};
   Double_t Graph_fex1018[2] = {
   100,
   100};
   Double_t Graph_fey1018[2] = {
   2.422941e-11,
   2.394292e-11};
   gre = new TGraphErrors(2,Graph_fx1018,Graph_fy1018,Graph_fex1018,Graph_fey1018);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,2562,3498);
   Graph_Graph1018->SetMinimum(4.74552e-09);
   Graph_Graph1018->SetMaximum(1.036372e-08);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);

   multigraph->Add(gre,"");

   Double_t Graph_fx1019[2] = {
   3720,
   3140};
   Double_t Graph_fy1019[2] = {
   1.155151e-08,
   8.433275e-09};
   Double_t Graph_fex1019[2] = {
   100,
   100};
   Double_t Graph_fey1019[2] = {
   9.036141e-12,
   1.011219e-11};
   gre = new TGraphErrors(2,Graph_fx1019,Graph_fy1019,Graph_fex1019,Graph_fey1019);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","Graph",100,2962,3898);
   Graph_Graph1019->SetMinimum(8.109424e-09);
   Graph_Graph1019->SetMaximum(1.187429e-08);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);

   multigraph->Add(gre,"");

   Double_t Graph_fx1020[2] = {
   4120,
   3540};
   Double_t Graph_fy1020[2] = {
   2.337598e-08,
   1.058378e-08};
   Double_t Graph_fex1020[2] = {
   100,
   100};
   Double_t Graph_fey1020[2] = {
   3.748446e-12,
   3.263168e-12};
   gre = new TGraphErrors(2,Graph_fx1020,Graph_fy1020,Graph_fex1020,Graph_fey1020);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);

   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","Graph",100,3362,4298);
   Graph_Graph1020->SetMinimum(9.300601e-09);
   Graph_Graph1020->SetMaximum(2.465965e-08);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);

   multigraph->Add(gre,"");
   multigraph->Print();

   Double_t Graph_fx1021[28] = {
   1257.5,
   1369.5,
   1481.5,
   1593.5,
   1705.5,
   1817.5,
   1929.5,
   2041.5,
   2153.5,
   2265.5,
   2377.5,
   2489.5,
   2601.5,
   2713.5,
   2825.5,
   2937.5,
   3049.5,
   3161.5,
   3273.5,
   3385.5,
   3497.5,
   3609.5,
   3721.5,
   3833.5,
   3945.5,
   4057.5,
   4169.5,
   4281.5};
   Double_t Graph_fy1021[28] = {
   6.765e-09,
   8.855e-09,
   1.116e-08,
   9.64e-09,
   9.515e-09,
   9.705e-09,
   7.18e-09,
   5.775e-09,
   6.995e-09,
   5.4e-09,
   4.015e-09,
   4.125e-09,
   4.19e-09,
   4.96e-09,
   7.77e-09,
   5.705e-09,
   5.46e-09,
   6.55e-09,
   8.515e-09,
   1.103e-08,
   1.0045e-08,
   8.345e-09,
   7.81e-09,
   7.345e-09,
   9.1e-09,
   1.0055e-08,
   7.33e-09,
   6.25e-09};
   Double_t Graph_fex1021[28] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fey1021[28] = {
   1.825e-09,
   2.445e-09,
   3.14e-09,
   2.76e-09,
   2.785e-09,
   2.895e-09,
   2.19e-09,
   1.795e-09,
   2.215e-09,
   1.74e-09,
   1.315e-09,
   1.375e-09,
   1.42e-09,
   1.71e-09,
   2.73e-09,
   2.035e-09,
   1.98e-09,
   2.41e-09,
   3.185e-09,
   4.17e-09,
   3.855e-09,
   3.255e-09,
   3.09e-09,
   2.955e-09,
   3.7e-09,
   4.145e-09,
   3.07e-09,
   2.64e-09};
   gre = new TGraphErrors(28,Graph_fx1021,Graph_fy1021,Graph_fex1021,Graph_fey1021);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(4);
   gre->SetFillStyle(3010);

   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","Graph",100,953.9,4585.1);
   Graph_Graph1021->SetMinimum(1.45e-09);
   Graph_Graph1021->SetMaximum(1.645e-08);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);

   multigraph->Add(gre,"4A");
   multigraph->Draw("A*");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);

   TPaveText *pt = new TPaveText(0.2739196,0.94,0.7260804,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("normalized integral values");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
