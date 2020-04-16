#include<iostream>

int main(){
    int numbers[] = {5, 6, 7, 8, 9, 1, 3, 4, 2};
    int aux, min;

    for(int i=0; i<9; i++){
        min = i;
        for(int j=i+1; j<9; j++){
            if(numbers[j]<numbers[min]){
                min = j;
            }
        }
        aux = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = aux;
    }


    for(int i=0; i<9; i++){
        std::cout<<numbers[i]<<" ";
    }


    return 0;
}