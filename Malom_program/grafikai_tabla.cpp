#include "grafikai_tabla.h"
#include <ostream>
using namespace std;
using namespace genv;

grafikai_tabla::grafikai_tabla(int x, int y):widget(x,y){

	grafikai_mezo * init_mezo=new grafikai_mezo(x+0,y+0);

	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+30,y+0);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+60,y+0);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+10,y+10);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+30,y+10);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+50,y+10);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+20,y+20);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+30,y+20);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+40,y+20);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+0,y+30);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+10,y+30);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+20,y+30);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+40,y+30);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+50,y+30);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+60,y+30);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+20,y+40);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+30,y+40);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+40,y+40);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+10,y+50);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+30,y+50);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+50,y+50);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+0,y+60);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+30,y+60);
	mezok.push_back(init_mezo);
	init_mezo=new grafikai_mezo(x+60,y+60);
	mezok.push_back(init_mezo);
	init_mezo=NULL;
	delete init_mezo;
};

void grafikai_tabla::rajzol(){
	int c=5;

	gout<< color(255,255,255)
		<<move_to(x*c,y*c)
		<<line(60*c,(0)*c)
		<<line(0*c,60*c)
		<<line(-60*c,0)
		<<line(0,-60*c)
		<<move_to((x+10)*c,(y+10)*c)
		<<line(40*c,0)
		<<line(0,40*c)
		<<line(-40*c,0)
		<<line(0,-40*c)
		<<move_to((x+20)*c,(y+20)*c)
		<<line(20*c,0)
		<<line(0,20*c)
		<<line(-20*c,0)
		<<line(0,-20*c)
		<<move_to(x*c,(y+30)*c)
		<<line(20*c,0)
		<<move_to((x+40)*c,(y+30)*c)
		<<line(20*c,0)
		<<move_to((x+30)*c,(y+0)*c)
		<<line(0,20*c)
		<<move_to((x+30)*c,(y+40)*c)
		<<line(0,20*c);


	for (vector<grafikai_mezo *>::iterator it=mezok.begin(); it!=mezok.end();it++){
		(*it)->rajzol();
	}
};

int grafikai_tabla::bennevan_mezo(int xpos, int ypos){
	for (int i=0; i<mezok.size(); i++){
        grafikai_mezo * akt=mezok[i];
        if (akt->bennevan(xpos,ypos)) {
			return (i);
        } else {
			akt->selected=false;
        };
	};
	return -1;
};

void grafikai_tabla::set_szin(int aktualis, int aktiv_jatekos){
	mezok[aktualis]->set_szin(aktiv_jatekos);
}



