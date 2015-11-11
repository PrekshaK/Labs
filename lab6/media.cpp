#include <iostream>
#include <string>
#include "media.h"
#include "music.h"
using namespace std;

media::media(string mtitle, int mlength){
	title = mtitle;
	length = mlength;
}

void media::display(){
	cout << "SONGVIDEO BOTH: " << getTitle() << " " << getLength() << endl;
}

string media::getTitle(){
	return title;
}

media::media(){

}


int media::getLength(){
	return length;
}



