#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float cathetus_a, cathetus_b, hypotenuse = 0;

    cout<<"\n Write cathetus a: "; cin>>cathetus_a;
    cout<<" Write cathetus b: "; cin>>cathetus_b;

    hypotenuse = sqrt(pow(cathetus_a, 2)+pow(cathetus_b, 2));

    cout.precision(2);
    cout<<"\n The hypotenuse is: "<<hypotenuse<<endl;

    return 0;
}