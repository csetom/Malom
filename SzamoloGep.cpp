#include "SzamoloGep.h"
#include <ostream>
#include <string>
#include <functional>
using namespace genv;
using namespace std;


SzamoloGep::SzamoloGep(int xpos, int ypos):window(){

	x=xpos;
	y=ypos;
	inputfield * a3=new inputfield(x+100,y+300,100,40," ");
	kepernyo=a3;
	widgets.push_back(kepernyo);
	for (int i=0; i<=4; i++){
		int x=i;
		string szam=to_string(x);

		std::function <void()> fugveny=[&]() { szamir(szam);};
		gomb * berak=new Functorbutton (200,i*60,50,50,fugveny);
		gombok.push_back(berak);
		berak=NULL;
		delete berak;
	}


	a3=NULL;
	delete a3;
};

void SzamoloGep::szamir(string szam){

	string vissza_szam=kepernyo->get_ertek();

	kepernyo->set_ertek(szam);
};

void SzamoloGep::event_handler(event ev){
};

SzamoloGep::~SzamoloGep(){
	delete kepernyo;
}
