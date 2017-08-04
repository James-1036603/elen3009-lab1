// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;
//Self edited main to keep scr_main.cpp as reference

int main()
{
	Screen myScreen{6,6,' '};
 //To print J
	myScreen.set("---");//Set first row of characters (horizontal)
	for(int i=2; i<6; i++){//Set vertical row of characters
		myScreen.move(i,2);
		myScreen.set('|');
	}

	myScreen.down();
	myScreen.back();
	myScreen.set('-');
	myScreen.display();
	return 0;
}

//4.6- Changes such as an external library which can implement a GUI could be used. Such libraries already incorporate methods for easier representation instead of a string being used. The internal methods need not be changed, as the library will not act as a screen class, merely as a way to represent data on a graphical interface.
 
