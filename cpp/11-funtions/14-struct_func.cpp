#include<iostream>
using namespace std;

struct person{
    char name[30];
    int age;
}person1;


void requestdata();
void showingdata(person);

int main(){
    requestdata();
    showingdata(person1);

   return 0;
}

void requestdata(){
    cout<<"\n Write a name: ";
    cin.getline(person1.name, 30, '\n');
    cout<<" Write your age: ";
    cin>>person1.age;


};

void showingdata(person p){
    cout<<"\n name: "<<p.name<<endl;
    cout<<" age: "<<p.age<<endl;

};