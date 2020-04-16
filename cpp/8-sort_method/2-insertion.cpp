#include<iostream>

int main(){
    int numbers[] = {5, 3, 1, 2, 4};
    int n_pos, aux;

    for(int i=0; i<5; i++){
        n_pos = i;
        aux = numbers[i];

        while((n_pos>0) && (numbers[n_pos-1]>aux)){
            numbers[n_pos] = numbers[n_pos-1];
            n_pos--;
        }
        numbers[n_pos] = aux;
    }

    for(int i=0; i<5;i++){
        std::cout<<numbers[i]<<std::endl;
    }

    for(int i=4; i>=0;i--){
        std::cout<<numbers[i]<<std::endl;
    }

    return 0;
}