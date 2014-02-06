#include<iostream>
using namespace std;

void main() {
	float pituus = 0;
	int paino = 0;
	float indeksi = 0;
	
	cout << "Syota henkilon paino (kg): ";
	cin >> paino;
	cout << endl;
	
	cout << "Syota henkilon pituus (m): ";
	cin >> pituus;
	cout << endl;

	indeksi = paino  /  ( pituus * pituus );

	if( indeksi <= 20.7 ){

		cout << "Henkilon painoideksi on " << indeksi << ", joka tarkoittaa alipainoa." << endl;
	
	}
	else if( indeksi <= 26.4 ){

		cout << "Henkilon painoideksi on " << indeksi << ", joka tarkoittaa normaalia painoa." << endl;
	
	}
	else if( indeksi <= 27.8 ){

		cout << "Henkilon painoideksi on " << indeksi << ", joka tarkoittaa lievaa ylipainoa." << endl;
	
	}
	else if( indeksi <= 31.1 ){

		cout << "Henkilon painoideksi on " << indeksi << ", joka tarkoittaa ylipainoa." << endl;
	
	}
	else{

		cout << "Henkilon painoindeksi on " << indeksi << ", joka takoittaa paljon ylipainoa." << endl;

	}
	
	system("pause");
	return;

}
