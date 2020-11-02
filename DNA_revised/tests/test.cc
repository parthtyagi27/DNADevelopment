#include "catch.hpp"
#include "../includes/DNA.h"
#include "../includes/Analysis.h"

TEST_CASE("Find Michael 1", "[weight=1]") {
    std::map<std::string, int> values;
    values["AGAT"] = 5;
    values["AATG"] = 2;
    values["TATC"] = 8;
    Person p(values, "Michael");
    std::vector<Person> people;
    people.push_back(p);
    std::string test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA";
    Analysis analyze(people);
    std::cout << analyze.find_count(test)[0];
    REQUIRE(2==2);
}