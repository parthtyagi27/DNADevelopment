#include "../includes/Analysis.h"
#include "../includes/Person.h"
#include "../includes/DNA.h"
#include <iostream>
#include <fstream>
#include <string>

std::vector<std::string> split_line(std::string input, char delimiter) {
    std::vector<std::string> data;
    size_t pos = 0;
    std::string token;

    while ((pos = input.find(delimiter)) != std::string::npos) {
        token = input.substr(0, pos);
        data.push_back(token);
        input.erase(0, pos + 1);
    }
    data.push_back(input);
    return data;
}

int main(int argc, char * argv[]) {
    if (argc < 3) {
        std::cout << "ERROR: Please specify CSV file as the first argument and the DNA sequence as the second argument\n";
        return -1;
    }
    std::fstream input_file = std::fstream(argv[1]);

    std::string line;
    std::string attribute_line;

    std::getline(input_file, attribute_line);
    std::vector<std::string> attributes = split_line(attribute_line, ',');

    std::vector<std::string> strs;
    strs.assign(attributes.begin() + 1, attributes.end());
    
    Person p;
    while (std::getline(input_file, line)) {

        std::vector<std::string> values = split_line(line, ',');
        std::map<std::string, int> map;
        for (size_t i = 1; i < values.size(); i++)
            map.insert(std::pair<std::string, int>(attributes[i], std::stoi(values[i])));
        p = Person(map, values[0]);
        for (auto it = map.begin(); it != map.end(); ++it)
            std::cout << (*it).first << " , " << (*it).second << "\n";
    }

    input_file.close();
    std::vector<Person> people;
    Analysis analyze(people);
    std::map<std::string, int> test = analyze.find_count(argv[2]);
    //std::cout << test.find([""]);
    // std::unordered_map<std::string, int> parth_map;
    // parth_map.insert(std::pair<std::string, int>("AGAT", 3));
    // Person parth = Person(parth_map, "Parth");
    // std::unordered_map<std::string, int> daniel_map;
    // daniel_map.insert(std::pair<std::string, int>("AGAT", 5));
    // Person daniel = Person(daniel_map, "Daniel");

    // std::vector<Person> vec = {parth, daniel};

    // Analysis analyzer = Analysis(vec);
}