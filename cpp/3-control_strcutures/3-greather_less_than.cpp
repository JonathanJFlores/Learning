#include<iostream>

using namespace std;

int main(){
    int number_one, number_two;

     cout<<"\n Write a number one: "; cin>>number_one;
     cout<<" Write a number two: "; cin>>number_two;

     if(number_one > number_two){
         cout<<"\n Number one is greather than number two"<<endl;
     } else if (number_one == number_two){
         cout<<"\n Number one is equal to number two"<<endl;
     } else{
         cout<<"\n Number one is less than number two"<<endl;
     }

    return 0;
}