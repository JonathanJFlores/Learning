#include<iostream>

void exchange(float &x,float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;
}

void sortshell(float a[], int n){
    int hop, i, j, k;
    hop = n/2;

    while(hop>0){
        for(i=hop; i<n; i++){
            j= i-hop;
            while(j>=0){
                k = j+hop;
                if(a[j] <= a[k]){
                    j = -1;
                }else{
                    exchange(a[j], a[k]);
                    j -= hop;
                }
            }
        }
        hop = hop/2;
    }

}

int main(){
    float number[] = {8, 5, 2, 7, 1, 6, 3, 10, 4, 9};

    sortshell(number, 10);

    for(int i=0; i<10; i++){
        std::cout<<number[i]<<" ";
    }

    for(int i=9; i>=0; i--){
        std::cout<<number[i]<<" ";
    }

    return 0;
}