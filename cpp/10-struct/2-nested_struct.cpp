#include<iostream>
#include<stdlib.h>


struct inf_address{
    char address[30];
    char city[20];
    char province[20];
};

struct employee{
    char name[20];
    struct inf_address ad_employee;
    double salary;
}employees[2];




int main(){

    for(int i=0; i<2; i++){
        fflush(stdin);
        std::cout<<"\n Write your name: ";
        std::cin.getline(employees[i].name, 20, '\n');
        std::cout<<"\n Write your address: ";
        std::cin.getline(employees[i].ad_employee.address, 30, '\n');
        std::cout<<"\n Write your city: ";
        std::cin.getline(employees[i].ad_employee.city, 20, '\n');
        std::cout<<"\n Write your province: ";
        std::cin.getline(employees[i].ad_employee.province, 20, '\n');
        std::cout<<"\n Write your salary: ";
        std::cin>>employees[i].salary;
        std::cout<<"\n";
    }

    for(int i=0; i<2; i++){
        std::cout<<"Name: "<<employees[i].name<<std::endl;
        std::cout<<"Address: "<<employees[i].ad_employee.address<<std::endl;
        std::cout<<"City: "<<employees[i].ad_employee.city<<std::endl;
        std::cout<<"Province: "<<employees[i].ad_employee.province<<std::endl;
        std::cout<<"Salary: "<<employees[i].salary<<std::endl;

    }

    return 0;
}