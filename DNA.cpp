#include <iostream>
#include "DNA.h"
#include <vector>

DNA::DNA() {

}

DNA::DNA(std::string strand, std::string name, std::vector<std::string> list) {
    DNA_strand = strand;
    owner = name;
    match_list = list;
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

void DNA::setMatchList(std::vector<std::string> list) {
    match_list = list;
}

std::vector<std::string> DNA::getMatchList() {
    return match_list;
}