#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED
#include "widget.hpp"
#include<vector>
#include "graphics.hpp"
#include "Functorbutton.h"
#include <functional>

class window {
protected:
	int x;
	int y;
	void rajzol();
	std::vector<gomb *> gombok;
	std::vector<widget *> widgets;
	bool nyitva;
public:
	window();
	void event_loop(genv::event ev);
	virtual void event_handler(genv::event ev)=0;
	void bezaras(int);
};



#endif // WINDOW_H_INCLUDED
