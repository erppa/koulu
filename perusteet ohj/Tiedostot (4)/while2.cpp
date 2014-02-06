#include<iostream>
using namespace std;

void main() {

	int summa = 0;
	int luku = 0;
	while( true ){
		cout << "Anna luku (0 lopettaa): ";
		cin >> luku;
		cout << endl;

		summa = summa + luku;
		if( luku == 0 ){
			break;
		}
	}
	cout << "Syotettyjen lukujen summa on: " << summa << " ";

	system("pause");
	return;
}