#include <iostream>
#include "DNA.h"
#include <vector>

/**
 * Default constructor
*/
DNA::DNA() {
}

/**
 * Custom constructor
 * @param strand The string that contains the DNA input
 * @param list A vector of Short Tandem Repeats to look for in the DNA
*/
DNA::DNA(std::string strand, std::vector<std::string> list) {
}

/**
 * Get the DNA strand
 * @return DNA Strand
*/
std::string DNA::getDNAStrand() {
}

/**
 * Change/set the list of Short Tandem Repeats in this specific DNA object
 * @param list The vector of new STR's (Short Tandem Repeats)
*/
void DNA::setMatchList(std::vector<std::string> list) {
}

/**
 * Get the vector of STR's 
 * @return Vector of STR's
*/
std::vector<std::string> DNA::getMatchList() {
}