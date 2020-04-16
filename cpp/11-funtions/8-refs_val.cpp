#include<iostream>
using namespace std;

void change(int&, int&);

int main(){
    int num = 10;
    int num2 = 15;

    cout<<"\n Value the number 1 is: "<<num<<endl;
    cout<<"\n Value the number 2 is: "<<num2<<endl;

    change(num, num2);

    cout<<"\n new value the number 1 is: "<<num<<endl;
    cout<<"\n new value the number 2 is: "<<num2<<endl;

   return 0;
}

void change(int& n1, int& n2){
    int aux;

    aux = n1;
    n1 = n2; 
    n2 = aux;

};