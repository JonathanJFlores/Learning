#include<iostream>
using namespace std;

struct complex{
    float real, imaginary;
}z1, z2;

void resquestdata();
complex sum(complex, complex);
void show(complex);

int main(){
    resquestdata();
    complex x = sum(z1, z2);
    show(x);
    
   return 0;
}


void resquestdata(){
    cout<<"\n Write a number real:";
    cin>>z1.real;
    cout<<" Write a number imaginary:";
    cin>>z1.imaginary;

    cout<<"\n Write a number real:";
    cin>>z2.real;
    cout<<" Write a number imaginary:";
    cin>>z2.imaginary;
};

complex sum(complex z1, complex z2){
    z1.real += z2.real;
    z1.imaginary += z2.imaginary;

    return z1;
};

void show(complex c){
    cout<<"\n Result: "<<c.real<<" , "<<c.imaginary<<endl;
};