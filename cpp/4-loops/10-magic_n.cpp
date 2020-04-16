#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int number, data, count = 0;

    srand(time(NULL));
    data = 1+rand()%(100);


    do{
        cout<<"\n Write a number: "; cin>>number;

        if(number>data){
            cout<<"\n Write a number less\n";
        }
        if(number<data){
            cout<<"\n Write a number greather\n";
        }
        count++;
    }while( number != data );

    cout<<"\n congratulations\n";
    cout<<"\n Number of attemps: "<<count<<endl;

    return 0;
}