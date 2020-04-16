#include<iostream>
using namespace std;

int findMax(int *, int);

int main(){
    const int nElements = 5;
    int numbers[nElements] = {3, 8, 1, 2, 4};

    cout<<"\n The greater element is: "<<findMax(numbers, nElements)<<endl;

   return 0;
}

int findMax(int *dir_vec, int nElements){
    int max = 0;

    for(int i=0; i < nElements; i++ ){
        if(*(dir_vec+i)>max){
            max = *(dir_vec+i);
        }
    }
    return max;
};