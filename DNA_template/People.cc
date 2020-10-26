#include "../includes/People.h"
#include "../includes/DNA.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;

/**
 * Default constructor
*/
People::People() {

}

/**
 * Custom constructor
 * @param addStrands A vector of DNA Strands
 * @param addPeople Vector of occurences of each STR for every person (Vector of vectors)
 * @param addNames Vector of names (each name at index i corresponds to a vector of occurences at index i of addPeople)
*/
People::People(std::vector<DNA> addstrands, std::vector<std::vector<int>> addpeople, std::vector<std::string> addnames) {
    strands = addstrands;
    people = addpeople;
    names = addnames;
}

/**
 * Get the DNA objects associated with this People object
 * @return Vector of DNA objects
*/
std::vector<DNA> People::getStrands() {
    return strands;
}

/**
 * Create and add a DNA strand to this object
 * @param dna String representing the DNA sequence
 * @param list List of STR's in this DNA object
*/
void People::addStrand(std::string dna, std::vector<std::string> list) {
    DNA add(dna,list);
    strands.push_back(add);
}

/**
 * Add a DNA strand to this object
 * @param add The DNA object to add in this People object
*/
void People::addStrand(DNA add) {
    strands.push_back(add);
}

/**
 * Add a Person to this object
 * @param person A vector containing the occurences of each STR for a specific person
 * @param name The name of the person
*/
void People::addPeople(std::vector<int> person, std::string name) {
    people.push_back(person);
    names.push_back(name);
}

/**
 * Get the vector of occurences for each person in this People object
 * @return The vector of occurences for each person in this People object
*/
std::vector<std::vector<int>> People::getPeople() {
    return people;
}

/**
 * Get the name of a person at a specific index
 * @param index The index of the person
 * @return The name of the person or empty string if doesn't exist
*/
std::string People::getName(int index) {
    if (index < names.size())
        return names[index];
    return "";
}