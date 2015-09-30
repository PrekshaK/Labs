#include <iostream>
#include <string>
#include "Single.h"
#include "Unsortedplaylist.h"
using namespace std;

int main(){
    int size;
    cout << "Please enter the number of songs you want in your playlist: \n";
    cin >>  size;

    Unsortedplaylist munsortedplaylist;
    munsortedplaylist.initialize();
    Single song;
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("favSongs.txt");
    out_stream.open("temporary.txt);

     while (!playlist.Listfull()){
        if (playlist.getlength() < 5){
            in_stream >> song.artist;
            in_stream >> song.title;
            in_stream >> song.rating;
            out_stream << song.artist << " ";
            out_stream << song.title << " ";
            out_stream << song.rating << " " << endl;
            playlist.InsertSong(song);
        }

        else{
            song = getinput();
            munsortedplaylist.InsertSong(song);
            out_stream << song.artist;
            out_stream << song.title;
            out_stream << song.rating;
        }
     }

     in_stream.close();
     out_stream.close();
     munsortedplaylist.deleteSingle();
     remove("favSongs.txt");
     char oldname[] = "tempSongs.txt";
     char newname[] = "favSongs.txt";
     rename(oldname, newname);
     return 0;


  };
