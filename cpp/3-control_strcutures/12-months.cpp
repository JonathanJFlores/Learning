#include<iostream>

using namespace std;

int main(){
    int number;

    cout<<"\n Write a number: "; cin>>number;

    switch(number){
        case 1: cout<<"\n month is January"<<endl; break;
        case 2: cout<<"\n month is February"<<endl; break;
        case 3: cout<<"\n month is March"<<endl; break;
        case 4: cout<<"\n month is April"<<endl; break;
        case 5: cout<<"\n month is May"<<endl; break;
        case 6: cout<<"\n month is June"<<endl; break;
        case 7: cout<<"\n month is July"<<endl; break;
        case 8: cout<<"\n month is August"<<endl; break;
        case 9: cout<<"\n month is September"<<endl; break;
        case 10: cout<<"\n month is October"<<endl; break;
        case 11: cout<<"\n month is November"<<endl; break;
        case 12: cout<<"\n month is December"<<endl; break;
        default: cout<<"\n month number doesn't exist"<<endl; break;
    }
    

    return 0;
}