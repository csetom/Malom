#include "window.h"
#include <ostream>

using namespace genv;
using namespace std;
window::window(){
		std::function <void()> bezaro=[&]() { bezaras(42);};
		gomb * bezar=new Functorbutton (50,50,50,50,bezaro);
		gombok.push_back(bezar);
		bezar=NULL;
		delete bezar;
};


void torolkep(){
	gout<<move_to(0,0)<<color(0,0,0)<<box_to(XX-1,YY-1)<<color(255,255,255);
}

void window::event_loop(event ev){
	nyitva=true;
	while(gin >> ev && ev.keycode!=key_escape && nyitva) {
		torolkep();
		event_handler(ev);
		for (int i=0; i<widgets.size(); i++ ){
			widget * aktualis=widgets[i];
			if (ev.type==ev_mouse && ev.button!=0){
				aktualis->selected_beallit(aktualis->bennevan(ev.pos_x,ev.pos_y));
			}

			aktualis->event_handler(ev);
			aktualis=NULL;
			delete aktualis;
		};
		for (int j=0; j<gombok.size(); j++){
			gomb * button=gombok[j];
			button->kirajzol();
			button->event_handler(ev);
		}
		rajzol();
		gout<<refresh;
	};
};

void window::rajzol() {
/*	for (int i=0; i<widgets.size(); i++ ){
		widget * aktualis=widgets[i];
		if (aktualis->selected) {
			aktualis->kivalrajz();
		} else {
			aktualis->rajzol();
		}
		aktualis=NULL;
		delete aktualis;
	};
*/
};

 void window::bezaras(int x) {
	nyitva=false;
};





/*
void window::mozgat(int xpos, int ypos) {
	for (int i=0; i<widgets.size(); i++ ){
		widget * aktualis;
		aktualis->mozgat(xpos,ypos);
		aktualis=NULL;
		delete aktualis;
	};

};
*/
