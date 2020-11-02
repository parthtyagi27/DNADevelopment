#pragma once
#include <string>
#include <unordered_map>
#include <map>

class Person {
    public:
        /**
        * Default constructor
        */
        Person();
        /**
         * Custom constructor
         * @param v A map of DNA STRS as the key and their occurence as the value 
         * @param name Name of person
        */
        Person(std::map<std::string, int> v, std::string name);
        /**
         * Return the name of the person
         * @return name
        */
        std::string get_name();
        /**
         * Return the map containing STR's and their occurences
         * @return map containing STR's and their occurences
        */
        std::map<std::string, int> get_values();
    private:
        std::map<std::string, int> str_map;
        std::string name;
};