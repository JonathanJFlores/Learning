#include<iostream>

using namespace std;

int main(){
    int number, data = 5;
    cout<<"\n Write a number: "; cin>>number;

    if(number != data ){
        cout<<" Number is different from 5"<<endl;
        if(number > data){
            cout<<" Number is greather than 5"<<endl;
        }else
        {
            cout<<" Number is less than 5"<<endl;
        }
        
    } else{
        cout<<" The number is 5"<<endl;
    }


    return 0;
}