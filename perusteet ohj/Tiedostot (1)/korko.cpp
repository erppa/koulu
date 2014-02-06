#include<iostream>
using namespace std;

void main() {

	int maara = 0;
	double prosentti = 0;
	int aika = 0;
	int korko = 0;

	cout << "Syota lainan maara (euroa): ";
	cin >> maara;
	cout << endl;

	cout << "Syota korkoprosentti: ";
	cin >> prosentti;
	cout << endl;
	prosentti = prosentti/100;

	cout << "Syota laina-aika (vuosia): ";
	cin >> aika;
	cout << endl;

	korko = maara * prosentti * aika;

	cout << "Lainan korot laina-ajalta ovat " << korko << " euroa."<< endl;
	system("pause");
	return;
}
