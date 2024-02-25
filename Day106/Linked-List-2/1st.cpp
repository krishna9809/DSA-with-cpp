#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void inserAtHead(Node* &head, int data){
    Node* newnode = new Node(data);

    newnode->next = head;

    head = newnode;
}


int main(){
     Node* head = NULL;

     inserAtHead(head,10);
     inserAtHead(head,20);
     inserAtHead(head,30);
     inserAtHead(head,40);
     inserAtHead(head,50);
     inserAtHead(head,60);
     inserAtHead(head,70);
     inserAtHead(head,80);
     inserAtHead(head,90);
     inserAtHead(head,100);

     print(head);
   

}