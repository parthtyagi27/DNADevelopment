#include <iostream>
#include "q6.h"
#include "DNA.h"

using std::cout;
using std::endl;

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
    //first test should be Alice
    std::string test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA";
    std::string temp = "";

    std::string str_list[] = {"AGAT", "AATG", "TATC"};
    int Alice[] = {5, 2, 8};
    int Bob[] = {3, 7, 4};
    int Charlie[] = {6, 1, 5};

    int A_count[] = {0, 0, 0};
    int B_count[] = {0, 0, 0};
    int C_count[] = {0, 0, 0};

    int a, b, c = 0;
    for (int i = 0; i < test.length() - 4; i++) {
        for (int j = i; i < test.length() - 4; j+=4) {
            //iterate through chunks of 4, and slowly exclude the beginning values

        }
    }
    
}
