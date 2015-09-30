#include "Unsortedplaylist.h"
#include <iostream>
using namespace std;

void Unsortedplaylist::initialize()
{
    cout << "Please enter the number of songs you want in your playlist: \n";
    cin >> max_songs;
    songs = new Single[max_songs];
    currentpos = 0;
    length = 0;
}

int Unsortedplaylist::getlength() const{
    return length;
}

bool UnsortedPlaylist::isFull() const(){
    return (length == max_songs);
}

void UnsortedPlaylist::InsertSong(Single song{
    songs[length] = song;
}

Single UnsortedPlaylist::RetrieveSingle(int index) const{
    return songs[index];
}

void UnsortedPlaylist::deleteSingle()
{
    Single song;
    char input;
    for (int i = o; i<max_songs; i++){
        song = RetrieveSingle(i);
        cout << "Artist: "<<song.artist<<endl;
        cout << "Title" <<song.title<<endl;
        cout << "Do you really want to delte this song? (Y?N) \n";
        cin >> input;

        if (input == "y" || reply == "Y"){
            for (int j=i+1; j <max_songs; j++){
                songs[j-1] = songs[j];
            }
            max_songs--;
        }
    }
}







