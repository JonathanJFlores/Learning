#include<iostream>
using namespace std;

void square(int vec[], int);
void show(int vec[], int);

int main(){
    const int size = 5;
    int vec[size] = {1, 2, 3, 4, 5};

    square(vec, size);
    show(vec, size);

   return 0;
}

void square(int vec[], int size){
    for(int i=0; i<size; i++){
        vec[i] *= vec[i];
    }
};

void show(int vec[], int size){
    for(int i=0; i<size; i++){
        cout<<" "<<vec[i]<<endl;
    }
};