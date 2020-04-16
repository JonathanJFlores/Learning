#include<iostream>


struct Person{
    char name[20];
    int  age;
}

person1 = {"Jonathan", 20},
person2 = {"Rosa", 18},
person3;

int main(){
    std::cout<<"\nName: "<<person1.name<<std::endl;
    std::cout<<"Age: "<<person1.age<<std::endl;

    std::cout<<"\nName: "<<person2.name<<std::endl;
    std::cout<<"Age: "<<person2.age<<std::endl;

    std::cout<<"\nWrite your name: ";
    std::cin.getline(person3.name, 20, '\n');
    std::cout<<"\nWrite your Age: ";
    std::cin>>person3.age;

    std::cout<<"\nName: "<<person3.name<<std::endl;
    std::cout<<"Age: "<<person3.age<<std::endl;



    return 0;
}