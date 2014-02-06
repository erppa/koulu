#include<iostream>
using namespace std;

void main() {
	double pii = 0;
	double tarkkuus = 0;
	double apu = 1;
	double apu2 = 1;
	
	cout << "Minka tarkkuudella halut pii:n luku arvon ";
	cin >> tarkkuus;
	cout << endl;

	for ( int i = 1; i <= tarkkuus; i++ ){
		pii = pii + apu2 * 4/apu;
		apu = apu + 2;
		apu2 = apu2 * -1;
		
		
	}
	cout << "Pii on " << pii << ", antamallasi tarkkuudella." << endl;
	
	system("pause");
	return;
}