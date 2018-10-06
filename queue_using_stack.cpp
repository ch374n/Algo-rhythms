// In this problem we'll see how to implement a queue using stack
#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack_one, stack_two;
	int choice, element;
	bool exit = false;
	while(!exit) {
		cout<<"\n==============\n[1] enqueue\n[2] dequeue\n=============\n";
		cin>>choice;
		if(choice == 1) {
			cout<<"enter element : ";
			cin>>element;		
			stack_one.push(element);
			cout<<"stack one "<<stack_one.top()<<endl;
		} else {
			if(stack_two.empty()) {
				for(int i = -1; i <= stack_one.size(); i++) {
					cout<<"stack 1 : "<<stack_one.top()<<endl;
					stack_two.push(stack_one.top());
					stack_one.pop();
				}
					stack_two.push(stack_one.top());
					stack_one.pop();
					cout<<"The element dequed is : "<<stack_two.top()<<endl;
					stack_two.pop();
			} else {
					cout<<"The element dequed is : "<<stack_two.top();
					stack_two.pop();
			}
		}
					cout<<"exit ? ";
					cin>>exit;
	}
					return 0;
}


/*
	50  50  40 30 20 10 
	40 		   30 20
	30
	20
	10
*/