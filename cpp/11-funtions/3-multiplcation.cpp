#include<iostream>
using namespace std;

void requestData();
void multiply(float x, float y);

float number1, number2;

int main(){
    requestData();
    multiply(number1, number2);


   return 0;
}

void requestData(){

    cout<<"\n Write a number: "; cin>>number1;
    cout<<"\n Write other number: "; cin>>number2;
};


void multiply(float x, float y){

    float multiplication = x*y;

    cout<<"\n Multiplication is: "<<multiplication<<endl;
};