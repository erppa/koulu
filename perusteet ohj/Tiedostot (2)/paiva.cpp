#include<iostream>
using namespace std;

void main() {
	int paiva = 0;

	cout << "Anna paivan numero: ";
	cin >> paiva;
	cout << endl;

	if( paiva < 6 && paiva > 0 ){
	
		cout << "arkipaiva" << endl;

	}
	else if( paiva == 6 || paiva == 7 ){

	cout << "viikonloppu" << endl;
	
	}
	else{

		cout << "virheellinen paiva" << endl;

	}
	system("pause");
	return;
}
