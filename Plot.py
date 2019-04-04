
from ROOT import gROOT, TChain
from rootpy.interactive import wait
from rootpy.plotting import Hist
import rootpy.plotting.root2matplotlib as rplt
import matplotlib.pyplot as plt
from tools.plotting import make_plot, Histogram_properties

if __name__ == '__main__':
    input_file = "/hdfs/TopQuarkGroup/run2/ntuples/v28/TTJets_PowhegPythia8/ntuple_merged_001.root"
    target_tree = "nTupleTree/tree"
    gROOT.SetBatch(1);
    chain = TChain(target_tree);
    chain.Add(input_file);
    chain.SetBranchStatus("*", 0);
    chain.SetBranchStatus("Electrons.Charge", 1);
    chain.SetBranchStatus("TopPairElectronPlusJetsSelection.FullSelection", 1);
    chain.SetBranchStatus("Muons.Charge", 1);
    chain.SetBranchStatus("TopPairMuonPlusJetsSelection.FullSelection", 1);
    # 80 bins, from 0 to 400 (GeV)
    h_gen_met = Hist(8, -4, 4)
    leptonCharge = Hist(8, -4, 4)
    MuonCharge = Hist(8, -4, 4)
    fill = h_gen_met.Fill
    fill2 = leptonCharge.Fill
    fill3 = MuonCharge.Fill
    # ready to read all events
    n_processed_events = 0
    for event in chain:
        gen_met = event.__getattr__("Electrons.Charge")
        gen_met2 = event.__getattr__("TopPairElectronPlusJetsSelection.FullSelection")
        muonq = event.__getattr__("Muons.Charge")
        musel = event.__getattr__("TopPairMuonPlusJetsSelection.FullSelection")
        #print gen_met
        if len(gen_met)>0:
            if (gen_met2)>0:
                fill(gen_met[0])
                fill2(gen_met[0])
        if len(muonq)>0:
            if (musel)>0:
                fill2(muonq[0])
                fill3(muonq[0])
        n_processed_events += 1
        if (n_processed_events % 50000 == 0):
            print 'Processed', n_processed_events, 'events.'
        #if n_processed_events >= stop_at:
        #break
    print 'Processed', n_processed_events, 'events.'
    histogram_properties = Histogram_properties()
    histogram_properties.name = 'electrons_charge' # it will be saved as that
    histogram_properties.title = 'leptons q'
    histogram_properties.x_axis_title = 'q'
    histogram_properties.y_axis_title = 'Events'
    make_plot(h_gen_met, histogram_properties,
    save_folder = 'sb15165',
    save_as = ['png'])
    histogram_properties.name = 'leptons_charge'
    make_plot(leptonCharge, histogram_properties,
    save_folder = 'sb15165',
    save_as = ['png'])
    histogram_properties.name = 'muons_charge'
    make_plot(MuonCharge, histogram_properties, 
    save_folder = 'sb15165', 
    save_as = ['png'])
