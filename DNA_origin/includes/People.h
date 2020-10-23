#pragma once
#include "DNA.h"
#include <iostream>
#include <vector>

//std::vector<std::maps<string,int>> str_to_count;

class People {
    public:
        /**
         * Constructors
         **/
        People();
        People(std::vector<DNA> addstrands, std::vector<std::vector<int>> addpeople, std::vector<std::string> addnames);
        

        std::vector<DNA> getStrands();
        void addStrand(std::string dna, std::vector<std::string> list);
        void addStrand(DNA add);
        void addPeople(std::vector<int> person, std::string name);
        std::vector<std::vector<int>> getPeople();
        std::string getName(int index);
        
    private:
        std::vector<DNA> strands;
        std::vector<std::string> names;
        std::vector<std::vector<int>> people;
        
};