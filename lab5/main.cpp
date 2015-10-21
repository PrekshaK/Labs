#include <iostream>
#include <ctime>
#include "stack.h"
using namespace std;

void Store();
void Reveoutput();
void print();
void Sort();

Stack <int> Stack1, Stack2, Stack3;
int main(){
	int top;

	Store();
	cout << "Stack1 is \n";
	Stack1.Print();

    Reveoutput();
    cout << "After Reversing\n";
    Stack2.Print();
    
    Sort();
    cout << "After Sorting\n";
    Stack1.Print();
	return 0;

}

void Store(){
	srand(time(NULL));
	int num;

	for (int i = 0; i<20; i++){
		num = rand()%20;
		//cout << num <<endl;
		Stack1.Push(num);
	}
	
}

void Reveoutput(){
	if (!Stack1.IsEmpty()){
		Stack2.Push(Stack1.Top());
		Stack1.Pop();
	    Reveoutput();
       

	}   

}

void Sort(){
	int temp;
	while (!Stack2.IsEmpty()){
		temp = Stack2.Top();
		Stack2.Pop();

		while ((!Stack1.IsEmpty()) &&(temp < Stack1.Top())){
			Stack2.Push(Stack1.Top());
			Stack1.Pop();
		}
		Stack1.Push(temp);

	}


}


