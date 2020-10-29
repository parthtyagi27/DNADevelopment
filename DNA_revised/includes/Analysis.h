#pragma once
#include "DNA.h"
#include "Person.h"
#include <vector>
#include <map>

class Analysis {
    public:
        Analysis(std::vector<Person> people, DNA sequence);

        int find_diff(std::vector<int> values, std::vector<int> count);
        std::string find_match(std::vector<int> count);
        std::vector<int> find_count(DNA strand);
        int check_match(std::vector<std::string> string_list, std::string check);
        
    private:
        std::vector<Person> people;
        DNA input_sequence; 

};