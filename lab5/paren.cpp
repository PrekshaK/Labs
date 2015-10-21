#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"
using namespace std;


Stack <string> stack;

bool validSyntax();
bool arePairs(string x, string y);
bool isvalid(string x);

int main(){
 
  bool yes;
  yes = validSyntax();
  cout << "printing \n";
  cout << yes << endl;

  return 0;

} 

bool validSyntax(){

	string Paren;  
    ifstream read;
    read.open("paren.txt");

    while (read >> Paren){
    }
   
    read.close();
    string par;
    for (int i = 0; i < Paren.size(); i++){
    	par = Paren[i];
    	if (isvalid(par)){
            if (!stack.IsEmpty()){
            	if(arePairs(stack.Top(), par)){
    	    	stack.Pop();
    	        }
    	    }else{
    	    	stack.Push(par);
    	    	cout << "ans is "<<stack.TopIndex() << endl;
    	    }
        }
    }
    cout << "testing" << (stack.TopIndex() == -1) << endl;
    return stack.TopIndex() == -1;




}

bool isvalid(string x){
	if ((x == "[") || (x == "]") || (x == "(")
    		|| (x == ")") || (x == "{") || (x == "}")
    		){
		return true;
	}
	else 
		return false;
}


bool arePairs(string x, string y){
	if ((x == "{") && (y == "}"))
		return true;

	else if ((x == "[") && (y == "]"))
		return true;

	else if((x =="(") && (y == ")"))
		return true;

	else
		return false;

}