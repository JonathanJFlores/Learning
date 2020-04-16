#include<iostream>
#include<string.h>


struct runner{
    char name[20];
    int age;
    char sex[10];
    char club[20];
}runner1;

int main(){
    char category[20];
    fflush(stdin);

    std::cout<<"\n Write your name: ";
    std::cin.getline(runner1.name, 20, '\n');
    std::cout<<"\n Write your age: ";
    std::cin>>runner1.age;
    fflush(stdin);
    std::cout<<"\n Write your sex: ";
    std::cin.getline(runner1.sex, 10, '\n');
    std::cout<<"\n Write your club: ";
    std::cin.getline(runner1.club, 20, '\n');

    if(runner1.age<= 18){
        strcpy(category, "Youth");
    }else if(runner1.age<=40){
        strcpy(category, "Sir");
    }else{
        strcpy(category, "Veteran");
    }

    std::cout<<"\n Name: "<<runner1.name<<std::endl;
    std::cout<<"\n Age: "<<runner1.age<<std::endl;
    std::cout<<"\n Sex: "<<runner1.sex<<std::endl;
    std::cout<<"\n Club: "<<runner1.club<<std::endl;
    std::cout<<"\n Category: "<<category<<std::endl;





}