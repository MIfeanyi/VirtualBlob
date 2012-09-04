#include <stdio.h> 

#include <SDL.h>

#include "Window.hpp"
#include "Font.hpp"
#include "String.hpp"
#include "Audio.hpp"
#include "System.hpp"

#include "Game.hpp"

int main(int argc, char* args[])
{
	SDL_Init( SDL_INIT_EVERYTHING );
    TTF_Init();
    int STATE = 0; //used to manage state
    bool Running = true;
    Window App(1280, 768, "Virtual Blob", false);
	

	while(Running)
	{
		switch(STATE)
		{
			case MENU:
			STATE = UpdateMenu();
			break;
			case GAME:
			STATE = UpdateGame();
			break;
			case ABOUT:
			STATE = UpdateAbout();
			break;
			case EXIT:
			Running = false;
			break;
			default:
			return STATE; // probably an error code
			break;
		};
	}
	return 0;
}
