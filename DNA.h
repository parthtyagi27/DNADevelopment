#pragma once
#include <iostream>

class DNA {
    private:
        std::string DNA_strand;
        std::string owner;
    public:
        DNA();
        DNA(std::string strand, std::string name);
        std::string getDNAStrand();
        void setOwner(std::string person);
        std::string getOwner();
        std::vector<int> findCount();
        int checkMatch(std::vector<std::string> string_list, std::string check);
        
};
