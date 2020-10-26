#include "Analysis.h"

/**
 * Default Constructor for the Analysis class.
*/
Analysis::Analysis() {
}

/**
 * Constructor for the analysis class 
 * @param people The people object assigned to this DNA analysis instance
*/
Analysis::Analysis(People p) {
}

/**
 * Returns the total diffrence between the values in both vectors
 * @param values The first vector containing values of STR occurrences
 * @param count The second vector containing expected values of STR occurrences
 * @return Diffrence between the values in both vectors
 */
int Analysis::findDiff(std::vector<int> values, std::vector<int> count) {
}

/**
 * Finds the name of the person who's STR occurences match the parameter
 * @param count The vector containing the desired STR counts
 * @return The name of the person who matches the count vector or return "No Match" if theres no match
*/
std::string Analysis::findMatch(std::vector<int> count) {
}

/**
 * Finds the max number of times the STRs occur consectutively in the DNA strand
 * @param strand The DNA object representing the Strand
 * @return A vector containing the number of times the STRs occur consec
*/
std::vector<int> Analysis::findCount(DNA strand) {
}

/**
 * Finds the index where a specific string occurs in a vector
 * @param string_list Vector of Strings
 * @param check The string to check
 * @return The index at which the string occurs in the vector  
*/
int Analysis::checkMatch(std::vector<std::string> string_list, std::string check) {
}