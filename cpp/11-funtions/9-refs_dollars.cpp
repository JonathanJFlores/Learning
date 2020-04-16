#include<iostream>
using namespace std;

void change(int, int&, int&, int&, int&, int&, int&);

int main(){
    int value, hundred, fifty, twenty, ten, five, one;

    cout<<"\n Write dollars amount: "; cin>>value;

    change(value, hundred, fifty, twenty, ten, five, one);

    cout<<"\n dollars amount change: "<<endl;
    cout<<"hundred: "<<hundred<<endl;
    cout<<"fifty: "<<fifty<<endl;
    cout<<"twenty: "<<twenty<<endl;
    cout<<"ten: "<<ten<<endl;
    cout<<"five: "<<five<<endl;
    cout<<"one: "<<one<<endl;

   return 0;
}


void change(int value, int& hund, int& fif, int& twet, int& ten, int& fiv, int& one){
    hund = value/100;
    value %= 100;
    fif = value/50;
    value %= 50;
    twet = value/20;
    value %= 20;
    ten = value/10;
    value %= 10;
    fiv = value/5;
    one = value%5;
    // value %= 5;

};