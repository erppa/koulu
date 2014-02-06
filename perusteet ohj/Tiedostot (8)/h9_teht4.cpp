#include<iostream>
using namespace std;
#include"omakirjasto.h"

int main(){
	int luku = 0;

	/*cout << "Syota luku: ";
	cin >> luku;
	cout << endl;

	alkuluku( luku );
	*/
	for(int i = 1; i <= 1000; i++){
		alkuluku( i );
		if( alkuluku(i) == true ){
			cout << i << " ";
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}