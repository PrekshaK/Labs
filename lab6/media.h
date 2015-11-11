#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <string>

using namespace std;


class media{
    protected:
     	string title;
    	int length;

    public:
    	media();
        media(string mtitle, int mlength);
        

	    virtual void display();
	    string getTitle();
	    int getLength();

};


#endif