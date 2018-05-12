#include "adatbazis.h"
#include <ostream>
using namespace genv;
using namespace std;
adatbazis::adatbazis(menu * a1, Number * a2, inputfield * a3):window(),kivalaszto(a1),szamlalo(a2),blabla(a3){
	widgets.push_back(a1);
	widgets.push_back(a2);
	widgets.push_back(a3);

	std::function <void()> fugveny=[&]() { berako();};
	gomb * berak=new Functorbutton (200,50,50,50,fugveny);
	gombok.push_back(berak);
	berak=NULL;
	delete berak;
};
adatbazis::adatbazis(int xpos, int ypos):window(){

	x=xpos;
	y=ypos;
	menu * a1=new menu(x+100,y+100,100,40,{"cica","kutya","almafa","Jani"});
	kivalaszto=a1;
	widgets.push_back(kivalaszto);

	Number * a2=new Number(x+300,y+100,100,40,900,0);
	szamlalo=a2;
	widgets.push_back(szamlalo);

	inputfield * a3=new inputfield(x+100,y+300,100,40,"Haliho");
	blabla=a3;
	widgets.push_back(blabla);
	std::function <void()> fugveny=[&]() { berako();};
	gomb * berak=new Functorbutton (200,50,50,50,fugveny);
	gombok.push_back(berak);
	berak=NULL;
	delete berak;
	a1=NULL;
	delete a1;
	a2=NULL;
	delete a2;
	a3=NULL;
	delete a3;
}
void adatbazis::berako(){
	string be=blabla->get_ertek();
	kivalaszto->set_ertek(be);
}
void adatbazis::event_handler(event ev){
	//std::cout<<widgets[1]->get_ertek();

	//event_loop(ev);

	//cout<<"hiba";
};



adatbazis::~adatbazis(){
	delete kivalaszto;
	delete szamlalo;
	delete blabla;
}
