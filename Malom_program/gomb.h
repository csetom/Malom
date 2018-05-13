#ifndef GOMB_H_INCLUDED
#define GOMB_H_INCLUDED
#include "graphics.hpp"
class gomb {
private:
	int x,y;
	int mx, my;
	std::string nev;
public:
	void kirajzol();
	gomb(int bex, int bey, int bemx, int bemy,std::string nev);
	virtual void event_handler (genv::event ev);
	bool bennevan(int xpos, int ypos);
};


#endif // GOMB_H_INCLUDED
