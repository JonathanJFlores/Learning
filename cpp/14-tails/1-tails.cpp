#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void insertTails(Node *&, Node *&, int);
bool tail_empty(Node *inFront);
void deleteTail(Node *&, Node *&, int &);

int main(){
    Node *inFront = NULL;
    Node *end = NULL;
    int dato;

    // Insert elements in tails
    cout<<"\n Write a number: ";
    cin>>dato;
    insertTails(inFront, end, dato);

    cout<<"\n Write a number: ";
    cin>>dato;
    insertTails(inFront, end, dato);
    
    cout<<"\n Write a number: ";
    cin>>dato;
    insertTails(inFront, end, dato);

    // Delete tail elements

    cout<<"\n Deleting tail elements: ";
    while( inFront!=NULL ){
        deleteTail(inFront, end, dato);
        if( inFront!=NULL ){
            cout<<dato<<" , ";
        }else{
            cout<<dato<<"."<<endl;
        }
    }


   return 0;
};

void insertTails(Node *&inFront, Node *&end, int n){
    Node *new_node = new Node();
    new_node->data = n;
    new_node->next = NULL;

    if(tail_empty(inFront)){
        inFront = new_node;
    }else{
        end->next = new_node;
    }
    end = new_node;

    cout<<"\n Element "<<n<<" insert correctly\n";
};

bool tail_empty(Node *inFront){
    return (inFront!=NULL)? false : true; 

    // if(inFront != NULL){
    //     return false;
    // }else{
    //     return true;
    // }
};

void deleteTail(Node *&infront, Node *&end, int &n){
    n = infront->data;
    Node *aux = infront;

    if(infront == end){
        infront = NULL;
        end = NULL;
    }else{
        infront = infront -> next;
    }
};