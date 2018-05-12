#include "menu.h"
#include "graphics.hpp"


using namespace genv;
using namespace std;
	menu::menu( vector<string> elemek) :widget(),elemek(elemek),aktualis(menu::elemek.begin())  {


	};

	menu::menu (int xpos, int ypos, int meretx, int merety, vector<string> elemek ) : widget(xpos,ypos,meretx, merety),elemek(elemek), aktualis(menu::elemek.begin()) {

	};

	void menu::rajzol(int keret,int rx, int ry) {
///cout<<*aktualis;
//cout<<"szilva";

		gout

				<<move_to(rx+keret,ry+keret)
				<<color(255,125,0)
				<<box(mx-keret*2,my-keret*2)
				<<move_to(rx+keret+2,ry+my/2)
				<<color(255,255,255)
				<<text(*aktualis);

		if (selected) {
			menurajzolo();
		}
	};
	string menu::get_ertek(){
		string vissza=*aktualis;
		return vissza;
	};
	void menu::felette(vector<string >::iterator& aktualis ){
        if (aktualis==elemek.end()-1) {
			aktualis=elemek.begin();
        } else {
			aktualis++;
        }
	};
	void menu::alatta(vector<string >::iterator& aktualis){
		if (aktualis==elemek.begin()) {
			aktualis=elemek.end()-1;
        } else {
			aktualis--;
        }

	};
	void menu::menurajzolo(){

		vector<string >::iterator jelenlegi=aktualis;
		for (int i=0; i<=2; i++) {
			alatta(jelenlegi);
		gout
				<<move_to(x,y+(i*-30))
				<<color(255,255,255)
				<<box(mx,-30)
				<<genv::move(-mx+2,30-2)
				<<color(255,125,0)
				<<box(mx-4,-30+4)
				<<genv::move(-mx+4,30-10)
				<<color(255,255,255)
				<<text(*jelenlegi);

		};
		jelenlegi=aktualis;
		for (int i=0; i<=2; i++) {
				felette(jelenlegi);
		gout
				<<move_to(x,y+my+(i*30))
				<<color(255,255,255)
				<<box(mx,+30)
				<<genv::move(-mx+2,-30+2)
				<<color(255,125,0)
				<<box(mx-4,+30-4)
				<<genv::move(-mx+4,-30+17)
				<<color(255,255,255)
				<<text(*jelenlegi);

		};

	};
	void menu::set_ertek (string be ) {
cout<<elemek[elemek.size()-1];
		elemek.push_back(be);
		aktualis=elemek.end()-1;
cout<<elemek[elemek.size()-1];
	};
	void menu::event_handler (genv::event ev){
		widget::event_handler(ev);

			if ( ev.type==ev_mouse ){
				selected=bennevan(ev.pos_x,ev.pos_y);
			};

			if (selected) {
				if (ev.button==btn_wheelup) {
						felette(aktualis);
				};
				if (ev.button==btn_wheeldown) {
						alatta(aktualis);
				};
			};

};
