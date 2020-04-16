#include<iostream>

using namespace std;

int findMax(int x, int y);


int main(){
    int n1, n2, heigher;

    cout<<"\n Write a number: ";
    cin>>n1;
    cout<<" Write other number: ";
    cin>>n2;
    
    heigher = findMax(n1, n2);

    cout<<"\n The greater number is: "<<heigher<<endl;

   return 0;
}

int findMax(int x, int y){
    int numberMax;

    if(x>y){
        numberMax = x;
    }else{
        numberMax = y;
    }

    return numberMax;
};
