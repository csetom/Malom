#ifndef WIDGET_HPP_INCLUDED
#define WIDGET_HPP_INCLUDED
#include <time.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

#include "graphics.hpp"

const int XX=1024;
const int YY=768;

class widget {
protected:
		int x,y;
		int ex,ey;
        int mx,my;
        int ertek;
		std::string nev;
      //  int ertek; // ki

		virtual void rajzol(int keret,int rx, int ry)=0;
		virtual void meretallit (int xpos, int ypos);
		virtual void novel (int xpos, int ypos);



public:
	bool selected=0;
	virtual void mozgat(int xpos, int ypos);
	void selected_beallit (bool be);
	void kirajzol();
	void set_name(std::string);
	std::string  get_nev();
	virtual std::string get_ertek();
	bool bennevan(int xpos,int ypos);
		//void ertekup();
		//void ertekdown();
	void kivalrajz();
	virtual void event_handler (genv::event ev);
	widget ();
	widget (int xpos, int ypos, int ,int );
};



#endif // WIDGET_HPP_INCLUDED
