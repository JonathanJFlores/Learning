#include<iostream>
#include<stdlib.h>

using namespace std;

void requestdata();
void showingMatrix(int **, int, int);

int **pointer_m, nrows, ncolumns;

int main(){
    requestdata();
    showingMatrix(pointer_m, nrows, ncolumns);

    // releasing memory used in matrix
    for(int r=0; r < nrows; r++ ){
         delete[] pointer_m[r];
    }

   return 0;
}

void requestdata(){
    cout<<"\n Write number of rows: ";
    cin>>nrows;
    cout<<"\n Write number of columns: ";
    cin>>ncolumns;

    pointer_m = new int*[nrows]; //reserving memory for rows
    for(int i=0; i < nrows; i++ ){
         pointer_m[i] = new int[ncolumns]; //reserving memory for columns
    }

    cout<<"\n Writting elements of matrix: ";
    for(int r=0; r<nrows; r++){
         for(int l=0; l<ncolumns; l++){
             cout<<"\n Write a number ["<<r<<"]["<<l<<"]: ";
             cin>>*(*(pointer_m+r)+l); //pointer_m[r][l]
              
         }
    }
};

void showingMatrix(int **pointer_m, int nrows, int ncol){
    for(int r=0; r < nrows; r++ ){
         for(int c=0; c < ncol; c++){
              cout<<*(*(pointer_m+r)+c)<<" "; //pointer_m[r][c]
         }
         cout<<"\n";
    }
};