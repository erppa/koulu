#include<iostream>
using namespace std;

void main() {
	
	int pituus1 = 0;
	int pituus2 = 0;

	cout << "Syota henkilon 1 pituus (cm): ";
	cin >> pituus1;
	cout << endl;

	cout << "Syota henkilon 2 pituus (cm): ";
	cin >> pituus2;
	cout << endl;

	if( pituus1 > pituus2 ){
	
		cout << "Henkilo 1 on pidempi pituudella " << pituus1 << " cm." <<endl;
	
	}
	else if ( pituus1 == pituus2 ){
		
		cout << "Henkilot ovat yhta pitkia." << endl;
	
	}
	else{

		cout << "Henkilo 2 on pidempi pituudella " << pituus2 << " cm." << endl;

	}

	system("pause");
	return;
}
