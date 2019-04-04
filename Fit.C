{
  using namespace RooFit;
  TFile *f_hists = TFile::Open("hists.root");
  TFile *f_psddata = TFile::Open("psddata.root");
  TFile *f_histsttZ = TFile::Open("histsttZ.root");
  TFile f("fhists.root","recreate");
  TH1F *hbkg = (TH1F*) f_psddata->Get("hmet")->Clone("hbkg");
  TH1F *hsgn = (TH1F*) f_psddata->Get("hmet2")->Clone("hsgn");
  TH1F *hmc1 = (TH1F*) f_hists->Get("MET")->Clone("hmc1");
  TH1F *hmc2 = (TH1F*) f_histsttZ->Get("ttZMET")->Clone("hmc2");
  TH1* sgnfrac = new TH1F("sgnfrac", "signal fraction", 40, -0.05, 0.05);
  for (int j=0; j<1000; j++){
    r=TRandom3(0);	  
    TH1* hdata = new TH1F("hdata", "MET fit", 20, 0, 300);
    hdata->Add(hbkg);
    hdata->Add(hsgn);
    for (int i=0; i<20; i++){
      Double_t BinContent = hdata->GetBinContent(i);
      // cout << BinContent <<endl;
      hdata->SetBinContent(i, r.Poisson(BinContent));
      // cout << hdata->GetBinContent(i) <<endl <<endl;
    }
    TObjArray *mc = new TObjArray(2);
    mc->Add(hbkg);
    mc->Add(hsgn);
    TFractionFitter* fit = new TFractionFitter(hdata,mc);
    fit->Constrain(0,-1.0,1.0);
    Int_t status = fit->Fit();
    std::cout << "fit status: " << status <<std::endl;
    if (status == 0){
      double value,error;
      double Value,Error;
      fit->GetResult(1,value,error);
      fit->GetResult(0,Value,Error);
      cout<< "fitted fraction for sgn = "<<value <<"+-" <<error <<endl;
      cout<< "fitted fraction for bkg = "<<Value <<"+-" <<Error <<endl;
      sgnfrac->Fill(value);
      TH1F* result = (TH1F*) fit->GetPlot();
      // hdata->Draw("MET");
      // result->Draw("same");
      if (j==0){
       	f.Write("hdata");
      }
    }
  } 
  sgnfrac->Draw();
} 
