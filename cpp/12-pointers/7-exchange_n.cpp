#include<iostream>
using namespace std;

void exchange(float *, float *);

int main(){
    float numb1=20.0, numb2 = 6.78;

    cout<<"\n number1: "<<numb1<<endl;
    cout<<" number2: "<<numb2<<endl;

    exchange(&numb1, &numb2);
    cout<<"\n Before change: "<<endl;
    cout<<"\n number1: "<<numb1<<endl;
    cout<<" number2: "<<numb2<<endl;

   return 0;
}


void exchange(float *dir_n1, float *dir_n2){
    float aux;
    
    aux = *dir_n1;
    *dir_n1 = *dir_n2;
    *dir_n2 = aux;
};