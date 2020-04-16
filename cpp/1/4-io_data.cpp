#include<iostream>

using namespace std;

int main(){
    int number1, number2;
    int sum = 0;
    int subtraction = 0;
    int multiplication = 0;
    int division = 0;

    cout<<"Type a number: "; cin>>number1;
    cout<<"Type a other number: "; cin>>number2;

    sum = number1 + number2;
    subtraction = number1 - number2;
    multiplication = number1 * number2;
    division = number1 / number2;

    cout<<"\n The sum is: "<<sum<<endl;
    cout<<"\n The subtraction is: "<<subtraction<<endl;
    cout<<"\n The multipliation is: "<<multiplication<<endl;
    cout<<"\n The division is: "<<division<<endl;



    return 0;
}