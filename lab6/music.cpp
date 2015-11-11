#include <iostream>
#include "media.h"
#include "music.h"
using namespace std;

music::music(string mtitle, int mlength):media(mtitle, mlength){

}


void music::display(){
	cout << "Song: " << getTitle() << " " << getLength() << endl;
}