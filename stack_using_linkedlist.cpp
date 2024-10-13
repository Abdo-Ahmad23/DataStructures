#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *top = NULL;

void push(int value){
    Node * new_node = new Node;/// Declare New Node

    new_node->data = value;/// set data of The New Node

    new_node->next = top;/// refers to the next node
    
    top = new_node;/// Move Head

}
int pop(){
    if(top == NULL){
        puts("Stack is empty !");
    }else{
        Node *first_node = top;
        top = first_node->next;
        delete(first_node);
    }
}
int peek(){
    if(top == NULL){
        puts("Stack is empty !");
    }else{
        return top -> data;
    }
}
void display(){
    if(top == NULL){
        puts("Stack is empty !");
    }else{
        Node *cur = top;
        while(cur !=NULL){
            cout << cur->data << ' ';
            cur = cur->next;
        }
        puts("");
    }
}
int main(){
    push(1);// 1
    push(2);// 2 1
    push(3);// 3 2 1
    pop();// 2 1
    display();

    return 0;
}