#ifndef GRAFIKAI_TABLA_H_INCLUDED
#define GRAFIKAI_TABLA_H_INCLUDED
#include "grafikai_mezo.h"
#include "widget.hpp"
#include "vector"

class grafikai_tabla:public widget{
private:
	std::vector<grafikai_mezo *> mezok; // lehet hogy pointer lehet hogy nem, meg nem tudom

public:
	void rajzol();
	grafikai_tabla(int x, int y);
	int bennevan_mezo(int xpos, int ypos);
	void set_szin(int aktualis, int aktiv_jatekos);
};


#endif // GRAFIKAI_TABLA_H_INCLUDED
