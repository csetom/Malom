#include "grafikai_jatekter.h"
using namespace std;
grafikai_jatekter::grafikai_jatekter(){
	grafikai_tabla * init_tabla = new grafikai_tabla(50,50);
	tabla=init_tabla;
	init_tabla=NULL;
	delete init_tabla;

};

void grafikai_jatekter::rajzol(){
	tabla->rajzol();
};
void grafikai_jatekter::set_statusz(string be_stat){
	statusz=be_stat;
};

int grafikai_jatekter::bennevan_mezo(int xpos, int ypos){
	///ide kell majd meg;
	return tabla->bennevan_mezo(xpos,ypos);
}
