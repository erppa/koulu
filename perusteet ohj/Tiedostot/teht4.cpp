#include<iostream>
using namespace std;

void main() {

	int luku1 = 0;
	int luku2 = 0;
	int erotus = 0;
	int tulo = 0;
	
	cout << "Syota 1. luku: ";
	cin >> luku1;
	cout << endl;

	cout << "Syota 2. luku: ";
	cin >> luku2;
	cout << endl;

	erotus = luku1 - luku2;
	tulo = luku1 * luku2;
	
	cout << "Lukujen erotus on "<< erotus << "." << endl << endl;

	cout << "Lukujen tulo on " << tulo << "." << endl;

	system("pause");
	return;
}