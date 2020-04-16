#include<iostream>

using namespace std;

int main(){
    float a, b, result = 0;
    cout<<"\n Write the value of a : "; cin>>a;
    cout<<" Write the value of b: "; cin>>b; 

    result = (a/b)+1;

    cout.precision(2);
    cout<<"\n Result is: "<<result<<endl;

    return 0;
}