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

int DNA::checkMatch(std::vector<std::string> string_list, std::string check) {
    for (int i = 0; i < sizeof(string_list); i++) {
        if (check == string_list[i]) {
            return i;
        }
    }
    return -1;
}