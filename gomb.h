#ifndef GOMB_H_INCLUDED
#define GOMB_H_INCLUDED
#include "graphics.hpp"
class gomb {
private:
	int x,y;
	int mx, my;
public:
	void kirajzol();
	gomb(int bex, int bey, int bemx, int bemy);
	virtual void event_handler (genv::event ev);
	bool bennevan(int xpos, int ypos);
};


#endif // GOMB_H_INCLUDED
