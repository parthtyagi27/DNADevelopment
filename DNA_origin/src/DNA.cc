#include <iostream>
#include "../includes/DNA.h"
#include <vector>

DNA::DNA() {

}

DNA::DNA(std::string strand, std::vector<std::string> list) {
    DNA_strand = strand;
    match_list = list;
}


std::string DNA::getDNAStrand() {
    return DNA_strand;
}

void DNA::setMatchList(std::vector<std::string> list) {
    match_list = list;
}

std::vector<std::string> DNA::getMatchList() {
    return match_list;
}