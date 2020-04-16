#include<iostream>
using namespace std;

void requestdata();
int calculatesum(int vec[], int);

int vec[100], sizes;

int main(){
    requestdata();
    cout<<"\n The sum of elements is: "<<calculatesum(vec, sizes)<<endl;


   return 0;
}

void requestdata(){
    cout<<"\n Write number of elements: ";
    cin>>sizes;

    for(int i=0; i<sizes; i++){
        cout<<i+1<<" Write a data: ";
        cin>>vec[i];
    }
};

int calculatesum(int vec[], int sizes){
    int sum=0;

    for(int i=0; i<sizes; i++){
        sum += vec[i];
    }
    return sum;
};

