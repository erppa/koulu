#include<iostream>
using namespace std;

int main(){
	double luku1 = 0;
	double luku2 = 0;
	int valitsija = 0;

	cout << "Anna luku1: ";
	cin >> luku1;
	cout << endl;

	cout << "Anna luku2: ";
	cin >> luku2;
	cout << endl;

	cout << "Valitse 1, jos haluat lukujen summan" << endl;
	cout << "Valitse 2, jos haluat lukujen erotuksen" << endl;
	cout << "Valitse 3, jos haluat lukujen tulon" << endl;
	cout << "Valitse 4, jos haluat lukujen osamaaran." << endl;
	cin >> valitsija;

	switch(valitsija){
	case 1:
		cout << "Lukujen summa on: " << luku1 + luku2 << endl;
		break;
	case 2:
		cout << "Lukujen erotus on: " << luku1 - luku2 << endl;
		break;
	case 3:
		cout << "Lukujen tulo on: " << luku1 * luku2 << endl;
		break;
	case 4:
		cout << "Lukujen osamaara on: " << luku1 / luku2 << endl;
		break;
	}

	system("pause");
	return EXIT_SUCCESS;
}