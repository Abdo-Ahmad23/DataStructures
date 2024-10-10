#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
// template <typename T>
Node *front = NULL;
// template <typename T>
Node *rear = NULL;
// template<typename T>
void enQueue(const int& value){
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = new_node;
    }else{
        rear -> next = new_node;
        rear = new_node;
    }
}
// template<typename T>
void deQueue(){
    if(front == NULL){
        puts("Queue is empty !");
    }else if(front == rear){
        Node *ptr = front;
        front = rear = NULL;
        delete(ptr);
    }else{
        Node *ptr = front;
        front = front->next;
        delete(ptr);
    }
}
// template<typename T>
int Peek(){
    if(front == NULL){
        puts("Queue is Empty !");
    }else{
        return front->data;
    }
    
}
// template<typename T>
void Display(){
    Node *current = front;
    while(current !=NULL){
        cout << current->data << ' ';
        current = current ->next;
    }
    puts("");
}
int main(){
    enQueue(1);// 1
    enQueue(2);// 1 2
    enQueue(3);// 1 2 3
    enQueue(4);// 1 2 3 4
    enQueue(5);// 1 2 3 4 5
    deQueue();// 2 3 4 5
    Display();// 2 3 4 5



    return 0;
}