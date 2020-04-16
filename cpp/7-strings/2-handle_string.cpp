#include<iostream>
#include<string.h>

int main(){
    char phrase[20];
    char phrase_two[20];
    char word[] = "calculator";
    char word_two[] = "pencil";

    std::cout<<"\n Write a phrase: ";
    std::cin.getline(phrase, 20, '\n');

    strncpy(phrase_two, phrase, 20);
    std::cout<<phrase_two<<std::endl;

    std::cout<<"\n";

    if(strcmp(word, word_two)!=0){
        std::cout<<"\n Strings are not same"<<std::endl;
        if(strcmp(word, word_two)<0){
            std::cout<<word<<std::endl;
        }else{
            std::cout<<word_two<<std::endl;
        }
    }else{
        std::cout<<"\n Strings are same"<<std::endl;
        
    }

    // std::cout<<strcmp(word, word_two)<<std::endl;

    return 0;
}