#include<iostream>
using namespace std;

void main() {
	for( int i = 1; i <= 10; i++ ){
		cout << i << " ";
	}

cout << endl;

	for( int i = 2; i <= 20; i = i + 2 ){
		if( i == 20 )
			cout << i << endl;

		else
			cout << i << ", ";
	}
	
	system("pause");
	return;
}