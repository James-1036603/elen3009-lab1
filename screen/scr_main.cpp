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

