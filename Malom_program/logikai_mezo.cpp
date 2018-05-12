#include "logikai_mezo.h"

using namespace std;

logikai_mezo::logikai_mezo(vector<int> beszomszed,vector<vector<int>>bemalom_szomszed): szomszed(beszomszed),malom_szomszed(bemalom_szomszed),szin(0){
	//cout<<malom_szomszed[0][1]<<endl;
};
int logikai_mezo::get_szin() {
	return szin;
}
void logikai_mezo::set_szin(int aktiv_jatekos) {
	szin=aktiv_jatekos;
};

vector<vector<int>> logikai_mezo::get_malom_szomszed () {
	return malom_szomszed;
}
