#ifndef JATEKMESTER_H_INCLUDED
#define JATEKMESTER_H_INCLUDED
#include "logikai_mezo.h"
#include "grafikai_jatekter.h"
#include <vector>
#include "Functorbutton.h"


class jatekmester {
private:
	std::string statusz;
	std::vector<logikai_mezo *> mezok;
	std::vector<bool> leveheto;
	std::vector<gomb *> gombok;
	grafikai_jatekter * jatekter;
	int aktiv_jatekos;
	int babu_kint;
	int selected;
	std::vector<int> jatekos_babu_db;
	void logikai_mezo_init();
	void jatekter_rajzol();
	void menu_fazis();
	void felrakas_fazis(genv::event ev);
	void lepes_fazis(genv::event ev);
	void ugras_fazis(int szin);
	bool malom_vizsgal(std::vector<std::vector<int>> vizsgalandok,int aktualis);
	void levetel(genv::event ev);
	void indit();
	void levesz_statusz_allit();
	bool van_szabad_szomszed(int aktualis);
	bool szomszedban_van(int aktualis);
	bool tud_lepni();
	void levehetoseg_vizsgalat();
    void initial();
    void nyertes();
public:

	void futtat();
};

#endif // JATEKMESTER_H_INCLUDED
