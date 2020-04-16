#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int data; 
    int n[3][3] ={1, 2, 3,
                  4, 5, 6,
                  7, 8, 9};

    int numbers[3][3];
    int numbers2[3][3];

    srand(time(NULL));

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            data= 1+rand()%(100);
            numbers[i][j] = data;
        }
        
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            numbers2[i][j] = numbers[i][j];
        }
        
    }
    cout<<"\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            cout<<numbers2[j][i]<<" ";
        }
        cout<<"\n";
        
    }

    cout<<"\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            cout<<numbers2[i][j]<<" ";
        }
        cout<<"\n";
        
    }


    cout<<"\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            cout<<n[i][j]<<" ";
        }
        cout<<"\n";
        
    }

    cout<<"\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            cout<<n[i][j] + numbers[i][j] <<" ";
        }
        cout<<"\n";
        
    }

    cout<<"\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            cout<<n[i][j] * numbers[i][j] <<" ";
        }
        cout<<"\n";
        
    }
}