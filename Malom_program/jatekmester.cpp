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
	selected=-1;
	statusz="Felrak";
	jatekter=init_jatekter;
	init_jatekter=NULL;
	babu_kint=18;
	aktiv_jatekos=1;
	delete init_jatekter;

};

void torolkep(){
	gout<<move_to(0,0)<<color(0,0,0)<<box_to(XX-1,YY-1)<<color(255,255,255);
}

void jatekmester::levetel(event ev) {
	if (ev.button==btn_left) {
		int aktualis=jatekter->bennevan_mezo(ev.pos_x,ev.pos_y);
		if (aktualis>-1) {
			int m_szin=mezok[aktualis]->get_szin();
			if (m_szin>0 && m_szin!=aktiv_jatekos) {
				mezok[aktualis]->set_szin(0);
				jatekter->set_szin(aktualis,0);
				if (babu_kint<=0){
					statusz="Lepes";
				} else {
					statusz="Felrak";
				};
				aktiv_jatekos=aktiv_jatekos%2;
				aktiv_jatekos++;
			};
		};
	};
};

void jatekmester::futtat(){
	indit();
	event ev;
    while(gin >> ev && ev.keycode!=key_escape) {
		jatekter->rajzol();

		if (statusz=="Felrak") {
			felrakas_fazis(ev);
		};
		if (statusz=="Levesz"){
			levetel(ev);
		};
		if (statusz=="Lepes"){
			lepes_fazis(ev);
		};
		gout<<refresh;
	};

};

bool jatekmester::van_szabad_szomszed(int aktualis) {
	vector<int> szomszedok=mezok[aktualis]->get_szomszed();
	for (vector<int>::iterator it=szomszedok.begin(); it!=szomszedok.end(); it++ ){
		if (mezok[*it]->get_szin()==0) {
			return true;
		}
	};
	return false;
};

bool jatekmester::szomszedban_van(int aktualis){
	vector<int> szomszedok=mezok[selected]->get_szomszed();
	for (vector<int>::iterator it=szomszedok.begin(); it!=szomszedok.end(); it++ ){
		if (*it==aktualis) {
			return true;
		}
	};
	return false;
};

void jatekmester::lepes_fazis (event ev) {
	if (ev.button==btn_left) {
		int aktualis=jatekter->bennevan_mezo(ev.pos_x,ev.pos_y);
		if (aktualis>-1) {
			if (mezok[aktualis]->get_szin()==aktiv_jatekos) {
                if (van_szabad_szomszed(aktualis)) {
					jatekter->set_szin(aktualis,3);
					if (selected>=0) {
						jatekter->set_szin(selected,aktiv_jatekos);
					};
					selected=aktualis;
                };
			} else if (mezok[aktualis]->get_szin()==0 && selected>-1) {
				if (szomszedban_van(aktualis)) {
					///lepes!
                    jatekter->set_szin(selected,0);
                    mezok[selected]->set_szin(0);
                    mezok[aktualis]->set_szin(aktiv_jatekos);
                    jatekter->set_szin(aktualis,aktiv_jatekos);
                    selected=-1;
					if (malom_vizsgal(mezok[aktualis]->get_malom_szomszed(),aktualis)){
						statusz="Levesz";
					} else {
						aktiv_jatekos=aktiv_jatekos%2;
						aktiv_jatekos++;
					};
				} else {
					if (selected>=0) {
						jatekter->set_szin(selected,aktiv_jatekos);
						selected=-1;
					};
				};
			} else {
				if (selected>=0) {
					jatekter->set_szin(selected,aktiv_jatekos);
					selected=-1;
				};
			};
		} else {
			if (selected>=0) {
				jatekter->set_szin(selected,aktiv_jatekos);
				selected=-1;
			};
		};
	};
};

void jatekmester::felrakas_fazis(event ev) {

	if (ev.button==btn_left) {
		int aktualis=jatekter->bennevan_mezo(ev.pos_x,ev.pos_y);
		if (aktualis>-1) {
			if (mezok[aktualis]->get_szin()==0) {
				mezok[aktualis]->set_szin(aktiv_jatekos);
				jatekter->set_szin(aktualis,aktiv_jatekos);
				babu_kint--;
				if (malom_vizsgal(mezok[aktualis]->get_malom_szomszed(),aktualis)){
					statusz="Levesz";
				} else {
					aktiv_jatekos=aktiv_jatekos%2;
					aktiv_jatekos++;
				};
			};
		} else {
			selected=-1;
		};
		if (babu_kint<=0 && statusz=="Felrak"){
			statusz="Lepes";
		};
	};
};

bool jatekmester::malom_vizsgal(std::vector<vector<int>> vizsgal,int c) {
	for (int i=0; i<2; i++){
			int a=vizsgal[i][0];
			int b=vizsgal[i][1];
			if (mezok[a]->get_szin()==mezok[b]->get_szin() && mezok[b]->get_szin()==mezok[c]->get_szin()) {
cout<<"MALOM"<<endl;
				return true;
			}
	};
	return false;
};
/*
	event ev;
    while(gin >> ev && ev.keycode!=key_escape) {

    };
*/
