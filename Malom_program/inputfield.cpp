#include "inputfield.h"
#include "graphics.hpp"

using namespace std;
using namespace genv;

inputfield::inputfield(int xpos, int ypos,int mx,int my,string ertek) :widget(xpos,ypos,mx,my),ertek(ertek){};


void inputfield::rajzol(int keret,int rx, int ry) {
//
	////	cout<<"szilva";
		gout

				<<move_to(rx+keret,ry+keret)
				<<color(255,125,0)
				<<box(mx-keret*2,my-keret*2)
				<<move_to(rx+keret+2,ry+my/2)
				<<color(255,255,255)
				<<text(ertek);
};
string inputfield::get_ertek() {
	return ertek;
};

void inputfield::set_ertek(string bejovo) {
	ertek=bejovo;
}
void inputfield::event_handler(event ev){
	widget::event_handler(ev);
};
