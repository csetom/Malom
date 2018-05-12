#ifndef LOGIKAI_MEZO_H_INCLUDED
#define LOGIKAI_MEZO_H_INCLUDED
#include <vector>
#include "grafikai_mezo.h"

class logikai_mezo {
private :
	std::vector<int> szomszed;
	std::vector<std::vector<int>> malom_szomszed;
	int szin;

	//grafikai_mezo* mezo;

public:
	logikai_mezo( std::vector<int> beszomszed , std::vector<std::vector<int>> bemalom_szomszed);
	std::vector<int> get_szomszed();
	std::vector<std::vector<int>> get_malom_szomszed();
	int get_szin();
    void set_szin(int aktiv_jatekos);
};



#endif // LOGIKAI_MEZO_H_INCLUDED
