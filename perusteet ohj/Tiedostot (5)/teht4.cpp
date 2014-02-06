#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159265358979323846


void main() {
	int laskutoimitus = 0;
	double luku = 0;

	cout << "Valitse laskutoimitus (1=neliöjuuri, 2=log, 3=exp ja 4=tan): ";
	cin >> laskutoimitus;
	cout << endl;

	cout << "Syota luku: ";
	cin >> luku;
	cout << endl;

	if ( laskutoimitus == 1 ){
		luku = sqrt (luku);
		cout << "Syottamasi luvun neliöjuuri on " << luku << endl;
	}
	else if( laskutoimitus == 2 ){
		luku = log (luku);
		cout << "Syottamasi luvun luonnollinen logaritmi on " << luku << endl;

	}
	else if( laskutoimitus == 3 ){
		 luku = exp (luku);
		 cout << "Syottamasi luvun exponenttifunktio on " << luku << endl;
	}
	else if( laskutoimitus == 4 ){
		luku = tan (luku * PI / 180.0 );
		cout << "Syottamasi luvun tangentti on " << luku << endl;
	}
	
	system("pause");
	return;
}