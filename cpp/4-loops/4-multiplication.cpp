#include<iostream>

using namespace std;

int main(){
    int number;


    do{
        cout<<"\n Write a number: "; cin>>number;
    } while( number<1 || number>10);

    for(int i = 1; i<=10; i++){
        cout<<i<<"*"<<number<<" = "<<number*i<<endl;
    }


    return 0;
}