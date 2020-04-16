#include<iostream>

using namespace std;

int main(){
    int number;

    cout<<"\n Write a number amount from 1 to 5: "; cin>>number;

    switch (number){
        case 1: cout<<" Number is 1"<<endl; break;
        case 2: cout<<" Number is 2"<<endl; break;
        case 3: cout<<" Number is 3"<<endl; break;
        case 4: cout<<" Number is 4"<<endl; break;
        case 5: cout<<" Number is 5"<<endl; break;
        default: cout<<" Number is not in range 1-5";
    }



    return 0;
}