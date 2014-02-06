#include<iostream>
using namespace std;

void main() {

	int matka = 0;
	double bensa_kulutus = 0;
	double diesel_kulutus = 0;
	double bensa_hinta = 0;
	double diesel_hinta = 0;
	double bensa_yht = 0;
	double diesel_yht = 0;
	double dieselvero = 0;

	cout << "Kuinka monta kilometria ajetaan vuodessa? ";
	cin >> matka;
	cout << endl;	

	cout << "Mika on bensan hinta? ";
	cin >> bensa_hinta;
	cout << endl;

	cout << "Enta dieselin hinta? ";
	cin >> diesel_hinta;
	cout << endl;

	cout << "Kuinka paljon auto kuluttaa bensaa (l/100km) ";
	cin >> bensa_kulutus;
	cout << endl;

	cout << "Enta  dieselia? ";
	cin >> diesel_kulutus;
	cout << endl;

	cout << "Mika on dieselin kayttovoimavero? ";
	cin >> dieselvero;
	cout << endl;

	bensa_yht = matka * bensa_hinta * bensa_kulutus;
	diesel_yht = matka * diesel_hinta * diesel_kulutus + dieselvero;

	cout << "Bensa auto maksaa vuodessa " << bensa_yht << " euroa." << endl;
	cout << "Diesel auto maksaa vuodessa " << diesel_yht << " euroa." << endl;

	if( diesel_yht < bensa_yht ){
		
		cout << "Diesel maksaa " << bensa_yht - diesel_yht << " vahemman kuin bensa-auto vuodessa." << endl;

	}
	else if( bensa_yht < diesel_yht ){

		cout << "Bensa maksaa " << diesel_yht - bensa_yht << " vahemman kuin diesel-auto vuodessa." << endl;

	}
	else{

		cout << "Ne ovat yhta kalliit" << endl;
	}
	
	system("pause");
	return;
}
