#include "graphics.hpp"
#include <time.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

#include "widget.hpp"
#include "Number.hpp"
#include "menu.h"
#include "fstream"

#include "inputfield.h"
#include "adatbazis.h"
#include "SzamoloGep.h"
using namespace std;

using namespace genv;





void mentes(vector<widget *> mezok){
	ofstream fout ("mentett.txt");
	if (fout.is_open())
	{
		for (int i=0; i<mezok.size();i++) {
			widget * elem=mezok[i];
			cout<<elem->get_nev()<<": "<<elem->get_ertek()<<endl;
			fout<<elem->get_nev()<<": "<<elem->get_ertek()<<endl;
		};
	};
	fout.close();
}

int main()
{
	srand(time(NULL));
	event ev;
	gout.open(XX,YY);
//	vector<window *> mezok;
//	vector<string> elemek1 ={"alma","korte","szilva","Zokni", "Sajt", "csipesz" };
	//vector<string> elemek2 ={"MAX", "PONT" };

	gin.timer(30);


	window * ablak= new SzamoloGep(100, 100);


			ablak->event_loop(ev);


	delete ablak;

    return 0;
};

/**
	Leiras:
		A feladatnak eleget teve a gombokkal lehet novelni a szamlalot a hatarok kozott.
		A gorgovel lehet valasztani a menuk kozott.
		A balegergomb nyomvatartasaval lehet mozgatni a widgeteket.
		A jobbegergomb nyomvatartasaval lehet meretezni oket.
		Az 's' betu megnyomasaval mente az ertekeket egy mentett.txt nevu file-ba.

**/
