#pragma once
#include <string>
#include <map>

class Person {
    public:
        Person(std::map<std::string, int> v, std::string name);
        std::string get_name();
        std::map<std::string, int> get_values();
    private:
        std::map<std::string, int> str_map;
        std::string name;
};