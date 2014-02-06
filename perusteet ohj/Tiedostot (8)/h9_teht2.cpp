#include<iostream>
using namespace std;
#include"omakirjasto.h"

int main(){
	int sademaara[12] = {0};

	for(int i=0; i<=11; i++){
		cout << "Syota sademaara: ";
		cin >> sademaara[i];
	}
	for(int i=0; i<=11; i++){
	tulostaTahtia( sademaara[i] );
	}
	system("pause");
	return EXIT_SUCCESS;
}