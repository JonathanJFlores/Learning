#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void addPile(Node *&, int);
void deletePile(Node *&, int &);

int main(){
    Node *pile = NULL;
    int data;
    char response;
    
    do{
        cout<<" Write a number: ";
        cin>>data;
        addPile(pile, data);

        cout<<"\n Do you want add another element to pile(s/n): ";
        cin>>response;
    }while((response=='S')||(response=='s'));

    cout<<"\n Pulling out pile elements: ";

    while(pile != NULL){
        deletePile(pile, data);
        if(pile!=NULL){
            cout<<data<<",";
        }else{
            cout<<data<<"."<<endl;
        }
    }

   return 0;
}

void addPile(Node *&pile, int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = pile;
    pile = new_node;

    cout<<"\t Element "<<data<<" added to pile correctly";
};

void deletePile(Node *&pile, int &n){
    Node *aux = pile; 
    n = aux->data;
    pile = aux->next;
    delete aux;
};