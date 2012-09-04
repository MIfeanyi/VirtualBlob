#ifndef PET

#define PET

class Pet
{
	enum Feelings
	{
		HAPPY = 0,
		SAD,
		TIRED,
		Normal
	};
	
	public:
	
	void TimeEvent();
	
	protected:
	
	int Hungry,
	Clean,
	Exercise,
	Bathroom;
	
};


#endif
