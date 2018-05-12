#include "graphics.hpp"
#include <time.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>


#include "logikai_mezo.h" //tesztelesig
#include "grafikai_tabla.h"
#include "jatekmester.h"


#include "widget.hpp"
#include "fstream"

#include "inputfield.h"

using namespace std;

using namespace genv;



int main()
{
	srand(time(NULL));
	event ev;
	gout.open(XX,YY);

	gin.timer(30);



    return 0;
};

