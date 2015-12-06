#ifndef LENGTH_CPP
#define LENGTH_CPP

#include <iostream>
using namespace std;

class Length{

public:

	int hours;
	int minutes;
	int seconds;

	Length(int sec){
		seconds = sec;
	}

	Length(){

	}

	void print(){
		minutes = seconds /60;
		hours = minutes / 60;

		minutes = minutes % 60;
		seconds = seconds % 60;


		
		cout << hours <<":"<<minutes<<":"<<seconds<<endl;
	}

     
};

#endif