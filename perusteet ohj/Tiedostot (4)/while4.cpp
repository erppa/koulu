#include<iostream>
using namespace std;

void main() {
	double pituus = 0;
	double pisteet = 0;
	double apu = 0;
	int tuomari = 1;
	double kok_pisteet = 0;

	cout << "Hypyn pituus: ";
	cin >> pituus;
	cout << endl;
	
	while( tuomari < 6 ){
		cout << "Tuomarin "<< tuomari <<" pisteet: ";
		cin >> apu;
		cout << endl;
		tuomari = tuomari + 1;
		pisteet = pisteet + apu;
	}
	kok_pisteet = pisteet + 0.9 * pituus;
	cout << "Hypyn pisteet: " << kok_pisteet << endl;
	
	system("pause");
	return;
}