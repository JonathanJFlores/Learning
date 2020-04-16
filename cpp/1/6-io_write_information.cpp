#include<iostream>

using namespace std;

int main(){
    int age = 0;
    char sex[10];
    float height = 0.0;

    cout<<"\n Write your age: "; cin>>age;
    cout<<"Write your sex: "; cin>>sex;
    cout<<"Write your height in meters: "; cin>>height;

    cout<<"\n Your age is: "<<age<<" sex: "<<sex<<" height in meters: "<<height<<endl;
    return 0;
}