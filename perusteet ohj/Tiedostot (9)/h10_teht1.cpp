#include<iostream>
using namespace std;
#include"omakirjasto.h"

int main(){
	int ikatesti = 0;
	asetaIka( ikatesti );
	cout << "Ika on " << ikatesti << endl;

	system("pause");
	return EXIT_SUCCESS;
}