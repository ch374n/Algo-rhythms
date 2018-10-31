/* Finding whether element is present in the array 
	in O(m + n) complexity :)
*/
#include <iostream>
using namespace std;
int array[4][4] = {
   {1, 2, 3, 4},
   {5, 6, 7, 8},
   {9, 10, 11, 12},
   {13, 14, 15, 16}
};

bool contains(int el) {
	int row = 0, column = 3;
	while(row < 4 && column >= 0) {
		if(array[row][column] == el) return true;
		if(array[row][column] < el) row++;
		if(array[row][column] > el) column--;
	}	
		return false;
}
int main() {
	cout<<contains(10)<<endl;
	cout<<contains(-1)<<endl;
	return 0;
}