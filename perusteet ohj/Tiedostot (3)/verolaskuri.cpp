#include<iostream>
using namespace std;

void main() {
	
	double ansiotulo = 0;
	double vero_alaraja = 0;
	double maksettavaa = 0;
	double ylittava_maara = 0;

	cout << "Anna henkilon ansiotulot: ";
	cin >> ansiotulo;
	cout << endl;

	if( ansiotulo < 16100 ){
		maksettavaa = ansiotulo*0.19;
		cout << "Henkilo maksaa veroja " << maksettavaa << " euroa." << endl;
	}
	else if( ansiotulo < 23900 ){

		vero_alaraja = 8;
		ylittava_maara = (ansiotulo - 16100)*0.65 ;
		maksettavaa = ansiotulo*0.19 + vero_alaraja + ylittava_maara;
		cout << "Henkilo maksaa veroja " << maksettavaa << " euroa." << endl;
	}
	else if( ansiotulo < 39100 ){

		vero_alaraja = 515;
		ylittava_maara = (ansiotulo - 23900)*0.175;
		maksettavaa = ansiotulo*0.19 + vero_alaraja + ylittava_maara;
		cout << "Henkilo maksaa veroja " << maksettavaa << " euroa." << endl;
	}
	else if( ansiotulo < 70300 ){

		vero_alaraja = 3175;
		ylittava_maara = (ansiotulo - 39100)*0.215 ;
		maksettavaa = ansiotulo*0.19 + vero_alaraja + ylittava_maara;
		cout << "Henkilo maksaa veroja " << maksettavaa << " euroa." << endl;
	}
	else if( ansiotulo < 100000 ){

		vero_alaraja = 9883;
		ylittava_maara = (ansiotulo - 70300)*0.2975 ;
		maksettavaa = ansiotulo*0.19 + vero_alaraja + ylittava_maara;
		cout << "Henkilo maksaa veroja " << maksettavaa << " euroa." << endl;
	}
	else{
		vero_alaraja = 18728.75;
		ylittava_maara = (ansiotulo - 100000)*0.3175 ;
		maksettavaa = ansiotulo*0.19 + vero_alaraja + ylittava_maara;
		cout << "Henkilo maksaa veroja " << maksettavaa << " euroa." << endl;
	}

	system("pause");
	return;

}
