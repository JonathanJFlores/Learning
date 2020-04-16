#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, result = 0;

    cout<<"\n Write the value of a: "; cin>>a;
    cout<<" Write the value of b: "; cin>>b;
    cout<<" Write the value of c: "; cin>>c;
    cout<<" Write the value of d: "; cin>>d;

    result = a+(b/(c-d));

    cout<<"\n The result is: "<<result<<endl;
    
    return 0;
}