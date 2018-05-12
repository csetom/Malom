#ifndef GRAFIKAI_MEZO_H_INCLUDED
#define GRAFIKAI_MEZO_H_INCLUDED
#include "widget.hpp"
#include "graphics.hpp"
class grafikai_mezo : public widget {
	private:
		int szin;
		int r;

	public:
		 void rajzol();
		 void set_szin(int szin);
		 grafikai_mezo(int x, int y);
		 grafikai_mezo(int x, int y , int r);
};


#endif // GRAFIKAI_MEZO_H_INCLUDED
