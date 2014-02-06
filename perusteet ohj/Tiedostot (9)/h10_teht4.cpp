#include<iostream>
using namespace std;
#include<string>

int main(){
	const unsigned int MAX_LKM = 20;
	string nimet[MAX_LKM];
	string numerot[MAX_LKM];
	int valitsija = 0;
	string nimi = "a";



	while(valitsija != 3){
			cout << "1. lisaa kontakti, 2. hae kontakti ja 3 lopeta. ";
			cin >> valitsija;
			cout << endl;	
			
		switch(valitsija){		
		case 1:
			for(int i = 0; i <= MAX_LKM; i++){
				if( nimet[i] == ""){
					cout << "Syota nimi: ";
					cin >> nimet[i];
					cout << endl;

					cout << "Syota numero: ";
					cin >> numerot[i];
				break;
				}
				
			}
			valitsija = 0;
			break;
		case 2:
			cout << "Kontaktin nimi: ";
			cin >> nimi;
			cout << endl;
			for(int i = 0; i <= MAX_LKM; i++){
				if( nimet[i] == nimi){
					cout << "kontaktin numero on: " << numerot[i] << endl;
					break;
				}

				else if(i == MAX_LKM -1){
					cout << "Kontaktia ei loytynyt." << endl;
					break;
				}
			}
			valitsija = 0;
			break;
		case 3:
			cout << "Lopetetaan " << endl;
			break;
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}