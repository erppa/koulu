#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include<climits>

//t‰ss‰ on tietorakenteessa s‰ilˆt‰‰n
//tiedot milloin mist‰kin lahjasta
//struct header filuun
struct Artikkelit
{
	int toive;
	string nimi;
	int maara;
};
//lis‰‰ lahjoja listaan
void lisaa(vector<Artikkelit>& lahjat);

//toive lis‰‰ toivottuja listaan
void toive(vector<Artikkelit>& lahjat);

//komennolla saadaaan tiedot jostain lahjoista
void tiedot(vector<Artikkelit>& lahjat);