#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "widget.hpp"
#include "graphics.hpp"
#include <time.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

using namespace std;

class menu: public widget
{

private:
	string ertek;
	vector <string> elemek;
	vector<string >::iterator aktualis;
	//bool benne=0;
	void rajzol(int keret,int rx, int ry);
	void felette(vector<string >::iterator&);
	void alatta(vector<string >::iterator&);
	void menurajzolo();

public:
	void set_ertek(string be);
	string get_ertek();
    menu( vector<string> elemek);
    menu(int xpos, int ypos,int,int, vector<string> elemek);
    virtual void event_handler (genv::event ev);
};


#endif // MENU_H_INCLUDED
