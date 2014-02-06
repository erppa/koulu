#include<iostream>
using namespace std;

void main() {

	double tili = 0;
	bool lopeta = false;
	int toiminto = 0;
	double apu = 0;

	cout << "Tervetuloa pankkiin!" ;
	cout << endl;
	cout << "Tililla on rahaa " << tili << " Euroa" << endl;
	
	while( lopeta != true ){
		cout << "Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): ";
		cin >> toiminto;

		if( toiminto == 1 ){
			cout << "Syota talletettava rahasumma: ";
			cin >> apu;
			tili = tili + apu;
			cout << endl;
			cout << "Tililla on rahaa " << tili <<" Euroa." << endl;
		}

		if( toiminto == 2 ){
			cout << "Syota nostettava rahasumma: ";
			cin >> apu;
			tili = tili - apu;
			cout << endl;
			cout << "Tililla on rahaa " << tili <<" Euroa." << endl;
		}
		if( toiminto == 3 ){
			cout << "Nakemiin!" << endl;
			lopeta = true;
		}
	}
	system("pause");
	return;
}