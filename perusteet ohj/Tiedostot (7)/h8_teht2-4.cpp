#include<iostream>
using namespace std;

#include"omakirjasto.h"
int main() {
	//tehtava 2
	int R = 0;
	int U = 0;

	cout << "Syota resistanssi(R): ";
	cin >> R;
	cout << endl;

	cout << "Syota jannite(U); ";
	cin >> U;
	cout << endl;

	cout << "Virta on " << Virta( R, U) << " A" << endl; 
	//tehtava 3
	double P = 0;
	
	cout << "Syota teho(P); ";
	cin >> P;
	cout << endl;
	
	sulake(P);

	//tehtava 4
	lotto();
	system("pause");
	return EXIT_SUCCESS;
}