#include<iostream>
using namespace std;

void main() {
	int i = 5; 
	do{
		cout << i << " ";
		i = i - 1;
	} while( i >= -5 );

	cout << endl;

	int luku = 0;
	int ii = 0; 
	do{
		ii = ii + 1;
		luku = ii % 2;
		if ( luku == 0 ){
			cout << ii << " ";

		}
	} while( ii <= 50 );
	
	
	system("pause");
	return;
}