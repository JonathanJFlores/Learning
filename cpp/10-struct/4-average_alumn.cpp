#include<iostream>

struct Alumn{
    char name[20];
    int age;
    float average;
}alumn[3];

int main(){
    float heigher = 0;
    int prev;

    for(int i=0; i<3; i++){
        fflush(stdin);
        std::cout<<i+1<<"\n Write your name: ";
        std::cin.getline(alumn[i].name, 20, '\n');
        std::cout<<i+1<<" Write your age: ";
        std::cin>>alumn[i].name;
        std::cout<<i+1<<" Write your average: ";
        std::cin>>alumn[i].average;
        std::cout<<"\n";

        if(alumn[i].average>heigher){
            heigher = alumn[i].average;
            prev = i;
        }

        std::cout<<"\n Name: "<<alumn[prev].name<<std::endl;
        std::cout<<"\n Age: "<<alumn[prev].age<<std::endl;
        std::cout<<"\n Average: "<<alumn[prev].average<<std::endl;


    }
    return 0;
}