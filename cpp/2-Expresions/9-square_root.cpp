#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x, y, result = 0;

    cout<<"\n Write the value of x: "; cin>>x;
    cout<<" Write the value of y: "; cin>>y;

    result = (sqrt(x))/(pow(y, 2)-1);

    cout<<"\n The result is: "<<result<<endl;
    
    return 0;
}