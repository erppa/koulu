#include<iostream>
using namespace std;

void main() {

	char operaattori = 'a';
	int luku1 = 0;
	int luku2 = 0;
	int vastaus = 0;

	cout << "Anna laskutoimitus (+ - * tai /): ";
	cin >> operaattori;
	cout << endl;

	cout << "Syota ensimmainen luku: ";
	cin >> luku1;
	cout << endl;

	cout << "Syota toinen luku: ";
	cin >> luku2;
	cout << endl;

	if( operaattori == '*' ){

		vastaus = luku1 * luku2;
		cout << "Syottamiesi lukujen tulo on " << vastaus << endl;

	}

	else if( operaattori == '/' ){

		vastaus = luku1 / luku2;
		cout << "Syottamiesi lukujen osamaara on " << vastaus << endl;

	}
	else if( operaattori == '-' ){

		vastaus = luku1 - luku2;
		cout << "Syottamiesi lukujen erotus on " << vastaus << endl;

	}
	else if( operaattori == '+' ){

		vastaus = luku1 + luku2;
		cout << "Syottamiesi lukujen summa on " << vastaus << endl;

	}
	else{

		cout << "Tuntematon laskuoperaattori" << endl;

	}
	system("pause");
	return;

}