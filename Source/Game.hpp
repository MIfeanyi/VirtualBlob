#ifndef GAME_H
#define GAME_H



//Easy-SDL
#include "Window.hpp"
#include "Font.hpp"
#include "String.hpp"
#include "Audio.hpp"
#include "System.hpp"


#include "Pet.hpp"


enum STATE_MACHINE
{
    MENU = 0,
    GAME,
    ABOUT,
    EXIT = -1
};

int UpdateMenu(Window &App)
{
    App.FPS =60;
    Uint8 *Key;
    SDL_Event Event;
    bool Running = true;

    Font DefaultFont;
    DefaultFont.font =  TTF_OpenFont("Data/PressStart2P.ttf",8);

    String Menu;
    Menu.ChangeColor(255,255,255);
    Menu.ChangeText("Press SPACE to Start the game. ESC to exit. Press F1 to find out more Info.");

    while(Running)
    {
        Key = SDL_GetKeyState(NULL);

        while( SDL_PollEvent(&Event) )
        {
            if(Event.type == SDL_QUIT)
            {
                Running = false;
            }
        }

        if( Key[SDLK_ESCAPE])
        {
            return EXIT;
        }
        if( Key[SDLK_SPACE])
        {
            return GAME;
        }
        if(Key[SDLK_F1])
        {
            return ABOUT;
        }

        App.LimitFramerate();
        App.DrawText(Menu, DefaultFont, 20, 400);
        App.Flip();
        App.Clear(255,100,100);
    }

    return EXIT;

}

int UpdateAbout(Window &App)
{
    App.FPS =60;
    Uint8 *Key;
    SDL_Event Event;
    bool Running = true;

    Font DefaultFont;
    DefaultFont.font =  TTF_OpenFont("Data/PressStart2P.ttf",8);

    String About;
    About.ChangeText("Virtual Blob  Copyright (C) 2012  Michael Redford");
    About.ChangeColor(255,255,255);

    while(Running)
    {
        while( SDL_PollEvent(&Event) )
        {
            if(Event.type == SDL_QUIT)
            {
                Running = false;
            }
        }
        if(Key[SDLK_ESCAPE])
        {
            return MENU;
        }
        App.LimitFramerate();
        App.DrawText(About, DefaultFont, 60, 400);
        App.Flip();
        App.Clear(255,100,100);
    }

    return EXIT;
}

int UpdateGame(Window &App)
{
    App.FPS =60;
    Uint8 *Key;
    SDL_Event Event;
    bool Running = true;


    KEYS Action,
    Back;
    Action = System::BindKey();

    Pet VirtualBlob;
    VirtualBlob.Eating.Gfx.LoadImage("Data/Eat.png");

    //VirtualBlob.
    while(Running)
    {
        while( SDL_PollEvent(&Event) )
        {
            if(Event.type == SDL_QUIT)
            {
                Running = false;
            }
        }
        if(Key[SDLK_ESCAPE])
        {
            return MENU;
        }

        if(Key[Action])
        {
            cout<<"Action Key Hit"<<endl;
        }


        App.LimitFramerate();

        App.Flip();
        App.Clear();
    }

    return EXIT;
}

#endif
