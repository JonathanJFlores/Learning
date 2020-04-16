#include<iostream>
using namespace std;

void requestdata();
void square(float n);

float number;

int main(){
    requestdata();
    square(number);

   return 0;
};

void requestdata(){
    cout<<"\n Wtite a number: "; cin>>number;
};


    
void square(float n){
    float elevation;

    elevation = n * n;

    cout<<"\n Number is: "<<elevation<<endl;
};