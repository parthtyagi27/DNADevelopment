EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lm

.PHONY: all test clean

all : $(EXENAME)

$(EXENAME): main.o DNA.o People.o Analysis.o
	$(LD) main.o DNA.o People.o Analysis.o $(LDFLAGS) -o $(EXENAME)

main.o : main.cc DNA.h People.h Analysis.h
	$(CXX) $(CXXFLAGS) main.cc

DNA.o : DNA.cc DNA.h
	$(CXX) $(CXXFLAGS) DNA.cc

People.o : People.cc People.h
	$(CXX) $(CXXFLAGS) People.cc

Analysis.o : Analysis.cc Analysis.h
	$(CXX) $(CXXFLAGS) Analysis.cc

test: catchmain.o tests.o DNA.o People.o Analysis.o
	$(LD) catchmain.o tests.o DNA.o People.o Analysis.o $(LDFLAGS) -o test

catchmain.o : catch/catchmain.cc catch/catch.hpp
	$(CXX) $(CXXFLAGS) catch/catchmain.cc

tests.o : tests/tests.cc catch/catch.hpp main.cc
	$(CXX) $(CXXFLAGS) tests/tests.cc

clean:
	rm -f *.o $(EXENAME) test