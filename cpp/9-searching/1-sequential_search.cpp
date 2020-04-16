#include<iostream>

int main(){
    int a[] = {4, 3, 2, 1, 7, 6};
    int i, data;
    bool band = false;
    data = 6;

    i=0;
    while( (band ==false) && (i<6) ){
        if(a[i] == data){
            band = true;
        }
        i++;
    }

    if(band==true){
        std::cout<<"\n The number was found in position: "<<i-1<<std::endl;
    }else{
        std::cout<<"\n The number not found"<<std::endl;
    }


    return 0;
}