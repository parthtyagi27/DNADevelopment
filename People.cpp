#include "People.h"
#include "DNA.h"
#include <iostream>
#include <vector>
#include <string>

People::People() {

}

People::People(std::vector<DNA> addstrands, std::vector<std::vector<int>> addpeople, std::vector<std::string> addnames) {
    strands = addstrands;
    people = addpeople;
    names = addnames;
}

std::vector<DNA> People::getStrands() {
    return strands;
}

void People::addStrand(std::string dna, std::string owner) {
    DNA add(dna, owner);
    strands.push_back(add);
}

void People::addStrand(DNA add) {
    strands.push_back(add);
}

void People::addPeople(std::vector<int> person, std::string name) {
    people.push_back(person);
    names.push_back(name);
}

std::vector<std::vector<int>> People::getPeople() {
    return people;
}

std::string People::getName(int index) {
    return names[index];
}


