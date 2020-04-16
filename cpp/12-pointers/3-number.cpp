#include<iostream>
using namespace std;

int main(){
    int number, *dir_number, cont = 0;
    cout<<"\n Write a number: "; cin>>number;

    dir_number = &number;

    for(int i=1; i<*dir_number; i++ ){
        if(*dir_number%i==0){
            cont++;
        }
         
    }

    if(cont>2){
        cout<<"\n Number "<<*dir_number<<" is not cousin"<<endl;
        cout<<"\n address number "<<dir_number<<endl;
    }else{
        cout<<"\n Number "<<*dir_number<<" is cousin"<<endl;
        cout<<"\n address number "<<dir_number<<endl;
    }

   return 0;
}