// 2^1+2^2+2^3+...+2^n

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int sum = 0, elevation = 0, n;

    cout<<"\n Write a number: "; cin>>n;

    for(int i = 1; i<=n; i++){
        elevation = pow(2, i);
        sum+= elevation;
    }

    cout<<"\n The total is: "<<sum<<endl;

    return 0;
}