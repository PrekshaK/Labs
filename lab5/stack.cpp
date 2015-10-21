#include <iostream>
using namespace std;
#include "stack.h"
 
    template <class T> Stack<T>::Stack(){
		top = -1;
	}

	template <class T> int Stack<T>::TopIndex(){
		return top;
	}

	 template <class T> T Stack<T>::Top(){
		return A[top];
	}

	template <class T> bool Stack<T>::IsEmpty(){
		if (top == -1){
			return true;
		}
		return false;
	}

	template <class T> bool Stack<T>::IsFull(){
		if (top == MAX_SIZE-1){
			return true;
		}
		return false;
	}

	template <class T> void Stack<T>::Push(T x){
		if (IsFull()){
		    cout << "Stack overflow\n";
	    }else{
	    	top ++;
	    	
		    A[top] = x;
	    }
	}

	template <class T> void Stack<T>::Pop(){
		if(IsEmpty()){
		   cout << "No more elements \n";
		}else{
			top --;
		}
	}

	template <class T> void Stack<T>::Print(){
		cout << "Stack is \n";
		for (int i = 0; i<=top; i++){
			cout << A[i] << endl;
		}
	}