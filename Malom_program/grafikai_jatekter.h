#ifndef GRAFIKAI_JATEKTER_H_INCLUDED
#define GRAFIKAI_JATEKTER_H_INCLUDED
#include "grafikai_tabla.h"

class grafikai_jatekter {
private:
	grafikai_tabla * tabla;
	std::string statusz;
public:
	void set_statusz(std::string statusz);
    void rajzol();
    grafikai_jatekter();
	int bennevan_mezo(int xpos, int ypos);
};

#endif // GRAFIKAI_JATEKTER_H_INCLUDED
