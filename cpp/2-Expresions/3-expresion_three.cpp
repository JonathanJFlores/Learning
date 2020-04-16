#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, e, f, result = 0;

    cout<<"\n Write the value of a: "; cin>>a;
    cout<<" Write the value of b: "; cin>>b;
    cout<<" Write the value of c: "; cin>>c;
    cout<<" Write the value of d: "; cin>>d;
    cout<<" Write the value of e: "; cin>>e;
    cout<<" Write the value of f: "; cin>>f;

    result = (a+(b/c))/(d+(e/f));
    cout.precision(2);

    cout<<"\n Result is: "<<result<<endl;
    
    return 0;
}