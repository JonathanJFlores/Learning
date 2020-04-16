#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a, b, c, result_p = 0, result_n;

    cout<<"\n Write de value of a: "; cin>>a;
    cout<<" Write de value of b: "; cin>>b;
    cout<<" Write de value of c: "; cin>>c;

    result_p = (-b+(sqrt(pow(b, 2)-(4*a*c))))/(2*a);
    result_n = (-b-(sqrt(pow(b, 2)-(4*a*c))))/(2*a);

    cout<<"\n The result one is: "<<result_p<<endl;
    cout<<"\n The result two is: "<<result_n<<endl;

    return 0;
}