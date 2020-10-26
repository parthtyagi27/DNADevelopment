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

int main() {
    std::string test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA";
    std::vector<std::string> str_list = {"ATTA", "AGTC", "AAGC"};
    DNA trial(test, str_list);
    std::vector<std::vector<int>> p_list = {{5, 2, 8},
                                            {3, 7, 4},
                                            {6, 1, 5}};
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};
    std::vector<DNA> s_list = {trial};
    People first(s_list, p_list, n_list);
    Analysis go = (first);
    std::vector<int> count = go.findCount(s_list[0]);
    cout << go.findMatch(count) << endl; 
    return 0; 
}
