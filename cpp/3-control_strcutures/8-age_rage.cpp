#include<iostream>

using namespace std;

int main(){
    int age = 0;

    cout<<"\n Write your age: "; cin>>age;

    if( age >= 18 && age <= 25 ){
        cout<<"\n Your age: "<<age<<" is in the range from 18 to 25 years"<<endl;
    } else {
        cout<<"\n Your age: "<<age<<" is not in the range from 18 to 25 years"<<endl;
    }

    return 0;
}