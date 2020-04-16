#include<iostream>

using namespace std;

int main(){
    int sum = 0, sqrt;
    for(int i=1; i<=10; i++){
        sqrt = i * i;
        sum += sqrt;
    } 

    cout<<"\n the result is: "<<sum<<endl;
    
    return 0;
}