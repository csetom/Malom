#ifndef JATEKMESTER_H_INCLUDED
#define JATEKMESTER_H_INCLUDED
#include "logikai_mezo.h"
#include "grafikai_jatekter.h"
#include <vector>

class jatekmester {
private:
	std::vector<logikai_mezo *> mezok;
	grafikai_jatekter * jatekter;
	int aktiv_jatekos;
	int babu_kint;
	void logikai_mezo_init();
	void jatekter_rajzol();
	void menu_fazis();
	void felrakas_fazis();
	void lepes_fazis(int szin);
	void ugras_fazis(int szin);
	void malom_vizsgal(int szin);
	void levetel(int szin);
	void indit();

public:

	void futtat();
};

#endif // JATEKMESTER_H_INCLUDED
