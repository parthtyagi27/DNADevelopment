#include "../includes/Person.h"

Person::Person(std::map<std::string, int> v, std::string name) {
    str_map = v;
    this->name = name;
}

std::string Person::get_name() {
    return name;
}

std::map<std::string, int> Person::get_values() {
    return str_map;
}