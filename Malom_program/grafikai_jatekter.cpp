#include "grafikai_jatekter.h"
using namespace std;
using namespace genv;
grafikai_jatekter::grafikai_jatekter(){
	grafikai_tabla * init_tabla = new grafikai_tabla(50,50);
	inputfield * init_kiir=new inputfield(800,20,100,50," ");
	//kiirasok.push_back(init_kiir);
	tabla=init_tabla;
	init_tabla=NULL;
	init_kiir=NULL;
	delete init_kiir;
	delete init_tabla;

};
void grafikai_jatekter::set_gombok(vector<gomb * > be){
	gombok=be;
};

void grafikai_jatekter::menu_rajzol(){

		gombok[0]->kirajzol();

};

void grafikai_jatekter::nyertes(int ki){
	gout<<move_to(XX/2+100,YY/2)
		<<color(255,125,0)
		<<text("A nyertes: ");

	if (ki==1) {
		gout<<color(255,0,255);
		gout<<text("A piros ");
	} else {
		gout<<color(255,255,0);
		gout<<text("A sárga ");
	};
	gout <<color(255,125,0)
		 <<text("játékos!")
		 <<move_to(XX/2+100,YY/2+20)
		 <<color(255,0,0)
		 <<text("Kattints a ")
		 <<color(0,255,0)
		 <<text("Restart ")
		 <<color(255,0,0)
		 <<text("gombra!");


}

void grafikai_jatekter::rajzol(){
	tabla->rajzol();
	for (int i=0; i<kiirasok.size(); i++){
		kiirasok[i]->rajzol();
	}
	for (int i=1; i<gombok.size(); i++){
		gombok[1]->kirajzol();
	};

};
void grafikai_jatekter::set_statusz(string be_stat){
	statusz=be_stat;
};

int grafikai_jatekter::bennevan_mezo(int xpos, int ypos){
	///ide kell majd meg;
	return tabla->bennevan_mezo(xpos,ypos);
}
void grafikai_jatekter::set_szin(int aktualis, int aktiv_jatekos) {
	tabla->set_szin(aktualis,aktiv_jatekos);

};
