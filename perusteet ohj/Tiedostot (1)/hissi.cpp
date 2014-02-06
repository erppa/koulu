#include<iostream>
using namespace std;

void main() {

	int raja = 0;
	int paino1 = 0;
	int paino2 = 0;
	int paino3 = 0;
	int paino4 = 0;
	int paino = 0;

	cout << "Hissin painoraja (kg): ";
	cin >> raja;
	cout << endl;

	cout << "Henkilon 1 paino (kg): ";
	cin >> paino1;
	cout << endl;

	cout << "Henkilon 2 paino (kg): ";
	cin >> paino2;
	cout << endl;

	cout << "Henkilon 3 paino (kg): ";
	cin >> paino3;
	cout << endl;

	cout << "Henkilon 4 paino (kg): ";
	cin >> paino4;
	cout << endl;
	
	paino = paino1 + paino2 + paino3 + paino4;

	if( raja >= paino ) {
		
		cout << "Hissi kaytettavissanne!" << endl;

	}
	else {
	
	cout << "Ylipainoa, hissia ei saa kayttaa!" << endl;
	}

	system("pause");
	return;
}
