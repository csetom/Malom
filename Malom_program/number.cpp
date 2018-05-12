#include "Number.hpp"



using namespace genv;
using namespace std;



void Number::rajzol(int keret,int rx, int ry) {
	 	string szoveg=to_string(ertek);

		gout
				<<move_to(rx+keret,ry+keret)
				<<color(255,125,0)
				<<box(mx-keret*2,my-keret*2)
				<<move_to(rx+mx/2,ry+my/2)
				<<color(255,255,255)
				<<text(szoveg);
		Number::gomb_kirajzol(keret);

	 };
string Number::get_ertek(){
		string vissza=to_string(ertek);
		return vissza;
	}
void Number::gombbennevan (int xpos, int ypos){

	if (xpos>=fgomb_x && xpos<=fgomb_x+gmeret && ypos>=fgomb_y && ypos<=y+gmeret){

		Number::ertekup();
	};
	if (xpos>=lgomb_x && xpos<=lgomb_x+gmeret && ypos>=lgomb_y && ypos<=lgomb_y+gmeret){
		Number::ertekdown();
		cout<<"itt van";
	};

};

	void Number::gomb_kirajzol(int keret) {
		gout<< move_to(fgomb_x+keret,fgomb_y+keret)
		//	<<color(255,255,255)
		//	<<box (20+keret,20+keret)
			<<move_to(fgomb_x,fgomb_y+keret)
			<<color(102,102,153)
			<<box(gmeret-keret,gmeret-keret)
			<<move_to(fgomb_x+(gmeret/3),fgomb_y+(gmeret/1.5))
			<<color(255,255,255)
			<<text("+")
			<<move_to(lgomb_x,lgomb_y)
			<<color(102,102,153)
			<<box(gmeret-keret,gmeret-keret)
			<<color(255,255,255)
			<<move_to(lgomb_x+(gmeret/3),lgomb_y+(gmeret/1.5))
		//	<<move_to(lgomb_x,lgomb_y)
			<<text("-");

	};
	void Number::mozgat(int xpos,int ypos) {
		widget::mozgat(xpos,ypos);
		gombinic();

	}
	void Number::novel (int xpos,int ypos){
		widget::novel(xpos,ypos);
		gombinic();
	};
	void Number::gombinic(){
		fgomb_x=x+mx-gmeret;
		fgomb_y=y;
		lgomb_x=x+mx-gmeret;
		lgomb_y=y+my-gmeret;
	};

	Number::Number(const int fhatar, const int ahatar) : fhatar(fhatar),ahatar(ahatar),widget(),ertek(0) {
		gombinic();
//		Number::hatar=20;
	 };
	 Number::Number(int xpos, int ypos,int meretx ,int merety, const int fhatar,const int ahatar):widget(xpos,ypos,meretx, merety),fhatar(fhatar),ahatar(ahatar),ertek(ahatar) {
		gombinic();
//	 	gomb *h=new gomb (gx,gy);
//cout<<"eljutottam";
//	 	fel.pozallit(gx,gy);
	 };

	void Number::ertekup() {
		if (ertek+1<=fhatar) {
			ertek++;
		};
	};
	void Number::ertekup(int limit) {
		if (ertek+limit<=fhatar) {
			ertek+=limit;
		} else { ertek=fhatar;};
	};
	void Number::ertekdown(){
		if (ertek-1>=ahatar) {
			ertek--;
		};
	};
	void Number::ertekdown(int limit) {
		if (ertek-limit>=ahatar) {
			ertek-=limit;
		} else { ertek=ahatar;};
	};
	void Number::event_handler (genv::event ev){
		widget::event_handler(ev);
		if (ev.button==btn_left){
		//	selected_beallit(bennevan(ev.pos_x,ev.pos_y));
			gombbennevan(ev.pos_x,ev.pos_y);
		}
		if (selected){
			if (ev.keycode==key_up) {
				ertekup();
			};
			if (ev.keycode==key_pgup) {
				ertekup(10);
			};
			if (ev.keycode==key_down) {
				ertekdown();
			};
			if (ev.keycode==key_pgdn) {
				ertekdown(10);
			};
		};

	}

