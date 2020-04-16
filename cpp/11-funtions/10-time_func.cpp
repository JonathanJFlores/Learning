#include<iostream>
using namespace std;

void time(int, int&, int&, int&);


int main(){
    int amountS, hours, minutes, seconds;

    cout<<"\n Write seconds amount: ";
    cin>>amountS;

    time(amountS, hours, minutes, seconds);

    cout<<"\n Time: "<<endl;
    cout<<" hours: "<<hours<<endl;
    cout<<" minutes: "<<minutes<<endl;
    cout<<" seconds: "<<seconds<<endl;


   return 0;
}


void time(int totals, int& h, int& m, int& s){
    h = totals/3600;
    totals %= 3600;
    m = totals/60;
    s = totals%60;
};