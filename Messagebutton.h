#ifndef MESSAGEBUTTON_H_INCLUDED
#define MESSAGEBUTTON_H_INCLUDED
#include "gomb.h"
#include "window.h"


class window;
class Messagebutton:public gomb {
public:
	std::string azonosito;
	window * parent;
	Messagebutton (int bex, int bey, int bemx, int bemy,std::string mess, window * win);
	void action();
	void event_handler( genv::event ev);
};


#endif // MESSAGEBUTTON_H_INCLUDED
