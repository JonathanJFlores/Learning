#include<iostream>

using namespace std;

int main(){
    int rows = 0, columns =0;
    char letter [100][100];

    int number[3][3] ={{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}
                                };
    cout<<number[0][0]<<endl;
    cout<<number[1][1]<<endl;
    cout<<number[2][2]<<endl;

    cout<<"\n Write number of rows: "; cin>>rows;
    cout<<"\n Write number of columns: "; cin>>columns;

    // Storing elements in matrix
    for(int i=0; i<rows; i++){
        for(int l=0; l<columns; l++){
            cout<<"\n Write a letter["<<i<<"]["<<l<<"]: ";
            cin>>letter[i][l];
        }
    }

    // showing matrix
    for(int i=0; i<rows; i++){
        for(int l=0; l<columns; l++){
            cout<<"\n["<<i<<"]["<<l<<"]: "<<letter[i][l]<<endl;
        }
    }



    return 0;
}