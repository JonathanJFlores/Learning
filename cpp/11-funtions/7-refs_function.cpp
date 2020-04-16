#include<iostream>
using namespace std;

void newNumber(int&, int&);


int main(){
    int num1, num2;
    cout<<"\n Write a number: ";
    cin>>num1;
    cout<<"\n Write a number: ";
    cin>>num2;

    newNumber(num1, num2);

   return 0;
}

void newNumber(int& xnum, int& ynum){
    cout<<"\n number one: "<<xnum<<endl;
    cout<<" number two: "<<ynum<<endl;

}