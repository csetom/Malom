#include "gomb.h"
using namespace genv;
using namespace std;
void gomb::kirajzol() {
	gout
		<< move_to(x,y)
		<< color(255,255,255)
		<< box(mx,my);
}

gomb::gomb (int bex, int bey, int bemx, int bemy ) : x(bex),y(bey),mx(bemx),my(bemy){
};
bool gomb::bennevan(int xpos, int ypos){
	return (xpos>=x && xpos<=x+mx && ypos>=y && ypos<=y+my);
};
void gomb::event_handler (event ev) {

};
