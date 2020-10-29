#include "../includes/DNA.h"

DNA::DNA() {
    dna_sequence = "";
    valid = false;
}

DNA::DNA(std::string input) {
    dna_sequence = input;
    for (size_t i = 0; i < input.size(); i++) {
        if (dna_sequence[i] != 'A' || dna_sequence[i] != 'G' 
            || dna_sequence[i] != 'T' || dna_sequence[i] != 'C') {
            valid = false;
        }
    }
}

void DNA::set_dna_sequence(std::string sequence) {
    dna_sequence = sequence;
    for (size_t i = 0; i < input.size(); i++) {
        if (dna_sequence[i] != 'A' || dna_sequence[i] != 'G' 
            || dna_sequence[i] != 'T' || dna_sequence[i] != 'C') {
            valid = false;
        }
    }
}

std::string DNA::get_dna_sequence() {
    if (valid)
        return dna_sequence;
    return "Invalid";
}