#include<iostream>

using namespace std;

int main(){
    int number, count = 0;

    do{
        cout<<"\n Write a number: "; 
        cin>>number;

        if( number>0 ){
            count++;
        }
    }while( number !=0 );

    cout<<"\n Count is: "<<count<<endl;


    return 0;
}