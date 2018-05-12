#ifndef ADATBAZIS_H_INCLUDED
#define ADATBAZIS_H_INCLUDED
#include "window.h"
#include "inputfield.h"
#include "menu.h"
#include "Number.hpp"

class adatbazis :public window{
	protected:
		menu * kivalaszto;
		Number * szamlalo;
		inputfield * blabla;
		void berako ();
	public:
		void event_handler(genv::event ev);
		adatbazis(menu *,Number *,inputfield* );
		adatbazis (int xpos , int ypos);
		~adatbazis();
};


#endif // ADATBAZIS_H_INCLUDED
