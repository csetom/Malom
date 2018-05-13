#include "Functorbutton.h"
using namespace std;
using namespace genv;
Functorbutton::Functorbutton(int bex, int bey, int bemx, int bemy, function <void() > func,string benev): gomb(bex,bey,bemx,bemy,benev){
	_function=func;

};
void Functorbutton::event_handler(event ev) {

		if (ev.type==ev_mouse) {
		if (bennevan(ev.pos_x, ev.pos_y) && ev.button==1) {

				action();
		};
	};
};
 void Functorbutton::action(){

	_function();
};
