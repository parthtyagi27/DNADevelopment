#include <iostream>
#include "DNA.h"
#include <vector>

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

std::vector<int> DNA::findCount() {
    std::string temp = "";
    std::vector<int> count = {0, 0, 0};
    //max is one as if it finds the first instance, it does not count it as the prev is not the same
    int max = 1;
    int same = 0;
    int prev = -1;
    for (int j = 0; j < 4; j++) {
        for (int i = j; i < (int)DNA_strand.length(); i+=4) {
            temp = "";
            temp = DNA_strand.substr(i, 4);
            same = checkMatch(match_list, temp);
            if (prev == same && prev > -1) {
                max++;
                if (count[same] < max) {
                    count[same] = max;
                }
            } else {
                max = 1;
            }
            //std::cout << same << std::endl;
            prev = same;
        }
    }
    return count;
}
