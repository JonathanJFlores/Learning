#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    Node *next;
};

void addPile(Node *&, int);

int main(){
    Node *pile = NULL;
    int n1, n2;

    cout<<"\n Write a number: ";
    cin>>n1;
    addPile(pile, n1);
    cout<<"\n Write other number: ";
    cin>>n2;
    addPile(pile, n2);

   return 0;
}

void addPile(Node *&pile, int n){
    Node *new_node = new Node();
    new_node->data = n;
    new_node->next = pile;
    pile = new_node;

    cout<<" Element "<<n<<" added correctly"<<endl;
}