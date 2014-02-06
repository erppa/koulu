#include<iostream>
using namespace std;

void main() {

	double kanta = 0;
	double korkeus = 0;
	double ala = 0;


	cout << "Anna kolmion kanta metreina: ";
	cin >> kanta;
	cout << endl;

	cout << "Anna kolmion korkeus metreina: ";
	cin >> korkeus;
	cout << endl;

	ala = (kanta * korkeus )/2;

	cout << "Kolmion pinta-ala on " << ala << endl; 
	system("pause");
	return;
}
