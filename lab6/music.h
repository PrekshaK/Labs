#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include "media.h"
using namespace std;

class music : public media{
public:
	music(string mtitle, int mlength);
	virtual void display();

};

#endif