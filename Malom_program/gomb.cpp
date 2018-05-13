#include "gomb.h"
using namespace genv;
using namespace std;
void gomb::kirajzol() {
	gout

		<< move_to(x,y)
		<< color(125,125,125)
		<< box(mx,my)
		<< color(255,255,255)
		<< move_to((x-(nev.length()*5))+mx/2,y+my/2)
		<<text(nev);

}

gomb::gomb (int bex, int bey, int bemx, int bemy,string benev ) : x(bex),y(bey),mx(bemx),my(bemy),nev(benev){
};
bool gomb::bennevan(int xpos, int ypos){
	return (xpos>=x && xpos<=x+mx && ypos>=y && ypos<=y+my);
};
void gomb::event_handler (event ev) {

};
