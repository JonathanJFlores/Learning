#include<iostream>

using namespace std;

int main(){
    int x, y, aux;
    cout<<"\n Write the value of x: "; cin>>x;
    cout<<"\n Write the value of y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\n The new value of x is : "<<x<<endl;
    cout<<" The new value of y is: "<<y<<endl;

    return 0;
}