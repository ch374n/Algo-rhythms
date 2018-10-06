
// This is program to find whether first and last bit of number is 1
// logic (number -1) should be the power of 2


#include <iostream>
using namespace std;
bool power_of_two(int number) {
	return (!(number&1));
}
void first_and_last(int number) {
	for(int i = 0; i < number; i++) {
		if(power_of_two(i-1))
			cout<<i<<"\n";
	}
}
int main() {
	int number = 50;
	first_and_last(number);
	return 0;
}

