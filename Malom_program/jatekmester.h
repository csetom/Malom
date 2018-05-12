#ifndef JATEKMESTER_H_INCLUDED
#define JATEKMESTER_H_INCLUDED
#include "logikai_mezo.h"
#include "grafikai_jatekter.h"
#include <vector>

class jatekmester {
private:
	std::vector<logikai_mezo *> mezok;
	grafikai_jatekter * jatekter;
	void jatekter_rajzol();
	/**
		fazisok kezelese!
	*/

public:
	void event_loop (genv::event ev) {
        ///nem biztos hogy igy lesz
	};
};

#endif // JATEKMESTER_H_INCLUDED
