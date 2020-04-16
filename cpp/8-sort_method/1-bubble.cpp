#include<iostream>

int main(){
    int array[] = {6, 5, 4, 7, 3, 2, 8, 9 ,1};
    int aux;

    // method bubble
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(array[j]>array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    for(int l=0; l<9; l++){
        std::cout<<array[l]<<std::endl;
    }


    return 0;
}