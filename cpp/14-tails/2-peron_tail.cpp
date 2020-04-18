#include<iostream>
#include<stdlib.h>
using namespace std;

struct Client{
    char name[30];
    char key[10];
    int age;
};

struct Node{
    Client c;
    Node *next;
};

void insertClient(Client &);
void insertElement(Node *&, Node *&, Client);
bool tail_empty(Node *);
void deleteTail(Node *&, Node *&, Client &);

int main(){
    Node *front = NULL;
    Node *end = NULL;
    Client c;
    char response;

    do{
        insertClient(c); //upload client data 
        insertElement(front, end, c); //add new client
        cout<<"\t Do you want to add a new client(s/n): ";
        cin>>response;
    }while((response=='S')||(response=='s'));

    cout<<"\n Successful clients load\n";
    cout<<"\t Clients added to tail: \n\n";

    while(front != NULL){
        deleteTail(front, end, c);
        cout<<" Name:"<<c.name<<endl;
        cout<<" Key:"<<c.key<<endl;
        cout<<" Age:"<<c.age<<endl;
        cout<<"\n";
    }

   return 0;
}

void insertClient(Client &c){
    cout<<"\t Add new client:\n";
    cout<<" Name: "; cin.getline(c.name, 30, '\n');
    cout<<" Key: "; cin.getline(c.key, 10, '\n');
    cout<<" Age: "; cin>>c.age;
    cout<<"\n";
};

void insertElement(Node *&front, Node *&end, Client c){
    Node *new_node = new Node();
    new_node->c = c;
    new_node->next= NULL;

    if(tail_empty(front)){
        front = new_node;
    }else{
        front->next = new_node;
    }
    end = new_node;
};

bool tail_empty(Node *front){
    return (front!=NULL)? false : true;
};

void deleteTail(Node *&front, Node *&end, Client &c){
    c = front->c;
    Node *aux = front;
    
    if(front==end){
        front == NULL;
        end == NULL;
    }else{
        front = front->next;
    }

};