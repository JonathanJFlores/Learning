#include<iostream>

void exchange(float &x, float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int first, int lastest){
    int i, j, center;
    float pivot;

    center = (first+lastest)/2;
    pivot = a[center];
    i = first;
    j = lastest;

    do{
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;

        if(i<=j){
            exchange(a[i], a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    // 
    if(first<j){
        quickSort(a, first, j);
    }

    if(i < lastest){
        quickSort(a, i, lastest);
    }

}

int main(){

    float number[] = {8, 5, 3, 4, 2, 7, 1, 9, 6, 10};

    quickSort(number, 0, 9);

    for(int i=0; i<10; i++){
        std::cout<<number[i]<<"|";
    }

    std::cout<<"\n"<<std::endl;

    for(int i=9; i>=0; i--){
        std::cout<<number[i]<<"|";
    }
    return 0;
}