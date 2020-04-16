#include<iostream>

using namespace std;

int main(){
    int number;

    cout<<"\n Write a number: "; cin>>number;

    if( number == 0){
        cout<<"\n Number is equal to zero"<<endl;
    } else if( number%2 == 0 ){
        cout<<"\n Number is even"<<endl;
    }else{
        cout<<"\n Number is odd"<<endl;
    }

    return 0;
}