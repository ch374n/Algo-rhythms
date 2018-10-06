// This is program to print whether given number is odd or even without using control structures

#include <iostream>
using namespace std;
int main() {
	char array[2][20] = {"even", "odd"};
	int number = 10;
	cout<<array[number%2]<<endl;	
	return 0;
}