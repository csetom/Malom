#include "graphics.hpp"
#include <time.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

#include "jatekmester.h"


using namespace std;

using namespace genv;



int main()
{
	srand(time(NULL));
	event ev;
	gout.open(XX,YY);
	jatekmester malom;
	gin.timer(30);
	malom.futtat();


    return 0;
};

