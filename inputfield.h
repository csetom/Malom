#ifndef INPUTFIELD_H_INCLUDED
#define INPUTFIELD_H_INCLUDED
#include "widget.hpp"
#include "graphics.hpp"
#include <time.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>



class inputfield : public widget
{
private:
	std::string ertek;
	void rajzol(int keret,int rx, int ry);

public:
	void set_ertek(std::string bejovo);
	std::string get_ertek();
	inputfield (int xpos, int ypos,int,int,std::string ertek);
	virtual void event_handler (genv::event ev);
};


#endif // INPUTFIELD_H_INCLUDED
