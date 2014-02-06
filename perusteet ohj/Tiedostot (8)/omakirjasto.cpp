#include<iostream>
#include<Time.h>
using namespace std;

int Nelio( int luku ) {

return luku * luku;

}
int Suorakaide( int kanta, int korkeus ) {

return kanta * korkeus;

}
float MatkanHinta ( float km, float kulutus, float myrkyn_hinta ) {
	return km * kulutus/100 * myrkyn_hinta;
}
int palkka ( int tunnit){
	int palkka = 0;
	if( tunnit <= 40 ){
		palkka = 10 * tunnit;
	}
	else{
		palkka = 400 + 15 * (tunnit - 40);
	}
	return palkka;
}
void tervehdys() {

    cout << "Hello!" << endl;
    return;
}
int summa( int luku1, int luku2 ){

    int tulos = luku1 + luku2;
    return tulos;
}
float Virta( float U, float R ){
	float I = U/R;
	return I;
}
void sulake( double P ){
	double U = 220;
	double I = P/U;
	if( I < 10){
		cout << "Virta on " << I << "A, tarvitset 10A sulakkeen" << endl;
	}
	else if( I < 16){
		cout << "Virta on " << I << "A, tarvitset 16A sulakkeen" << endl;
	}
	else if( I < 20){
		cout << "Virta on " << I << "A, tarvitset 20A sulakkeen" << endl;
	}
	else{
		cout << "Laitteen taakse tarvitaan useampi sulake" << endl;
	}

}
void lotto(){
	srand(time(NULL));
	int lottonumerot[7] = {0};
	for ( int i = 0; i < 7; i++ ){
		int luku = rand() % 39 + 1;
		int apu = rand() % 39 + 1;
		lottonumerot[i] = luku;
		for( int ii = 0; ii < i; ii++ ){
			if(lottonumerot[ii] == luku){
				// tarkistus etta luku on eri kuin apu ja tarvittaessa apun uudelleen arpominen
				while(luku == apu){
					apu = rand() % 39 + 1;
				}
				lottonumerot[ii] = apu;
				ii = 0;
			}
		}
	}
	for ( int i = 0; i < 6; i++ ){
		cout << lottonumerot[i] << ",";
	}
	cout << lottonumerot[6] << endl;
}
void tulostaTahtia( int sademaara ){
	int tahti = 0;
	tahti = sademaara - 1;
		for( int i=0; i <= tahti; i++){
			cout << "* ";
		}
		cout << endl;
}
bool alkuluku( int luku ){
	for (int i=2; i<luku; i++){
		if (luku%i == 0)
			return false;
	}
	return true;
}
