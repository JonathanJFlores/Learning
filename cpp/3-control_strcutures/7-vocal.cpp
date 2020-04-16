#include<iostream>

using namespace std;

int main(){
    char letter;

    cout<<"\n Write a letter: "; cin>>letter;

    switch(letter){
        case 'a': cout<<"\n Is a tiny vowel "<<letter<<endl; break;
        case 'e': cout<<"\n Is a tiny vowel "<<letter<<endl; break;
        case 'i': cout<<"\n Is a tiny vowel "<<letter<<endl; break;
        case 'o': cout<<"\n Is a tiny vowel "<<letter<<endl; break;
        case 'u': cout<<"\n Is a tiny vowel "<<letter<<endl; break;
        case 'A': cout<<"\n Is a capital vowel "<<letter<<endl; break;
        case 'E': cout<<"\n Is a capital vowel "<<letter<<endl; break;
        case 'I': cout<<"\n Is a capital vowel "<<letter<<endl; break;
        case 'O': cout<<"\n Is a capital vowel "<<letter<<endl; break;
        case 'U': cout<<"\n Is a capital vowel "<<letter<<endl; break;
        default : cout<<"\n It's not a vowel "<<letter<<endl; break;
    }


    return 0;
}