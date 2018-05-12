#ifndef SZAMOLOGEP_H_INCLUDED
#define SZAMOLOGEP_H_INCLUDED
#include "window.h"
#include "inputfield.h"

class SzamoloGep :public window {
	protected:
		inputfield * kepernyo;
	public:
		void event_handler(genv::event ev);
		void szamir(std::string szam);
		SzamoloGep (int xpos , int ypos);
		~SzamoloGep();
};



#endif // SZAMOLOGEP_H_INCLUDED
