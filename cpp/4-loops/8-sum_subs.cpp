// 1-2+3-4+5-6...n

#include<iostream>

using namespace std;

int main(){
    int total_sum = 0, even= 0, elements;

    cout<<"\n Write a number: "; cin>>elements;

    for (int i = 1; i <= elements; i++){
        if(i%2==0){
            total_sum -= i;
        }else{
            total_sum += i;
        }
    }
    cout<<"\n Total is: "<<total_sum<<endl;


    return 0;
}