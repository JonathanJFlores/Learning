#include<iostream>
#include<string.h>

int main(){
    char word[] = "Jonathan Flores";
    char word2[] ={'J','o','n','a','t','h','a','n'}; 
    char name[30];
    char note[] = "Jhon type in his computer";
    char note2[50];

    strncpy(note2, note, 30);

    std::cout<<"\n Copy :"<<note2<<std::endl;

    std::cout<<"\n Write your name: ";
    std::cin.getline(name, 30, '\n');

    // std::cout<<name<<std::endl;

    if(strlen(name)>10){
        std::cout<<"\n";
        std::cout<<strlen(word);
        std::cout<<"\n";
    }else{
        std::cout<<"\n String is lees than 10"<<std::endl;
    }

    // std::cout<<word<<std::endl;
    // std::cout<<word2<<std::endl;

    return 0;
}