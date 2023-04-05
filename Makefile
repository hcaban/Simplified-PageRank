CC=g++-12
FLAGS=-std=c++14 -Wall -Werror

CPPFILES=src/main.cpp src/AdjacencyList.cpp
TESTFILE=test-unit/catch-tests/test.cpp
HFILES=src/AdjacencyList.h
SRCFILES=$(CPPFILES) $(HFILES)

BINARY=bin/PageRank

CATCHTEST=test-unit/catch-tests

# A little dirty, clean it up later

all: $(SRCFILES)
	$(CC) $(FLAGS) -o $(BINARY) $(CPPFILES)

test: $(SRCFILES) $(TESTFILE)
	$(CC) $(FLAGS) -o bin/test $(CATCHTEST)/test.cpp src/AdjacencyList.cpp

clean:
	rm -rf $(BINARY)