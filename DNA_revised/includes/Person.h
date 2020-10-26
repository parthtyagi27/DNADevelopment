#pragma once
#include <string>
#include <map>

using namespace std;

class Person {
    public:
        Person(map<string, int> v, string name);
        string getName();
        map<string, int> getValues();
    private:
        map<string, int> values;
        string name;
};