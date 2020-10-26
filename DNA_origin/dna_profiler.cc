#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * argv[]) {
    if (argc < 2) {
        std::cout << "Error: Specify input file as second arg\n";
        return -1;
    }

    std::fstream input_file = std::fstream(argv[1]);
    std::string line;

    while (std::getline(input_file, line)) {
        std::cout << line << "\n";
    }

    input_file.close();
    return 0;
}