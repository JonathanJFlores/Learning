#include<iostream>
#include<stdlib.h> //new delete
using namespace std; 


void requestNotes();
void shownotes();
int nNotes, *qualift;

int main(){
    requestNotes();
    shownotes();

    delete[] qualift; //free bytes 

   return 0;
}

void requestNotes(){
    cout<<"\n Write numbers of qualification: ";
    cin>>nNotes;

    qualift = new int[nNotes];

    for(int i=0; i < nNotes; i++ ){
        cout<<"\n Write a note: ";

        cin>>qualift[i];
    } 
};

void shownotes(){
    cout<<"\n Showing notes: \n";
    for(int i=0; i<nNotes; i++ ){
        cout<<qualift[i]<<endl;
    }
};