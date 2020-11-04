#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "Person.h"

namespace CSVReader {
    std::vector<std::string> split_line(std::string input_line, char delimiter);
    Person get_person(std::string input_line, std::vector<std::string> strs);
    std::vector<Person> process_file(std::string input_file_path);
}

