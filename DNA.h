#pragma once
#include <iostream>

class DNA {
    private:
        std::vector<std::string> DNA_strands;
    public:
        std::vector<std::string> get_DNA_strands();
};
