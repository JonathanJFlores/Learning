#include<iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4;

    cout<<"\n Write number one: "; cin>>n1;
    cout<<" Write number two: "; cin>>n2;
    cout<<" Write number three: "; cin>>n3;
    cout<<" Write number four: "; cin>>n4;

    if( n4 == n1){
        cout<<"\n Number four is equal to number one"<<endl;
    }else if( n4 == n2 ){
        cout<<"\n Number four is equal to number two"<<endl;
    }else if( n4 == n3 ){
        cout<<"\n Number four is equal to number three"<<endl;
    } else {
        cout<<"\n Number four is different to three numbers"<<endl;
    }

    if( n1 == n4 || n2 == n4 || n3 ==n4 ){
        cout<<"\n Number four is not different to three numbers"<<endl;
    }else{
        cout<<"\n Number four is different to three numbers"<<endl;
    }
    

    return 0;
}