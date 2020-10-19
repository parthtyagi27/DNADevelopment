#pragma once
#include <iostream>
#include <vector>

class DNA {
    private:
        std::string DNA_strand;
        std::string owner;
        std::vector<std::string> match_list;
    public:
        DNA();
        DNA(std::string strand, std::string name, std::vector<std::string> list);
        std::string getDNAStrand();
        void setOwner(std::string person);
        std::string getOwner();
        void setMatchList(std::vector<std::string> list);
        std::vector<std::string> getMatchList();
        std::vector<int> findCount();
        int checkMatch(std::vector<std::string> string_list, std::string check);
        
};
