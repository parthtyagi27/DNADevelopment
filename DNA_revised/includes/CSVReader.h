#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "Person.h"

namespace CSVReader {
    /**
     * Splits a string into a vector based on a specific character
     * @param input_line The string to split
     * @param delimiter The charcater to use to split the line (HINT: ',' for CSV files)
     * @return A vector of strings that contain each region of the input string split by the delimiter
     */
    std::vector<std::string> split_line(std::string input_line, char delimiter);

    /**
     * Converts one line of input into a person
     * @param input_line The line of the CSV file that needs to be processed
     * @param strs A vector of STRs
     * @return A Person object 
     */
    Person get_person(std::string input_line, std::vector<std::string> strs);

    /**
     * Read in a CSV file and convert it into a vector of Persons so it can be used in the Analysis Class
     * @param input_file_path The path of the input file
     * @return A vector of People
     */
    std::vector<Person> process_file(std::string input_file_path);
}

