#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include <iomanip>

using namespace std;
using namespace screeClass;
//#undef main

int main(int argc, char *args[])
{
	//Window Creation Start
	Screen screen;
	if (screen.init() == false) {
		cout << "Error initializing SDL" << endl;
	}

	bool quit = false;
	
	while (true) {
		//Update particles
		//Draw particles
		//Check for messages/events

		screen.setPixel(400, 300, 255, 255,255);

		screen.update();

		if (!screen.processEvents()) {
			break;
		}
	}
	


	
	screen.close();


	getchar();
	return 0;
}


