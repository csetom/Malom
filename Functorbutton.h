#ifndef FUNCTORBUTTON_H_INCLUDED
#define FUNCTORBUTTON_H_INCLUDED
#include "gomb.h"
#include "window.h"
#include <functional>

//class window;
class Functorbutton:public gomb {
public:
	std::function <void () > _function;
	//window * parent;
	Functorbutton (int bex, int bey, int bemx, int bemy,std::function <void ()> func);
	void action();
	void event_handler( genv::event ev);
};




#endif // FUNCTORBUTTON_H_INCLUDED
