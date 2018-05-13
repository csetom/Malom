#ifndef GRAFIKAI_JATEKTER_H_INCLUDED
#define GRAFIKAI_JATEKTER_H_INCLUDED
#include "grafikai_tabla.h"
#include "inputfield.h"
#include "Functorbutton.h"

class grafikai_jatekter {
private:
	grafikai_tabla * tabla;
	std::string statusz;
	std::vector<inputfield *> kiirasok;
	std::vector<gomb *> gombok;
public:
	void set_statusz(std::string statusz);
    void rajzol();
    grafikai_jatekter();
	int bennevan_mezo(int xpos, int ypos);
	void set_szin(int aktualis, int aktiv_jatekos);
	void menu_rajzol();
	void set_gombok(std::vector<gomb * > be);
	void nyertes(int kicsoda);
};

#endif // GRAFIKAI_JATEKTER_H_INCLUDED
