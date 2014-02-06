#include<iostream>
using namespace std;

int palkka ( int );

int main() {
	int tunnit = 0;

	cout << "Anna tyotunnit: ";
	cin >> tunnit;
	cout << endl;

	cout << "Tienattu viikolla: " << palkka ( tunnit ) << " euroa." << endl;

	system("pause");
	return EXIT_SUCCESS;
}

int palkka ( int tunnit){
	int palkka = 0;
	if( tunnit <= 40 ){
		palkka = 10 * tunnit;
	}
	else{
		palkka = 400 + 15 * (tunnit - 40);
	}
	return palkka;
}