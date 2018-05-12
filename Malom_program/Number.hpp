#ifndef NUMBER_HPP_INCLUDED
#define NUMBER_HPP_INCLUDED
#include "graphics.hpp"
#include "widget.hpp"
#include <time.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

//#include "gomb.hpp"

const int gmeret=20;
class Number : public widget{
private:

	int ertek;
	int fgomb_x;
	int fgomb_y;
	int lgomb_y;
	int lgomb_x;
	const int fhatar;
	const int ahatar;
//	gomb fel();
//	widget * le=new gomb();

	void rajzol(int keret,int rx, int ry);
	virtual void gomb_kirajzol (int keret);
	virtual void gombbennevan (int xpos, int ypos);
    void gombinic();

	virtual void mozgat(int xpos,int ypos);
	void novel (int xpos, int ypos);
	virtual void ertekup();
	virtual void ertekup(int limit);
	virtual void ertekdown();
	virtual void ertekdown(int limit);


public:
	std::string get_ertek();
	Number(const int,const int);
	Number(int xpos, int ypos,int,int, const int, const int);
	virtual void event_handler (genv::event ev);

	~Number(){
//		delete fel;
//		delete le;
	}
};

#endif // NUMBER_HPP_INCLUDED
