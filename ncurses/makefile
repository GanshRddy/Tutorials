.PHONY: directories

all: directories cursors

directories: bin_create

bin_create:
	mkdir -p bin

cursors: src/cursors.cpp
	g++ -o bin/cursors src/cursors.cpp -lcurses