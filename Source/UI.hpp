
#ifndef UI_H

#define UI_H

#include<string>

#include"Button.hpp"

using namespace std;

class UI
{
	public:
	virtual ~UI();
	
	void Add();
	int GetPressed();
	protected:
	//Button *Buttons;
	
};

#endif
