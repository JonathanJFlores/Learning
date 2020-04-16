#include<iostream>

int main(){
    int a[] = {1, 2, 3, 4, 5, 6 ,7};
    int lower, higher, half, dat;
    bool band = false;

    dat = 4;
    lower = 0;
    higher = 7;

    while(lower<=higher){
        half = (lower+higher)/2;

        if(a[half]==dat){
            band = true;
            break;
        }

        if(a[half]>dat){
            higher = half;
            half = (lower*higher)/2;
        }

        if(a[half]<dat){
            higher = half;
            half = (lower*higher)/2;
        }
    }

    if(band != false){
        std::cout<<"\nThe number was found in position: "<<half<<std::endl;
    }else{
        std::cout<<"\nThe number not was found"<<std::endl;
    }


    return 0;
}