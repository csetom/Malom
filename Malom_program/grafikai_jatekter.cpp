#include "grafikai_jatekter.h"
using namespace std;
grafikai_jatekter::grafikai_jatekter(){
	grafikai_tabla * init_tabla = new grafikai_tabla(50,50);
	inputfield * init_kiir=new inputfield(800,20,100,50," ");
	kiirasok.push_back(init_kiir);
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
	for (int i=0; i<gombok.size(); i++){
		gombok[i]->kirajzol();
	}

};

void grafikai_jatekter::rajzol(){
	tabla->rajzol();
	for (int i=0; i<kiirasok.size(); i++){
		kiirasok[i]->rajzol();
	}
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
