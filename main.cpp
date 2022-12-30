#include<iostream>
struct Node{
    int data;
    Node* next;
};

void append(Node* head,int data){
    Node* temp = new Node;
    Node* pNode = head;

    temp->data = data;
    temp->next = nullptr;

    while(pNode->next != nullptr){
        pNode = pNode->next;
    }
    pNode->next = temp;
}

void insertNode(Node* head, int pos,int data){
    Node* temp = new Node;
    Node* pNode = head;
    int count =0;

    while(count <= pos+1){
        pNode = pNode->next;
        if(count == pos){
            pNode->next = temp;
            temp->data = data;
        }
    }
    temp->next = pNode;
}

void printNode(Node* head){
    Node* pNode = head;
    while(pNode->next != nullptr){
        std::cout<<pNode->data<<std::endl;
        pNode = pNode->next ;
    }
    std::cout<<pNode->data<<std::endl;
}

void sortNode(Node* head)
{
    Node *a, *b;
    int c =0;
    for(a = head; a->next != nullptr; a = a->next){
        for(b = a->next; b != nullptr;b =b->next )
        {
            if(a->data > b->data)
            {
                c = a->data;
                a->data = b->data;
                b->data = c;
            }
        }
    }
}

void reverseNode(Node* head)
{

    Node *a, *b;
    int c =0;
    for(a = head; a != nullptr; a= a->next)
    {
        for(b = a->next; b!= nullptr; b = b->next)
        {
            if(a->data < b->data)
            {
                c = a->data;
                a->data = b->data;
                b->data = c;
            }
        }
    }
}

