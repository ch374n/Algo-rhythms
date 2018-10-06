
#include <iostream>
using namespace std;
int& maximum(int a, int b) {
	return ((a > b) ? a : b);
}
int main() {
	int x = 10, y = 20;
	maximum(x,y) = -1;	
	return 0;
}

