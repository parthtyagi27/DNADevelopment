#include "../includes/People.h"
#include "../includes/DNA.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;

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

void People::addStrand(std::string dna, std::vector<std::string> list) {
    DNA add(dna,list);
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