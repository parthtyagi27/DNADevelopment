EXENAME = run

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lm

.PHONY: all test clean

all : $(EXENAME)

$(EXENAME): run.o DNA.o People.o Analysis.o
	$(LD) run.o DNA.o People.o Analysis.o $(LDFLAGS) -o $(EXENAME)

run.o : run.cpp DNA.h People.h Analysis.h
	$(CXX) $(CXXFLAGS) run.cpp

DNA.o : DNA.cpp DNA.h
	$(CXX) $(CXXFLAGS) DNA.cpp

People.o : People.cpp People.h
	$(CXX) $(CXXFLAGS) People.cpp

Analysis.o : Analysis.cpp Analysis.h
	$(CXX) $(CXXFLAGS) Analysis.cpp

test: catchmain.o tests.o DNA.o People.o Analysis.o
	$(LD) catchmain.o tests.o DNA.o People.o Analysis.o $(LDFLAGS) -o test

catchmain.o : catch/catchmain.cpp catch/catch.hpp
	$(CXX) $(CXXFLAGS) catch/catchmain.cpp

tests.o : tests/tests.cpp catch/catch.hpp run.cpp
	$(CXX) $(CXXFLAGS) tests/tests.cpp

clean:
	rm -f *.o $(EXENAME) test

	
