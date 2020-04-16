#include<iostream>
using namespace std;

int factory(int);

int main(){

    cout<<"\n"<<factory(3)<<endl;
   return 0;
}

int factory(int n){
    if(n!=0){
        n = n * factory(n-1);
    }else{
        n = 1;
    }
    return n;
};