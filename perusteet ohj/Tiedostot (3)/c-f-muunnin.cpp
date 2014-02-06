#include<iostream>
using namespace std;

void main() {
	double lampo = 0;
	char yksikko = 'a';
	double muunnos = 0;

	cout << "Syota lampotila: ";
	cin >> lampo;
	cout << endl;

	cout << "Syota yksikko (F= Fahrenheit, C=Celsius): ";
	cin >> yksikko;
	cout << endl;

	if( yksikko == 'C' ){
		muunnos = lampo * 1.8 + 32;
		cout << lampo << " Celsius = " << muunnos << " Fahrenheit" << endl;
	}
	else if( yksikko == 'F' ){
		muunnos = (lampo - 32) / 1.8;
		cout << lampo << " Fahrenheit = " << muunnos << " Celsius" << endl;
	}
	else{

		cout << "virheellinen syote" << endl;

	}
	system("pause");
	return;

}
