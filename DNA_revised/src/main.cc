#include "../includes/Analysis.h"
#include "../includes/Person.h"
#include "../includes/DNA.h"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * argv[]) {
    if (argc < 3) {
        std::cout << "ERROR: Please specify CSV file as the first argument and the DNA sequence as the second argument\n";
        return -1;
    }
    std::fstream input_file = std::fstream(argv[1]);
    std::string line;

    while (std::getline(input_file, line)) {
        std::cout << line << "\n";
    }

    input_file.close();
}