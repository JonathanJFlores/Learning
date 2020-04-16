#include<iostream>
using namespace std;

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int *dir_numbers;

    dir_numbers = numbers;
    for(int i=0; i < 5; i++){
        //  cout<<"\n Element of vector["<<i<<"]: "<<*dir_numbers++<<endl;
         cout<<"\n Memory positions of vector["<<i<<"]: "<<dir_numbers++<<endl;
    }
   return 0;
}