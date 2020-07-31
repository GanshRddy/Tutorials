#include <iostream>
#include <ncurses.h>

using namespace std;

int main(){

	// initializes the screen
	// allocates memomy and clears the screen
	initscr();

	int x = 10, y = 4;

	// moves the cursor - by lines not by pixels
	move(y, x);

	// prints to window
	printw("Hello, World!");

	// refreshes the screen to match whats in memory
	refresh();

	// takes char from input
	char c = getch();

	// clears the window screen
	clear();

	mvprintw(4, 0, "%c", c);

	getch();
	// deallocates the memory and ends ncurses
	endwin();
	return 0;
}