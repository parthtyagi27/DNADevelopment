#include "Analysis.h"

Analysis::Analysis() {

}

Analysis::Analysis(People p) {
    people = p;
}

int Analysis::findDiff(std::vector<int> values, std::vector<int> count) {
    int result = 0;
    for (int i = 0; i < values.size(); i++) {
        int diff = values[i] - count[i];
        //cout << "count: " << count[i] << endl;
        result += std::abs(diff);
    }
    return result;
}

std::string Analysis::findMatch(std::vector<int> count) {
    std::vector<std::vector<int>> p_list = people.getPeople();
    for (int i = 0; i < p_list.size(); i++) {
        if (findDiff(p_list[i], count) == 0) {
            return people.getName(i);
        }
    }
    return "No Match";
}

std::vector<int> Analysis::findCount(DNA strand) {
    std::string temp = "";
    std::vector<int> count = {0, 0, 0};
    std::string strand_s = strand.getDNAStrand();
    //max is one as if it finds the first instance, it does not count it as the prev is not the same
    int max = 1;
    int same = 0;
    int prev = -1;
    for (int j = 0; j < 4; j++) {
        for (int i = j; i < (int)strand_s.length(); i+=4) {
            temp = "";
            temp = strand_s.substr(i, 4);
            same = checkMatch(strand.getMatchList(), temp);
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

int Analysis::checkMatch(std::vector<std::string> string_list, std::string check) {
    for (int i = 0; i < sizeof(string_list); i++) {
        if (check == string_list[i]) {
            return i;
        }
    }
    return -1;
}