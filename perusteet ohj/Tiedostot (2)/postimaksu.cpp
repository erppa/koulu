#include<iostream>
using namespace std;

void main() {

	int paino = 0;
	double maksu = 0;

	cout << "Anna kirjeen paino grammoina. ";
	cin >> paino;
	cout << endl;

	if( paino <= 50 ){

		maksu = 0.6;
		cout << "Kirjeen lahetys maksaa " << maksu << " euroa." << endl;

	}
	else if( paino <= 100 ){

		maksu = 0.9;
		cout << "Kirjeen lahetys maksaa " << maksu << " euroa." << endl;

	}
	
	else if( paino <= 250 ){

		maksu = 1.3;
		cout << "Kirjeen lahetys maksaa " << maksu << " euroa." << endl;

	}

	else if( paino <= 500 ){

		maksu = 2.1;
		cout << "Kirjeen lahetys maksaa " << maksu << " euroa." << endl;

	}
	else if( paino <= 1000 ){

		maksu = 3.5;
		cout << "Kirjeen lahetys maksaa " << maksu << " euroa." << endl;

	}
	else if( paino <= 2000 ){

		maksu = 5.5;
		cout << "Kirjeen lahetys maksaa " << maksu << " euroa." << endl;

	}
	else{

		cout << "Painon max on 2000g." << endl;

	}
	system("pause");
	return;

}