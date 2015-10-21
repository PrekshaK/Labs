#include <iostream>
using namespace std;
#define MAX_SIZE 20

template <class T> class Stack{

private:
	T A[MAX_SIZE];
	int top;

public:
	Stack(){
		top = -1;
	}

	int TopIndex(){
		return top;
	}

	T Top(){
		return A[top];
	}

	bool IsEmpty(){
		if (top == -1){
			return true;
		}
		return false;
	}

	bool IsFull(){
		if (top == MAX_SIZE-1){
			return true;
		}
		return false;
	}

	void Push(T x){
		if (IsFull()){
		    cout << "Stack overflow\n";
	    }else{
	    	top ++;
	    	
		    A[top] = x;
	    }
	}

	void Pop(){
		if(IsEmpty()){
		   cout << "No more elements \n";
		}else{
			top --;
		}
	}

	void Print(){
		cout << "Stack is \n";
		for (int i = 0; i<=top; i++){
			cout << A[i] << endl;
		}
	}

};