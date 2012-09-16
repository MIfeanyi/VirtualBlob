#include "Pet.hpp"


Pet::Pet()
{
    Hungry, Dirty = 5; //min 0, max 10
    Weight, Bathroom = 10; // min 0, max 20
    Start = SDL_GetTicks();
}

/*
We need a way for each state to show an animation & then go back to the idle state,
weather that be the pet being hungry, fat, etc.
we need variables to tell if were at an idle animation & a way to switch to others
then switch back

*/

void Pet::Eat()
{
    cout<<"Mr. Blob ate a meal."<<endl;
}

void Pet::Play()
{
    cout<<"Mr. Blob exercised."<<endl;
}

void Pet::Restroom()
{
    cout<<"Mr. Blob used the restroom."<<endl;
}

void Pet::TimeEvent()
{
    //do we need this?
}

void Pet::Update()
{
    //checks time so we can update when the pet needs to use the restroom
    //checks if we need to change the pets mood, health situation, etc.
    switch( (int)(SDL_GetTicks() - Start)  )
    {
        case 10000: //10 seconds
        Hungry--;
        break;
        case 30000: //30 seconds
        Dirty--;
        Bathroom--;
        case 60000: //60 seconds
        Weight--;
        break;
        default:
        break;
    };
}

