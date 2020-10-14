#include "People.h"
#include "DNA.h"
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

void People::addStrand(std::string dna, std::string owner, std::vector<std::string> list) {
    DNA add(dna, owner ,list);
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

int People::findDiff(std::vector<int> values, std::vector<int> count) {
    int result = 0;
    for (int i = 0; i < values.size(); i++) {
        int diff = values[i] - count[i];
        //cout << "count: " << count[i] << endl;
        result += std::abs(diff);
    }
    return result;
}

std::string People::findMatch(std::vector<int> count) {
    for (int i = 0; i < people.size(); i++) {
        if (findDiff(people[i], count) == 0) {
            return names[i];
        }
    }
    return "No Match";
}

