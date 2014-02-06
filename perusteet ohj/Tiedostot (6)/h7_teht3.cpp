#include<iostream>
using namespace std;

float MatkanHinta ( float, float, float );

int main() {
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
	system("pause");
	return EXIT_SUCCESS;
}

float MatkanHinta ( float km, float kulutus, float myrkyn_hinta ) {
	return km * kulutus/100 * myrkyn_hinta;
}