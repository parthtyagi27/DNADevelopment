#pragma once
#include "DNA.h"
#include "Person.h"

class Analysis {
    public:
        Analysis();
        Analysis();

        int findDiff(std::vector<int> values, std::vector<int> count);
        std::string findMatch(std::vector<int> count);
        std::vector<int> findCount(DNA strand);
        int checkMatch(std::vector<std::string> string_list, std::string check);
        
    private:


};