#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include<climits>
struct Artikkelit
{
	int toive;
	string nimi;
	int maara;
};

void lisaa(vector<Artikkelit>& lahjat){	

	string nimi;
	int luku = 0;
	bool apu = false;
	
	cin >> nimi >> luku;
	
	//tarkistetaan onko luku suurempi kuin nolla
	//ja onko se numero, jos ei ole niin ignoorataan
	cin.clear();
    cin.ignore( numeric_limits<streamsize>::max(), '\n');

	if(luku <= 0 || luku > INT_MAX){
		cout << "Anna maara positiivisean kokonaislukuna. <komento> <lahja> <numero>"<<endl;
		return;
	}


	
	//tarkistetaan onko se jo olemassa, jos on niin lisataan valmistettavia
	for(size_t i = 0; i <= lahjat.size(); ++i){

		if(apu == false){

			if(i < lahjat.size()){

				if( nimi == lahjat[i].nimi){
					lahjat[i].maara = lahjat[i].maara + luku;
					apu = true;
				}
			}
		}
	}

	//kun apu on false niin silloin tehdaan uusi lahja tietorakenne
			if(apu == false){
				Artikkelit artikkeli = {0, nimi, luku};
				lahjat.push_back(artikkeli);
			}
}
void toive(vector<Artikkelit>& lahjat)
{
	string nimi;
	int luku = 0;
	bool apu = false;

	//ja samat cin tarkistukset
	cin >> nimi >> luku;
	cin.clear();
    cin.ignore( numeric_limits<streamsize>::max(), '\n');

	if(luku <= 0 || luku > INT_MAX){
		cout << "Anna maara positiivisean kokonaislukuna. <komento> <lahja> <numero>"<<endl;
		return;
	}

	//tarkistetaan onko lahajaa jo toivottu jos on niin lisataa toiveita
	for(size_t i = 0; i <= lahjat.size(); ++i){	

		if(apu == false){

			if(i < lahjat.size()){

				if(nimi == lahjat[i].nimi){
					lahjat[i].toive = lahjat[i].toive + luku;
					apu = true;
				}
			}
		}
	}	
			if(apu == false){
				Artikkelit artikkeli = {luku, nimi, 0};
				lahjat.push_back(artikkeli);	
			}
}
void tiedot(vector<Artikkelit>& lahjat){

	string nimi;
	
	cin >> nimi;
	   //jos lahja löytyi ja sitten tulostetaan
	for(size_t i = 0; i <= lahjat.size(); ++i){

		if(i < lahjat.size()){
			
			if(nimi == lahjat[i].nimi){
				
				if(lahjat[i].toive - lahjat[i].maara >= 0){
					cout << lahjat[i].nimi << ", varastossa: " 
					<< lahjat[i].maara 
					<< ", toivottu: " << lahjat[i].toive
					<< ", valmistettava " << lahjat[i].toive 
					- lahjat[i].maara  << " kpl" << endl;
					break;
				}
				
				else{
					cout << lahjat[i].nimi << ", varastossa: " 
					<< lahjat[i].maara 
					<< ", toivottu: " << lahjat[i].toive
					<< ", varasto riittaa" << endl;
				break;
				}			
			}
		}

		//jos sitä lahjaa ei ollutkaan
		if(i == lahjat.size()){
		     //jos ei
			cout << "VIRHE: " << nimi 
			<< "-nimista lahjaa ei loytynyt." << endl;
		}
	}
	     
}