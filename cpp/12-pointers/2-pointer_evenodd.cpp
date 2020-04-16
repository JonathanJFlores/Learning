#include<iostream>
using namespace std;

int main(){
    int number, *dir_number;
    cout<<"\n Write a number: "; cin>>number;

    dir_number = &number;
    if (*dir_number%2==0){
        cout<<"\n The number: "<<*dir_number<<" is even"<<endl;
        cout<<" Memory address: "<<dir_number<<endl;
    }else{
        cout<<"\n The number: "<<*dir_number<<" is odd"<<endl;
        cout<<" Memory address: "<<dir_number<<endl;

    }
    
    

   return 0;
}