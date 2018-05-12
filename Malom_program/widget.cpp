

#include "widget.hpp"

using namespace std;
using namespace genv;

bool jegernyomva=false;
bool begernyomva=false;

widget::widget () {
		x=rand()%(XX-40);
		y=rand()%(YY-40);
		mx=rand()%60+60;
		my=rand()%60+60;
		ex=x;
		ey=y;
/*		if (x+mx>=XX){
			mx=XX-x;
		};
		if (y+my>=YY) {
			my=YY-y;
		};*/
		if (x<0) { x=0;};
		if (y<0) {y=0;};
		if (x+mx>XX) {x=XX-mx;};
		if (y+my>YY) { y=YY-my;};


	};
	void widget::set_name(string name){
		nev=name;
	};
	string widget::get_ertek(){
		string vissza=to_string(ertek);
		return vissza;
	}
	string widget::get_nev(){
		return nev;
	};
		//void widget::rajzol(int keret,int rx, int ry)=0;



		void widget::meretallit (int xpos, int ypos) {
			mx+=xpos-ex;
			my+=ypos-ey;
			//if (x<=1) { x=1;};
			//if (y<=1) {y=1;};
			if (x+mx>=XX) {mx=XX-x;};
			if (y+my>=YY) {my=YY-y;};

			ex=xpos;
			ey=ypos;
		};

		void widget::kirajzol(){
			//if (x+mx>XX) {hx=XX-x;}
			//if (y+my>YY) {hy=YY-y;}
			int rx=x;
			int ry=y;
			if (x<0) { rx=0;};
			if (y<0) {ry=0;};
			if (x+mx>XX) {rx=XX-mx;};
			if (y+my>YY) {ry=YY-my;};
			gout<<move_to(rx,ry)
				<<color(255,255,255)
				<<box(mx,my);
			rajzol(2,rx,ry);
	/*		gout<<move_to(x,y)
				<<color(255,255,255)
				<<box(hx,hy)
				<<move_to(x+2,y+2)
				<<color(255,125,0)
				<<box(hx-4,hy-4)
				<<move_to(x+mx/2,y+my/2)
				<<color(255,255,255)
//				<<dot
				<<text("cica");
*/

		};
		bool widget::bennevan(int xpos,int ypos) {
			return (xpos>=x && xpos<=x+mx && ypos>=y && ypos<=y+my);
		};
		void widget::kivalrajz() {
			int rx=x;
			int ry=y;
			if (x<0) { rx=0;};
			if (y<0) {ry=0;};
			if (x+mx>XX) {rx=XX-mx;};
			if (y+my>YY) {ry=YY-my;};

			gout<<move_to(rx,ry)
				<<color(255,255,255)
				<<box(mx,my);
			rajzol(4,rx,ry);

		};
	//	void widget::ertekup(){
	//	};
	//	void widget::ertekdown(){
	//	};

	 void widget::event_handler (genv::event ev){
	 };
	void widget::selected_beallit (bool be){
		selected=be;
	};
	widget::widget (int xpos, int ypos,int meretx, int merety) {
		x=xpos;
		y=ypos;
		mx=meretx;
		my=merety;
		ex=x;
		ey=y;
/*		if (x+mx>=XX){
			mx=XX-x;
		};
		if (y+my>=YY) {
			my=YY-y;
		};*/
		if (x<0) { x=0;};
		if (y<0) {y=0;};
		if (x+mx>XX) {x=XX-mx;};
		if (y+my>YY) { y=YY-my;};
	};
