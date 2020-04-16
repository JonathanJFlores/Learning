#include<iostream>
using namespace std;

template<class TYPED>
void showAbs(TYPED number);

int main(){
    int number1 = -4;
    float number2 = -45.9;
    double number3 = -134.1292;

    showAbs(number1);
    showAbs(number2);
    showAbs(number3);

   return 0;
}

template<class TYPED>
void showAbs(TYPED number){
    if(number<0){
        number = number *-1;
    }
    cout<<"\n number is: "<<number<<endl;


};