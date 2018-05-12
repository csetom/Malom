#include "jatekmester.h"

using namespace std;
using namespace genv;


void jatekmester::indit(){
	grafikai_jatekter * init_jatekter = new grafikai_jatekter();
	jatekter=init_jatekter;
	init_jatekter=NULL;
	delete init_jatekter;
	event ev;
    while(gin >> ev && ev.keycode!=key_escape) {
		jatekter->rajzol();
		gout<<refresh;
    };
};

/*
	event ev;
    while(gin >> ev && ev.keycode!=key_escape) {

    };
*/
