#include<iostream>

using namespace std;


template<class TYPED>
void show(TYPED data);


int main(){
    int n = 10;
    float n2 = 17.9;
    double n3 = 192.3803;
    char n4 = 'H';

    show(n);
    show(n2);
    show(n3);
    show(n4);


   return 0;
}


template<class TYPED>
void show(TYPED data){
    cout<<"\n Data is: "<<data<<endl;
};