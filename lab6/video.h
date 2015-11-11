#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include "media.h"
using namespace std;

class video : public media{
public:
	video(string mtitle, int mlength);
	void check();

	
	virtual void display();

};

#endif