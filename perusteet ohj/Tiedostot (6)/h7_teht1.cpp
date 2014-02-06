#include<iostream>
using namespace std;

int Nelio ( int );

int main() {
	int luku = 0;

	cout << "Anna nelion sivun mitta kokonaislukuna: ";
	cin >> luku;
	cout << endl;

	cout << "Nelion pinta-ala on " << Nelio( luku ) << endl;
	system("pause");
	return EXIT_SUCCESS;
}

int Nelio( int luku ) {

return luku * luku;

}