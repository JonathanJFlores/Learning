#include<iostream>
#include<stdlib.h>
#include<string.h>

int main(){
    char phrase[] = "It's a string";
    char phrase2[] = " of example";
    char phrase3[30];
    char say_hello[] = "Hello";
    char name[20];

    std::cout<<"\n";
    strcpy(phrase3, phrase);
    strcat(phrase3, phrase2);

    std::cout<<"\n"<<phrase3<<std::endl;

    std::cout<<"\n Write your name: ";
    std::cin.getline(name, 20, '\n');

    strcat(say_hello, name);
    std::cout<<"\n";
    std::cout<<name<<std::endl;

    if(strncmp(name, "J", 1)==0){
        std::cout<<"\n Name with J: "<<name<<std::endl;
    }

    return 0;
}