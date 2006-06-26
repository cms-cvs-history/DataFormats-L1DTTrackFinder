#include <DataFormats/L1DTTrackFinder/interface/L1MuDTChambPhDigi.h>
#include <DataFormats/L1DTTrackFinder/interface/L1MuDTChambThDigi.h>
#include <DataFormats/L1DTTrackFinder/interface/L1MuRegionalCand.h>
#include <DataFormats/L1DTTrackFinder/interface/L1MuDTChambPhContainer.h>
#include <DataFormats/L1DTTrackFinder/interface/L1MuDTChambThContainer.h>
#include <DataFormats/L1DTTrackFinder/interface/L1MuDTTrackContainer.h>
#include <FWCore/EDProduct/interface/Wrapper.h>

namespace{ 
  namespace {
    L1MuDTChambPhDigi ph_S;
    L1MuDTChambThDigi th_S;
    L1MuRegionalCand  tr_S;

    L1MuDTChambPhContainer        ph_K;
    L1MuDTChambThContainer        th_K;
    L1MuDTTrackContainer          tr_K;
    std::vector<L1MuRegionalCand> rg_K;

    edm::Wrapper<L1MuDTChambPhContainer>         ph_W;
    edm::Wrapper<L1MuDTChambThContainer>         th_W;
    edm::Wrapper<L1MuDTTrackContainer>           tr_W;
    edm::Wrapper<std::vector<L1MuRegionalCand> > rg_W;
  }
}
