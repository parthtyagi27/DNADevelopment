#include "catch.hpp"
#include "../includes/DNA.h"
#include "../includes/Analysis.h"

TEST_CASE("Basic Person object works", "[weight=1]") {
    std::map<std::string, int> values;
    values["AGAT"] = 5;
    values["AATG"] = 2;
    values["TATC"] = 8;
    Person p(values, "Michael");
    if (p.get_name() != "Michael")
        FAIL("Person class fails to set name properly");
    if (p.get_values() != values)
        FAIL("Person class fails to set DNA maps properly");
    REQUIRE(true);
}

TEST_CASE("Analysis -- check_match works", "[weight=1]") {
    std::vector<std::string> strs = {"ACAT", "AGAT", "CCGT", "TAGA", "GACG"};
    std::map<std::string, int> map;
    int counter = 0;
    for (const std::string & i : strs)
        map.insert(std::pair<std::string, int>(i, counter++));
    Person p(map, "Michael");
    std::vector<Person> vec = {p};
    Analysis analysis(vec);
    for (size_t i = 0; i < strs.size(); i++) {
        REQUIRE(analysis.check_match(strs, strs[i]) == i);
    }
}

TEST_CASE("Analysis -- check_match return -1 on no match", "[weight=1]") {
    std::vector<std::string> strs = {"ACAT", "AGAT", "CCGT", "TAGA", "GACG"};
    std::map<std::string, int> map;
    int counter = 0;
    for (const std::string & i : strs)
        map.insert(std::pair<std::string, int>(i, counter++));
    Person p(map, "Michael");
    std::vector<Person> vec = {p};
    Analysis analysis(vec);
    for (size_t i = 0; i < strs.size(); i++) {
        REQUIRE(analysis.check_match(strs, strs[i]) == i);
    }
    REQUIRE(analysis.check_match(strs, "testing") == -1);
    REQUIRE(analysis.check_match(strs, "AAAA") == -1);
}

TEST_CASE("Analysis -- basic find_count works", "[weight=1]") {
    std::vector<std::string> strs = {"ACAT", "AGAT", "CCGT", "TAGA", "GACG"};
    std::map<std::string, int> map;
    int counter = 0;
    for (const std::string & i : strs)
        map.insert(std::pair<std::string, int>(i, counter++));
    Person p(map, "Michael");
    std::vector<Person> vec = {p};
    Analysis analysis(vec);
    
    std::string sequence = "ACATAGATCCGTTAGAGACG";
    std::map<std::string, int> result;
    for (size_t i = 0; i < strs.size(); i++) {
        result.insert(std::pair<std::string, int>(strs[i], 1));
    } 
    REQUIRE(analysis.find_count(sequence) == result);
}

TEST_CASE("Analysis -- basic find_count 2 works", "[weight=1]") {
    std::vector<std::string> strs = {"ACAT", "AGAT", "CCGT"};
    std::map<std::string, int> map;
    int counter = 0;
    for (const std::string & i : strs)
        map.insert(std::pair<std::string, int>(i, counter++));
    Person p(map, "Michael");
    std::vector<Person> vec = {p};
    Analysis analysis(vec);
    
    std::string sequence = "ACATACATAGATCCGTTAGATAGAGACG";
    std::map<std::string, int> result;
    for (size_t i = 0; i < strs.size(); i++) {
        result.insert(std::pair<std::string, int>(strs[i], 1));
    } 
    result["ACAT"] = 2;
    for (auto it = result.begin(); it != result.end(); ++it)
        std::cout << it->first  << " , " << it->second << "\n";

    std::map<std::string, int> returned = analysis.find_count(sequence);

    for (auto it = returned.begin(); it != returned.end(); ++it)
        std::cout << it->first  << " , " << it->second << "\n";
    REQUIRE(analysis.find_count(sequence) == result);
}