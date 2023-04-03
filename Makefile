CC=g++-12
FLAGS=-std=c++14 -Wall -Werror

BINARY=build/PageRank
CPPFILES=src/main.cpp src/AdjacencyList.cpp
HFILES=src/AdjacencyList.h
SRCFILES=$(CPPFILES) $(HFILES)

all: $(SRCFILES)
	$(CC) $(FLAGS) -o $(BINARY) $(CPPFILES)

clean:
	rm -rf $(BINARY)