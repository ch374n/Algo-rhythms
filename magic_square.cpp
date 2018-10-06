// This is program to print magic square

#include <iostream>
using namespace std;
int magic[100][100];

int main() {
	int number = 15, row, column;
	row = 0, column = number/2;
	magic[row][column] = 1;
	for(int i = 2; i <= number * number; i++) {
			column += 1;
			   row -= 1;
			if(row < 0) { row = number-1;}
			if(column == number) { column = 0;}
			if(magic[row][column]) { 
				column -= 1; 
				row += 2; 
				if(column < 0) {
					column = number -1;
				}
				if(row > number) { 
					row -= number;
				} 
			}

			magic[row][column] = i;
	}
		cout<<"The magic square is given by : "<<endl;
	for(int i = 0; i < number; i++) {
			for(int j = 0; j < number; j++) {
				cout<<magic[i][j]<<"\t";
			}
			cout<<"\n";
	}
	return 0;
}
