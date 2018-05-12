#include "grafikai_jatekter.h"

grafikai_jatekter::grafikai_jatekter(){
	grafikai_tabla * init_tabla = new grafikai_tabla(50,50);
	tabla=init_tabla;
	init_tabla=NULL;
	delete init_tabla;

};

void grafikai_jatekter::rajzol(){
	tabla->rajzol();
};
