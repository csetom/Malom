#include "grafikai_mezo.h"
#include <ostream>
using namespace std;
using namespace genv;
grafikai_mezo::grafikai_mezo(int xpos, int ypos):grafikai_mezo(xpos,ypos,12) {
};

grafikai_mezo::grafikai_mezo(int xpos, int ypos, int sugar):widget(xpos*5,ypos*5 ),szin(0),r(sugar){
};

bool grafikai_mezo::bennevan(int xpos, int ypos){
	return ((xpos-x)*(xpos-x)+(ypos-y)*(ypos-y)<r*r);
};

void grafikai_mezo::rajzol(){
//cout<<x<<" "<<y<<endl;
	if (szin==0){
		gout<<color(255,255,255);
	} else if (szin==1){
		gout<<color(255,0,255);
	} else if (szin==2){
		gout<<color(255,255,0);
	} else if (szin==3) {
		gout<<color(0,255,255);
	};
	for (int i=x-r; i<=x+r; i++) {
		for (int j=y-r; j<=y+r; j++) {
			if ((i-x)*(i-x)+(j-y)*(j-y)<r*r) {
				gout<<move_to(i,j)
					<<dot;

			}
		}
	}
};

void grafikai_mezo::set_szin(int s_szin){
	szin=s_szin;
};
