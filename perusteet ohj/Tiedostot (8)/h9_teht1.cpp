#include<iostream>
using namespace std;

int main(){
	int tenttitulokset[10] = {0};
	double pisteet = 0;
	for(int i=0; i<10; i++){
		cout << "Syota tenttitulos: ";
		cin >> tenttitulokset[i];
	}
	for(int i=0; i<10; i++){
		pisteet = pisteet + tenttitulokset[i];
	}
	pisteet = pisteet/10;
	cout << endl << "Keskiarvo on: " << pisteet << " pistetta" << endl;

	system("pause");
	return EXIT_SUCCESS;
}