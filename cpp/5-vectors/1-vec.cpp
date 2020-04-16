#include<iostream>

using namespace std;

int main(){
    int sum = 0, multiply = 1;
    
    int number[] ={1, 7, 3, 10, 5};
    cout<<"\n"<<number[2]<<endl;

    char letter[] = {'a', 'b', 'c'};
    cout<<"\n"<<letter[0]<<endl;

    float note[] = {8.5, 7.5, 8.3};
    cout<<"\n"<<note[2]<<endl;

    for(int i = 0; i<=4; i++){
        sum += number[i];
        multiply *= number[i];
    }

    cout<<"\n sum is: "<<sum<<endl;
    cout<<"\n multiplication is: "<<multiply<<endl;


    return 0;
}