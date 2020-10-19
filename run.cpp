#include <iostream>
#include <cmath>
#include "DNA.h"
#include "People.h"
#include "Analysis.h"
#include <vector>

using std::cout;
using std::endl;
using std::vector;

/**
Our first program (Gottschling's) [10]
Objects/types/values, variables (as a sextuple of attributes), 
primitive types and declarations thereof (always use initializer), 
std::vector, selection (inc. short-circuit), iteration (w/o magic numbers), 
functions (acknowledge scope), type conversions in brief (widening/narrowing, safe/unsafe), 
code organization, comments [70]
**/

/**
Tokens, Expressions, Statements, and Grammars (very brief) [15];
Compilation (illustrate w/ header/source files + main) 
and execution in detail w/ potential errors (compiler, linker, runtime, logic) 
and how to resolve them [55]
 **/

vector<std::string> str_list = {"AGAT", "AATG", "TATC"};
vector<int> Alice = {5, 2, 8};
vector<int> Bob = {3, 7, 4};
vector<int> Charlie = {6, 1, 5};
vector<vector<int>> people = {Alice, Bob, Charlie};
//2D vector of people

int main() {
    //first test should be Alice
    std::string test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA";
    //std::string test = "AACCCTGCGCGCGCGCGATCTATCTATCTATCTATCCAGCATTAGCTAGCATCAAGATAGATAGATGAATTTCGAAATGAATGAATGAATGAATGAATGAATG";
    DNA trial(test, "", str_list);
    std::vector<std::vector<int>> p_list = {Alice, Bob, Charlie};
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};
    std::vector<DNA> s_list = {trial};
    People first(s_list, p_list, n_list);
    Analysis go = (first);
    cout << go.findMatch(go.findCount(s_list[0])) << endl; 
    return 0; 
}
