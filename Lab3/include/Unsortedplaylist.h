#ifndef UNSORTEDPLAYLIST_H
#define UNSORTEDPLAYLIST_H
#include <iostream>
#include "Single.h"
using namespace std;


class Unsortedplaylist
{
public:
   void initialize();
    bool IsFull() const;
    int LengthIs() const;
    void RetrieveSingle(Single& item, int index);
    void InsertSingle(Single item);
    void DeleteSingle(Single item);


private:
    int length;
    Single* songs;
    int currentPos;
    int max_songs;

};

#endif
