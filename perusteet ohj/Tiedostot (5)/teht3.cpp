#include<iostream>
#include <string>
using namespace std;

int main() {
	string etunimi = "aa";
	string sukunimi = "aa";
	string kadunimi = "aa";
	string postinro = "aa";
	string kunta = "aa";
	
	
	cout << "Syota etunimi: ";
	cin >> etunimi;
	cout << endl;

	cout << "Syota sukunimi: ";
	cin >> sukunimi;
	cout << endl;

	cout << "Syota kadunnimi: ";
	cin >> kadunimi;
	cout << endl;

	cout << "Syota postinro: ";
	cin >> postinro;
	cout << endl;

	cout << "Syota kunta: ";
	cin >> kunta;
	cout << endl;

	cout << "Osoitteesi on: " << etunimi << " " << sukunimi << " " << kadunimi << " " << postinro << " " << kunta << endl;
	
	system("pause");
	return EXIT_SUCCESS;
}