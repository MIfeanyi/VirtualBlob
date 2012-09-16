#include "Game.hpp"

int main(int argc, char* args[])
{
	SDL_Init( SDL_INIT_EVERYTHING );
    TTF_Init();
    int STATE = 0; //used to manage state
    bool Running = true;
    Window App(640, 480, "Virtual Blob", false);

	while(Running)
	{
		switch(STATE)
		{
			case MENU:
			STATE = UpdateMenu(App);
			break;
			case GAME:
			STATE = UpdateGame(App);
			break;
			case ABOUT:
			STATE = UpdateAbout(App);
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
