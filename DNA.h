#pragma once
#include <iostream>
#include <vector>

class DNA {
    private:
        std::string DNA_strand;
        std::vector<std::string> match_list;
    public:
        DNA();
        DNA(std::string strand, std::vector<std::string> list);
        std::string getDNAStrand();
        void setMatchList(std::vector<std::string> list);
        std::vector<std::string> getMatchList();
        
};
