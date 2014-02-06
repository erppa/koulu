#include<iostream>
using namespace std;

int Suorakaide ( int, int );

int main() {
	int kanta = 0;
	int korkeus = 0;
	
	cout << "Anna suorakaiteen kanta: ";
	cin >> kanta;
	cout << endl;

	cout << "Anna suorakaiteen korkeus: ";
	cin >> korkeus;
	cout << endl;

	cout << "Suorakaiteen pinta-ala on " << Suorakaide( kanta , korkeus ) << endl;
	system("pause");
	return EXIT_SUCCESS;
}

int Suorakaide( int kanta, int korkeus ) {

return kanta * korkeus;

}