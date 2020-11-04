#include "../includes/CSVReader.h"

std::vector<std::string> CSVReader::split_line(std::string input, char delimiter) {
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

Person CSVReader::get_person(std::string input_line, std::vector<std::string> strs) {
    std::map<std::string, int> map;
    std::vector<std::string> values = split_line(input_line, ',');
    for (size_t i = 0; i < strs.size(); i++)
        map.insert(std::pair<std::string, int>(strs[i], std::stoi(values[i + 1])));
    return Person(map, values[0]);
}

std::vector<Person> CSVReader::process_file(std::string input_file_path) {
    // Open the file for reading
    std::fstream input_file = std::fstream(input_file_path);
    std::string line;
    std::string attribute_line;

    // Read the first line in the file 
    std::getline(input_file, attribute_line);

    // Split the first line by commas
    std::vector<std::string> strs = split_line(attribute_line, ',');

    // Erase the first element so we now have a vector of the STRS
    strs.erase(strs.begin());
    
    std::vector<Person> people;

    while (std::getline(input_file, line)) {
        people.push_back(CSVReader::get_person(line, strs));
    }

    // Close the file
    input_file.close();
    
    return people;
}