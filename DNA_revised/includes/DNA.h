#pragma once
#include <string>

class DNA {
    public:
        DNA();
        DNA(std::string);
        void set_dna_sequence(std::string sequence);
        std::string get_dna_sequence();
    private:
        std::string dna_sequence;
        bool valid;
};