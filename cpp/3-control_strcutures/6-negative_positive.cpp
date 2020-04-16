#include<iostream>
using namespace std;

int main(){
    int number;
     cout<<"\n Write a number: "; cin>>number;

     if( number == 0 ){
         cout<<"\n The number is zero"<<endl;   
     }else if( number > 0 ){
         cout<<"\n The number is positive"<<endl;   
     }else{
         cout<<"\n The number is negative"<<endl;   
     }


    return 0;
}