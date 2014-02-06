#include<iostream>
using namespace std;
#include"omakirjasto.h"

int main(){
	int lottonumerot[7] = {0};
	int lkm= 7;
	arvoLottonumerot( lottonumerot, lkm );
	
	cout << "lottonumerot on ";

	for(int i=0; i<7; i++)
		cout << lottonumerot[i] << " ";

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}