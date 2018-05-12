#include "jatekmester.h"

using namespace std;
using namespace genv;


void jatekmester::logikai_mezo_init() {
	logikai_mezo * init_mezo=new logikai_mezo({1,9},{{1,2},{9,21}}); //0
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({0,2,4},{{0,2},{4,7}});//1
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({1,14},{{0,1},{14,23}});//2
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({4,10},{{4,5},{10,18}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({3,5,1,7},{{3,5},{1,7}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({4,13},{{13,20},{4,3}});//5
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({7,11},{{7,8},{11,15}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({6,4,8},{{6,8},{4,1}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({12,7},{{12,17},{6,7}});//8
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({0,21,10},{{10,11},{0,21}});//9
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({9,11,3,18},{{9,11},{3,18}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({6,10,15},{{6,15},{9,10}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({8,17,13},{{8,17},{13,14}});//12
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({12,14,5,20},{{12,14},{5,20}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({2,23},{{12,13},{5,20}});//14
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({11,16},{{6,11},{16,17}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({15,17,19},{{15,17},{19,22}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({12,16},{{15,16},{8,12}});//17
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({10,19},{{10,3},{19,20}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({16,22,18,20},{{16,22},{18,20}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({13,19},{{13,5},{18,19}});//20
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({9,22},{{9,0},{22,23}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({21,23,19},{{21,23},{16,19}});
	mezok.push_back(init_mezo);
	init_mezo=new logikai_mezo({22,14},{{21,22},{14,2}});//23
	mezok.push_back(init_mezo);
};

void jatekmester::indit(){
	grafikai_jatekter * init_jatekter = new grafikai_jatekter();
	logikai_mezo_init();
	jatekter=init_jatekter;
	init_jatekter=NULL;
	babu_kint=18;
	aktiv_jatekos=1;
	delete init_jatekter;

};

void torolkep(){
	gout<<move_to(0,0)<<color(0,0,0)<<box_to(XX-1,YY-1)<<color(255,255,255);
}

void jatekmester::futtat(){
	indit();
	event ev;
    while(gin >> ev && ev.keycode!=key_escape) {
		jatekter->rajzol();
		gout<<refresh;
		if (babu_kint>0) {
            if (ev.button==btn_left) {
				cout<<jatekter->bennevan_mezo(ev.pos_x,ev.pos_y)<<endl;
            };
			felrakas_fazis();
		} else {
		};

	};

};
void jatekmester::felrakas_fazis() {
	jatekter->set_statusz("felrakas");
	for (int i=1;i<=9;i++){
		for (int jatekos=1; jatekos<=2; jatekos++){

		}
	}
};
/*
	event ev;
    while(gin >> ev && ev.keycode!=key_escape) {

    };
*/
