#ifndef GRAFIKAI_MEZO_H_INCLUDED
#define GRAFIKAI_MEZO_H_INCLUDED
#include "widget.hpp"
#include "graphics.hpp"
class grafikai_mezo:public widget {
	private:
		int szin;


	public:
		 void rajzol();
		 void set_szin(int szin);
};


#endif // GRAFIKAI_MEZO_H_INCLUDED
