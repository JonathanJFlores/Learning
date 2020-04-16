#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, result = 0;

    cout<<"\n Write de value of a: "; cin>>a;
    cout<<" Write de value of b: "; cin>>b;
    cout<<" Write de value of c: "; cin>>c;
    cout<<" Write de value of d: "; cin>>d;

    result = (a+b)/(c+d);

    cout.precision(2);
    
    cout<<"\n The result is: "<<result<<endl;

    return 0;
}