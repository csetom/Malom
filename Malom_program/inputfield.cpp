#include "inputfield.h"
#include "graphics.hpp"

using namespace std;
using namespace genv;

inputfield::inputfield(int xpos, int ypos,int mx,int my,string ertek) :widget(xpos,ypos,mx,my),ertek(ertek){};


void inputfield::rajzol() {
	int rx=x;
	int ry=y;
	int keret=2;
	if (x<0) { rx=0;};
	if (y<0) {ry=0;};
	if (x+mx>XX) {rx=XX-mx;};
	if (y+my>YY) {ry=YY-my;};
	gout<<move_to(rx,ry)
		<<color(255,255,255)
		<<box(mx,my);
	gout

			<<move_to(rx+keret,ry+keret)
			<<color(0,0,0)
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
