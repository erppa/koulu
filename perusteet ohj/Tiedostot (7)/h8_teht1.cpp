#include<iostream>
using namespace std;

#include"omakirjasto.h"
int main() {
	
	//harkka 7 tehtava 1
	int luku = 0;

	cout << "Anna nelion sivun mitta kokonaislukuna: ";
	cin >> luku;
	cout << endl;

	cout << "Nelion pinta-ala on " << Nelio( luku ) << endl;

	//harkka 7 tehtava 2
	int kanta = 0;
	int korkeus = 0;
	
	cout << "Anna suorakaiteen kanta: ";
	cin >> kanta;
	cout << endl;

	cout << "Anna suorakaiteen korkeus: ";
	cin >> korkeus;
	cout << endl;

	cout << "Suorakaiteen pinta-ala on " << Suorakaide( kanta , korkeus ) << endl;

	//harkka 7 tehtava 3
	float km = 0;
	float kulutus = 0;
	float myrkyn_hinta = 0;

	cout << "Paljonko ajetaan km: ";
	cin >> km;
	cout << endl;

	cout << "Paljonko auto kuluttaa (l/100km): ";
	cin >> kulutus;
	cout << endl;

	cout << "Paljonko polttoaine maksaa: ";
	cin >> myrkyn_hinta;
	cout << endl;

	cout << "Matkasi maksaa: " << MatkanHinta( km, kulutus, myrkyn_hinta ) 
		<< " euroa." << endl;

	//harkka 7 tehtava 4
	int tunnit = 0;

	cout << "Anna tyotunnit: ";
	cin >> tunnit;
	cout << endl;

	cout << "Tienattu viikolla: " << palkka ( tunnit ) << " euroa." << endl;
	

	system("pause");
	return EXIT_SUCCESS;
}