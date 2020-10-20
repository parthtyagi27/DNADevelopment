#include "../catch/catch.hpp"
#include "../DNA.h"
#include "../Analysis.h"

TEST_CASE("Find Difference 1", "[weight=1]") {
    std::vector<std::vector<int>> people = {{5, 2, 8}, 
                                            {3, 7, 4}, 
                                            {6, 1, 5}};
    std::vector<std::string> str_list = {"AGAT", "AATG", "TATC"};
    std::vector<DNA> dna;
    DNA trial("AACCCTGCGCGCGCGCGATCTATCTATCTATCTATCCAGCATTAGCTAGCATCAAGATAGATAGATGAATTTCGAAATGAATGAATGAATGAATGAATGAATG", str_list);
    dna.push_back(trial);
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};

    People p(dna, people, n_list);
    Analysis go(p);
    REQUIRE(go.findDiff(people[0], {5, 2, 8}) == 0);
}

TEST_CASE("For Bob", "[weight=1]") {
    std::vector<std::vector<int>> people = {{5, 2, 8}, 
                                            {3, 7, 4}, 
                                            {6, 1, 5}};
    std::vector<std::string> str_list = {"AGAT", "AATG", "TATC"};
    std::vector<DNA> dna;
    DNA trial("AACCCTGCGCGCGCGCGATCTATCTATCTATCTATCCAGCATTAGCTAGCATCAAGATAGATAGATGAATTTCGAAATGAATGAATGAATGAATGAATGAATG", str_list);
    dna.push_back(trial);
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};

    People p(dna, people, n_list);
    Analysis go(p);

    REQUIRE( go.findMatch(go.findCount(trial)) == "Bob" );
}

TEST_CASE("For Charlie", "[weight=1]") {
    std::vector<std::vector<int>> people = {{5, 2, 8}, 
                                            {3, 7, 4}, 
                                            {6, 1, 5}};
    std::vector<std::string> str_list = {"AGAT", "AATG", "TATC"};
    std::vector<DNA> dna;
    DNA trial("CCAGATAGATAGATAGATAGATAGATGTCACAGGGATGCTGAGGGCTGCTTCGTACGTACTCCTGATTTCGGGGATCGCTGACACTAATGCGTGCGAGCGGATCGATCTCTATCTATCTATCTATCTATCCTATAGCATAGACATCCAGATAGATAGATC", str_list);
    dna.push_back(trial);
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};

    People p(dna, people, n_list);
    Analysis go(p);

    REQUIRE( go.findMatch(go.findCount(trial)) == "Charlie" );
}

TEST_CASE("For Alice", "[weight=1]") {
    std::vector<std::vector<int>> people = {{5, 2, 8}, 
                                            {3, 7, 4}, 
                                            {6, 1, 5}};
    std::vector<std::string> str_list = {"AGAT", "AATG", "TATC"};
    std::vector<DNA> dna;
    DNA trial("AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA", str_list);
    dna.push_back(trial);
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};

    People p(dna, people, n_list);
    Analysis go(p);

    REQUIRE( go.findMatch(go.findCount(trial)) == "Alice" );
}

TEST_CASE("For Random", "[weight=1]") {
    std::vector<std::vector<int>> people = {{5, 2, 8}, 
                                            {15, 12, 10}, 
                                            {6, 1, 5}};
    std::vector<std::string> str_list = {"AGAT", "AATG", "TATC"};
    std::vector<DNA> dna;
    DNA trial("TGTATCTATCTATCTATCTATCTATCTATCTATCTATCTATCAATGAATGAATGACAGATAGATAGATAGATAGATAGATAGATAGATAGATAGATAGATAGATAGATAGATAGATAGGAGTGCGTGTAGAATTCAGAC", str_list);
    dna.push_back(trial);
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};

    People p(dna, people, n_list);
    Analysis go(p);

    REQUIRE( go.findMatch(go.findCount(trial)) == "Bob" );
}

TEST_CASE("For Different String List", "[weight=1]") {
    std::vector<std::vector<int>> people = {{5, 2, 8}, 
                                            {15, 12, 10}, 
                                            {6, 1, 5}};
    std::vector<std::string> str_list = {"ATTA", "AGTC", "AAGC"};
    std::vector<DNA> dna;
    DNA trial("TCAAGCAAGCAAGCAAGCAAGCAAGCAAGCAAGCAAGCAAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAATTAAAGGTTGTTTTCTGGAAGCCTCC", str_list);
    dna.push_back(trial);
    std::vector<std::string> n_list = {"Alice", "Bob", "Charlie"};

    People p(dna, people, n_list);
    Analysis go(p);

    REQUIRE( go.findMatch(go.findCount(trial)) == "No Match" );
}





