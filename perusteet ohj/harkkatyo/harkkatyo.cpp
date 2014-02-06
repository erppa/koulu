#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include<climits>
#include"omakirjasto.h"
int main(){

	cout << "Tervetuloa joulupukin pajalle, voit lisata lahjoja komennolla lisaa. " << endl
		<< "Tai lukea kirjeista toiveita komennolla toive. " << endl
		<< "Yksityiskohtaiset tiedot lahjasta saat komennolla tiedot " << endl
		<< "ja komennolla tulostus lyotyy lista kaikista toiveista ja lahjoista." << endl;

	
	cout << "Syota <komento> <lahja> <numero> jos kaytat lisaa tai toive -toimintoa." << endl
		<< "Syota <komento> <lahja>, jos kaytat tiedot -toimintoa." << endl
		<< "Syota <komento>, jos kaytat tulostus tai lopeta -komentoa." << endl;

  	//muuttujat	
	bool lopeta = false;
	string komento;

	vector <Artikkelit> lahjat;
	
	//vektoriin komennot push_backataan 
	//kaikki komennot
	vector <string> komennot; 
	
	komennot.push_back ("lisaa"); 
	komennot.push_back ("toive"); 
	komennot.push_back ("tulosta"); 
	komennot.push_back ("tiedot"); 
	komennot.push_back ("lopeta");
	do{
		cout << "> ";
		cin >> komento;

		//tarkistaa onko laillinen komento
		for(size_t i = 0; i <= komennot.size(); ++i){

			if(i < komennot.size()){

				if(komennot[i] == komento){

					break;
				}
			}
			//jos se ei ollutkaan laiton	
			if(i == komennot.size()){

				cout << "Tuntematon komento." << endl;
				cin.clear();
			}
		}

      	//lisää eli tehdään lahoja
		if(komento == "lisaa"){

			lisaa(lahjat);
		}

      	//toive vain toivotaan ei lisätä
		if(komento == "toive"){

			toive(lahjat);
		}

	    //tulosta
		if(komento == "tulosta"){

			for(size_t i = 0; i < lahjat.size(); ++i){

				cout << lahjat[i].nimi << ", varastossa: " 
				<< lahjat[i].maara << ", toivottu: " 
				<< lahjat[i].toive << endl;
			}     
		}

		//tulostetaan lahjojen tiedot tarviis siis vielä lahjan nimen
		if(komento == "tiedot"){

			tiedot(lahjat);	
		}
		
		if(komento == "lopeta"){

			lopeta = true;
		}

	} while (lopeta == false);
	return EXIT_SUCCESS;
}



