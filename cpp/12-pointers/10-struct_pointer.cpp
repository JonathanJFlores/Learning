#include<iostream>
using namespace std;

struct Person{
    char name[30];
    int age;
}person, *point_p = &person;

void requestdata();
void showingdata(Person *);

int main(){
    requestdata();
    showingdata(point_p);

   return 0;
}

void requestdata(){
    cout<<"\n Write your name: ";
    cin.getline(point_p->name, 30, '\n');
    cout<<" Write age: ";
    cin>>point_p->age;
};


void showingdata(Person *point_person){
    cout<<"\n Your name: "<<point_person->name<<endl;
    cout<<" Your age: "<<point_person->age<<endl;
};