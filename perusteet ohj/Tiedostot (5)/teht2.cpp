#include<iostream>
using namespace std;

void main() {
	int sekunnit = 0;
	double nopeus = 0;
	int apu = 1;
	cout << "Anna putoimisen aika sekunteina: ";
	cin >> sekunnit;
	cout << endl;

	cout << "Aika\tNopeus (km/h)" << endl;
	for ( int i = 0; i <= sekunnit; i++ ){
		cout << i << "\t" << nopeus << endl;
		nopeus = 9.81 * apu * 3.6;
		apu++;

	}
	system("pause");
	return;
}