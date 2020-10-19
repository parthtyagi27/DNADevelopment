#include "../catch/catch.hpp"
#include "../DNA.h"
#include "../Analysis.h"

TEST_CASE("Bob", "[weight=1]") {
    REQUIRE( 1 == 1 );
}

TEST_CASE("Alice, Bob, Charlie", "[weight=1]") {
    std::vector<std::vector<int>> people = {{5, 2, 8}, 
                                            {3, 7, 4}, 
                                            {6, 1, 5}};
    std::vector<std::string> str_list = {"AGAT", "AATG", "TATC"};
    std::vector<DNA> dna;
    DNA trial("AACCCTGCGCGCGCGCGATCTATCTATCTATCTATCCAGCATTAGCTAGCATCAAGATAGATAGATGAATTTCGAAATGAATGAATGAATGAATGAATGAATG", "", str_list);
    dna.push_back(trial);
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};

    People p(dna, people, n_list);
    Analysis go(p);

    REQUIRE( go.findMatch(go.findCount(trial)) == "Bob" );
}

