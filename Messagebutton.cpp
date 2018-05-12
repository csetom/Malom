#include "Messagebutton.h"
using namespace std;
using namespace genv;
Messagebutton::Messagebutton(int bex, int bey, int bemx, int bemy, string mess, window * win): gomb(bex,bey,bemx,bemy),azonosito(mess),parent(win){
win=NULL;
delete win;
};
void Messagebutton::event_handler(event ev) {

		if (ev.type==ev_mouse) {
		if (bennevan(ev.pos_x, ev.pos_y) && ev.button==1) {

				action();
		};
	};
};
 void Messagebutton::action(){

	//parent->gomb_event(azonosito);
};
