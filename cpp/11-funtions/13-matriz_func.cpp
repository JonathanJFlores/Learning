#include<iostream>
using namespace std;

void showM(int m[][3], int , int);
void calculateSquare(int m[][3], int, int);
void showmatrixelevat(int m[][3], int, int);

int main(){
    const int nRows = 2;
    const int nColumns = 3;

    int matrix[nRows][nColumns] ={{1, 2, 3}, {4, 5, 6}};
    showM(matrix, nRows, nColumns);
    calculateSquare(matrix, nRows, nColumns);
    showmatrixelevat(matrix, nRows,nColumns);

   return 0;
}

void showM(int m[][3], int nRows, int nColumns){
    cout<<"\n Showing matrix origin:"<<endl;
    for(int r=0; r < nRows; r ++ ){
        for(int c=0; c < nColumns; c++ ){
             cout<<m[r][c]<<"";
        }
        cout<<"\n";
    }
};

void calculateSquare(int m[][3], int nrows, int ncolumns){
    for(int r=0; r < nrows; r++ ){
        for(int c=0; c < ncolumns; c++ ){
             m[r][c] *= m[r][c];
        }
    }

};


void showmatrixelevat(int m[][3], int rows, int colum){
     cout<<"\n Showing matrix elevate: \n"<<endl;
    for(int r=0; r < rows; r ++ ){
        for(int c=0; c < colum; c++ ){
             cout<<m[r][c]<<" ";
        }
        cout<<"\n";
    }

};