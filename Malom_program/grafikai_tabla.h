#ifndef GRAFIKAI_TABLA_H_INCLUDED
#define GRAFIKAI_TABLA_H_INCLUDED
#include "grafikai_mezo.h"
#include "widget.hpp"
#include "vector"

class grafikai_tabla:public widget{
private:
	std::vector<grafikai_mezo > mezok; // lehet hogy pointer lehet hogy nem, meg nem tudom

public:
	void razj();
};


#endif // GRAFIKAI_TABLA_H_INCLUDED
