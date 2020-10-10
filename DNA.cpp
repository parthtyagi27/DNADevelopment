#include <iostream>
#include "DNA.h"

DNA::DNA() {

}

DNA::DNA(std::string strand, std::string name) {
    DNA_strand = strand;
    owner = name;
}


std::string DNA::getDNAStrand() {
    return DNA_strand;
}

void DNA::setOwner(std::string person) {
    owner = person;
}

std::string DNA::getOwner() {
    return owner;
}
