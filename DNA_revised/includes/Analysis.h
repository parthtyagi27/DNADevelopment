#pragma once
#include "DNA.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <map>

class Analysis {
    public:
        Analysis(std::vector<Person> given_people);

        bool find_diff(Person person, std::vector<int> count);
        std::string find_match(std::vector<int> count);
        std::vector<int> find_count(std::string strand);
        int check_match(std::vector<std::string> string_list, std::string check);
        
    private:
        std::vector<Person> people;
        DNA input_sequence; 
        std::vector<std::string> strs;
};