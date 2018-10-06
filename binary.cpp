// 3999 
#include <iostream>
using namespace std;
int main() {
	int number = 4;
	for(int i = 31; i > 0; i--) {
		cout<<((number>>i) & 1);
	}
	return 0;
}



// LCDM


// M CM D  CD C XC L XL X IX V IV I

// 1000 900 500 400 100 90 50 40 10 9 5 4 1

