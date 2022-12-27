#pragma once

struct Node{
    int data;
    struct Node* next;
};
void append(struct Node* head,int data);
void insertNode(struct Node* head, int pos,int data);
void printNode(struct Node* head);

