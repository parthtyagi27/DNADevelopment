EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lm

.PHONY: all test stest clean

all : $(EXENAME)

$(EXENAME): main.o DNA.o Person.o Analysis.o
	$(LD) main.o DNA.o Person.o Analysis.o $(LDFLAGS) -o $(EXENAME)

main.o : src/main.cc includes/DNA.h includes/Person.h includes/Analysis.h
	$(CXX) $(CXXFLAGS) src/main.cc

DNA.o : src/DNA.cc includes/DNA.h
	$(CXX) $(CXXFLAGS) src/DNA.cc

Person.o : src/Person.cc includes/Person.h
	$(CXX) $(CXXFLAGS) src/Person.cc

Analysis.o : src/Analysis.cc includes/Analysis.h
	$(CXX) $(CXXFLAGS) src/Analysis.cc

test: catchmain.o test.o DNA.o Person.o Analysis.o
	$(LD) catchmain.o test.o DNA.o Person.o Analysis.o $(LDFLAGS) -o test

stest: catchmain.o separatetest.o DNA.o Person.o Analysis.o
	$(LD) catchmain.o separatetest.o DNA.o Person.o Analysis.o $(LDFLAGS) -o stest

catchmain.o : tests/catchmain.cc tests/catch.hpp
	$(CXX) $(CXXFLAGS) tests/catchmain.cc

test.o : tests/test.cc tests/catch.hpp src/main.cc
	$(CXX) $(CXXFLAGS) tests/test.cc

separatetest.o : tests/separatetest.cc tests/catch.hpp src/main.cc
	$(CXX) $(CXXFLAGS) tests/separatetest.cc

clean:
	rm -f *.o $(EXENAME) test