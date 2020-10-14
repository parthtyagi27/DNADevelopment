#include <iostream>
#include <cmath>
#include "DNA.h"
#include "People.h"
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

// int checkMatch(vector<std::string> string_l, std::string check) {
//     for (int i = 0; i < string_l.size(); i++) {
//         if (check == string_l[i]) {
//             return i;
//         }
//     }
//     return -1;
// }

// int findDiff(vector<int> values, vector<int> count) {
//     int result = 0;
//     for (int i = 0; i < values.size(); i++) {
//         int diff = values[i] - count[i];
//         //cout << "count: " << count[i] << endl;
//         result += std::abs(diff);
//     }
//     return result;
// }

// vector<int> findCount(std::string DNA) {
//     std::string temp = "";
//     std::vector<int> count = {0, 0, 0};
//     //max is one as if it finds the first instance, it does not count it as the prev is not the same
//     int max = 1;
//     int same = 0;
//     int prev = -1;
//     for (int j = 0; j < 4; j++) {
//         for (int i = j; i < (int)DNA.length(); i+=4) {
//             temp = "";
//             temp = DNA.substr(i, 4);
//             same = checkMatch(str_list, temp);
//             if (prev == same && prev > -1) {
//                 max++;
//                 if (count[same] < max) {
//                     count[same] = max;
//                 }
//             } else {
//                 max = 1;
//             }
//             //std::cout << same << std::endl;
//             prev = same;
//         }
//     }
//     return count;
// }

// std::string findMatch(vector<int> count) {
//     int a_diff = 0;
//     int b_diff = 0;
//     int c_diff = 0;

//     a_diff = findDiff(Alice, count);
//     b_diff = findDiff(Bob, count);
//     c_diff = findDiff(Charlie, count);
//     if (a_diff == 0) {
//         cout << "Alice" << endl;
//     } else if (b_diff == 0) {
//         cout << "Bob" << endl;
//     } else if (c_diff == 0) {
//         cout << "Charlie" << endl;
//     } else {
//         cout << "No Match" << endl;
//     }
// }

int main() {
    //first test should be Alice
    std::string test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA";
    //std::string test = "AACCCTGCGCGCGCGCGATCTATCTATCTATCTATCCAGCATTAGCTAGCATCAAGATAGATAGATGAATTTCGAAATGAATGAATGAATGAATGAATGAATG";
    DNA trial(test, "", str_list);
    std::vector<std::vector<int>> p_list = {Alice, Bob, Charlie};
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};
    std::vector<DNA> s_list = {trial};
    People first(s_list, p_list, n_list);
    //trial.setMatchList(str_list);
    std::vector<int> count = trial.findCount();
    cout << first.findMatch(count) << endl; 
    return 0; 
}
