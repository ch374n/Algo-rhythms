// This is program to implement queue using stack 
#include <iostream>
#include <stack>
using namespace std;
stack<int> stack_one;
void recurse() {
	int element;
	if(stack_one.size() == 1) {
		cout<<stack_one.top()<<endl;
		stack_one.pop();
	} else {
		element = stack_one.top();
		stack_one.pop();		
		recurse();
		stack_one.push(element);
	}
}
int main() {
	stack_one.push(10);
	stack_one.push(20);
	stack_one.push(30);
	stack_one.push(40);
	stack_one.push(50);
	stack_one.push(60);
	stack_one.push(70);
	stack_one.push(80);
	char exit;
	do {
		recurse();
		cout<<"exit ? ";
		cin>>exit;	
	} while(exit =='n'||exit=='N');
	return 0;
}


/*
		
*/