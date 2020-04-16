#include<iostream>

using namespace std;

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int numbers2[5];
    char letter1[] = {'a','b', 'c', 'd'};
    char letter2[] = {'e','f', 'g', 'h'};
    char vec[8];

    for(int i=0; i<5; i++){
        numbers2[i] = numbers[i]*2;
        cout<<numbers[i]<<"*"<<2<<"="<<numbers2[i]<<endl;
    }

    for(int i=0; i<5; i++){
        vec[i] = letter1[i];
    }

    for(int i=5; i<8; i++){
        vec[i] = letter2[i-4];
    }

    for(int i=0; i<8; i++){
        cout<<vec[i]<<endl;
    }

    return 0;
}