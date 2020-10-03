EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++0x -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp DNA.cpp DNA.h q6.cpp q6.h
	$(CXX) $(CXXFLAGS) main.cpp DNA.cpp q6.cpp -o $(EXENAME)

.PHONY: clean
clean:
	rm -f *.o $(EXENAME)
