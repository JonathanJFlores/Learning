#include<iostream>

using namespace std;

int main(){
    int number_a, number_b, number_c;

    cout<<"\n Write number one: "; cin>>number_a;
    cout<<" Write number two: "; cin>>number_b;
    cout<<" Write number three: "; cin>>number_c;

    if( number_a > number_b && number_a > number_c ){
        cout<<"\n Number greather is one"<<endl;
    } else if( number_b > number_c && number_a < number_b ){
        cout<<"\n Number greather is two"<<endl;
    } else if( number_c > number_a && number_c > number_b){
        cout<<"\n Number greather is three"<<endl;
    } else {
        cout<<"\n Three numbers are equal"<<endl;
    }
    

    return 0;
}