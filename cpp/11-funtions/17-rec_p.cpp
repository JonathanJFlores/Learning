#include<iostream>
using namespace std;

int sum(int);

int main(){
    int nelemnts;

    do{
        cout<<"\n Write a number: ";
        cin>>nelemnts;
    }while(nelemnts<=0);

    cout<<"\n numbers of elements is: "<<sum(nelemnts)<<endl;

   return 0;
}
//  recursive function
int sum(int n){ //base case
    int suma = 0;
    if(n==1){
        suma = 1;
    }else{ // case general
        suma = n+sum(n-1);
    }
    return suma;
}