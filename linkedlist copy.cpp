#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};

Node *HEAD = NULL;

// insert At the beginning of linkedList
void insertFromStart(int value);

// insert At the End of linkedList
void insertFromEnd(int value);

// delete key from linkedList
void deleteKey(int key);
// Display Linkedlist
void Display();

int main(){

    insertFromStart(1);
    insertFromStart(2);
    insertFromStart(3);
    insertFromEnd(4);
    insertFromEnd(5);
    deleteKey(5);
    Display();
    return 0;
}

void insertFromStart(int value){
    Node * new_node = new Node;/// Declare New Node

    new_node->data = value;/// set data of The New Node

    new_node->next = HEAD;/// refers to the next node
    
    HEAD = new_node;/// Move Head

}

void insertFromEnd(int value){
    Node * new_node = new Node;/// Declare New Node
    new_node->next = NULL;// we defined this node to become last node & next of last node == NULL
    
    Node * last = HEAD;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;

}

void deleteKey(int key){
    Node *current = HEAD, *prev = HEAD;

    if(current->data == key){
        HEAD = current->next;
        free(current);
        return;
    }
    bool see = 0;
    while(current->data != key){
        prev = current;
        current = current->next;
        see = 1;
    }
    prev->next = current->next;
    free(current);
    if(!see){
        puts("This Key is not found !");
    }
}

void Display(){
    Node *node = HEAD;
    if(HEAD == NULL){
        puts("This linkedList is empty !");
    }else{
        Node *current = HEAD;
        while(current->next != NULL){
            printf("%d ",current->data);
            current = current->next;
        }
        puts("");
    }
}