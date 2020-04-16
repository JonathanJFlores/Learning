#include<iostream>
using namespace std;

int main(){
    int num, *dir_num;
    num = 19;
    dir_num = &num;

    cout<<"\n Number: "<<*dir_num<<endl;
    cout<<"\n Memory address number: "<<&num<<endl;
    cout<<"\n Memory address number: "<<dir_num<<endl;

   return 0;
}