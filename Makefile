EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++0x -g -O0 -Wall -Wextra
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lm

.PHONY: all test clean

all : $(EXENAME)

$(EXENAME): main.cpp DNA.cpp DNA.h q6.cpp q6.h
	$(CXX) $(CXXFLAGS) main.cpp DNA.cpp q6.cpp -o $(EXENAME)

test: catchmain.o tests.o main.o
	$(LD) catchmain.o tests.o main.o $(LDFLAGS) -o test

catchmain.o : catch/catchmain.cpp catch/catch.hpp
	$(CXX) $(CXXFLAGS) cs225/catch/catchmain.cpp

tests.o : test/tests.cpp catch/catch.hpp main.cpp DNA.h DNA.cpp
	$(CXX) $(CXXFLAGS) tests/tests.cpp

clean:
	rm -f *.o $(EXENAME)

	
