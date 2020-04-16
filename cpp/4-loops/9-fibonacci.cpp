#include<iostream>

using namespace std;

int main(){
    int elements, x=0, y=1, z = 0;

    cout<<"\n Write a number of elements: "; cin>>elements;

    for (int i = 1; i < elements; i++){
        z = x + y;      //112
        cout<<z<<" z"<<endl;
        y = x;          //011
        cout<<"y: "<<y<<endl;
        x = z;          //112
        cout<<"x: "<<x<<endl;

    }
    
    return 0;
}