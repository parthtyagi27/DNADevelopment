#pragma once
#include <string>

class DNA {
    public:
        DNA(std::string);
        std::string get_dna_sequence();
    private:
        std::string dna_sequence;
        bool valid;
};