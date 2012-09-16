#ifndef PET

#define PET

#include <string>
#include <sstream>
#include <iostream>
#include"Graphics.hpp"
#include"Animation.hpp"

using namespace std;

class Pet
{
	enum Feelings
	{
		HAPPY = 0,
		SAD,
		TIRED,
		NORMAL
	};
	enum Animation
	{
	  EATING = 0,
	  PLAYING,
	  CLEANING,
	  RESTROOM
	};

	public:
	Pet();

	Graphics Gfx;
	void TimeEvent();

    void Update(); //manages the feels & values of the Pet
    //Actions

    void Clean();
    void Eat();
    void Play();
    void Restroom();

    Animation Eating;
    Animation Playing;
    Animation Cleaning;
    Animation UsingRestroom;

	protected:
    Uint32 Start;

	int Hungry,
	Dirty,
	Weight,
	Bathroom;

};


#endif
