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

    cout<<"\n Write a number: ";
    cin>>data;
    addPile(pile, data);

    cout<<"\n Write other number: ";
    cin>>data;

    addPile(pile, data);

    cout<<"\n Delete pile: ";
    while(pile!=NULL){
        deletePile(pile, data);
        if(pile!=NULL){
            cout<<data<<" , "<<endl;
        }else{
            cout<<data<<"."<<endl;
        }
    }


   return 0;
}

void addPile(Node *&pile, int n){
    Node *new_node = new Node();
    new_node->data = n;
    new_node->next = pile;
    pile = new_node;

    cout<<" Element "<<n<<" added correctly"<<endl;
}

void deletePile(Node *&pile, int &n){
    Node *aux = pile;
    n = aux->data;
    pile = aux->next;
    delete aux;
};