#include<iostream>
using namespace std;

int main(){
    int nElements, number[100], *dir_numbers, less = 999;
    cout<<"\n Write numbers of elements: "; cin>>nElements;

    for(int i=0; i < nElements; i++ ){
        cout<<"\n Write a number["<<i<<"] : "; cin>>number[i]; 
    }

    dir_numbers = number;

    for(int i=0; i < nElements; i++ ){
         if(*dir_numbers<less){
             less = *dir_numbers;
         }
         dir_numbers++;
    }


    cout<<"\n Less number is: "<<less<<endl;

   return 0;
}