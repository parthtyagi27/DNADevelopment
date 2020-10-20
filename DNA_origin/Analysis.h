#pragma once
#include "DNA.h"
#include "People.h"

class Analysis {
    private:
        People people;
    public:
        Analysis();
        Analysis(People p);

        int findDiff(std::vector<int> values, std::vector<int> count);
        std::string findMatch(std::vector<int> count);
        std::vector<int> findCount(DNA strand);
        int checkMatch(std::vector<std::string> string_list, std::string check);

};