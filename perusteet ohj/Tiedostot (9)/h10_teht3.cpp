#include<iostream>
using namespace std;
#include"omakirjasto.h"
#include<algorithm>

int main(){
	int heittokierros = 5;
	int heitot[5] = {0};

	for(int i = 0; i < heittokierros; i++){
		cout << "Anna " << i+1 << ". tulos: ";
		cin >> heitot[i];
		cout << endl;
	}

	sort(heitot, heitot+5);
	cout << "Paras heitto oli " << heitot[4] << "." << endl;
	system("pause");
	return EXIT_SUCCESS;
}