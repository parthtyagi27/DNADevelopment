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

std::string str_list[] = {"AGAT", "AATG", "TATC"};
int Alice[] = {5, 2, 8};
int Bob[] = {3, 7, 4};
int Charlie[] = {6, 1, 5};

int checkMatch(std::string string_l[], std::string check) {
    for (int i = 0; i < sizeof(string_l); i++) {
        if (check == string_l[i]) {
            return i;
        }
    }
    return -1;
}

std::string findMatch() {
    return NULL;
}

int main() {
    //first test should be Alice
    std::string test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA";

    int count[] = {0, 0, 0};
    int a_diff, b_diff, c_diff = 0;

    std::string temp = "";
    for (int i = 0; i < (int)test.length() - 3; i++) {
        temp = "";
        temp = test.substr(i, 4);
        //for (int j = i; i < test.length() - 4; j+=4) {
            //iterate through chunks of 4, and slowly exclude the beginning values

        //}
        int same = checkMatch(str_list, temp);
        if (same != -1) {
            count[same]++;
        }
        std::cout << same << std::endl;
    }
    
}
