#include <bits/stdc++.h>
using namespace std;
int sz, top = -1;
template<typename T>
void push(vector<T>&stack, const T& value){
    if(top == sz-1){
        puts("Stack is Full !");
    }else{
        top++;
        stack[top] = value;
    }
}
template<typename T>
void pop(vector<T>&stack){
    if(top == -1){
        puts("Stack is already Empty !");
    }else{
        top--;
    }
}
template<typename T>
int peek(vector<T>&stack){
    if(top == -1){
        puts("Stack is empty !");
    }else{
        cout << stack[top] << '\n';
    }
}
template<typename T>
void display(vector<T> &stack){
    if(top == -1){
        puts("Stack is Empty !");

    }else{

    
    int tmp = top;
    while(tmp>-1){
        cout << stack[tmp] << '\n';
        tmp--;
    }
    puts("");
    
    }
}
int main(){
    puts("Enter Your Size Of Stack: ");
    cin >> sz;
    vector<int>stack(sz);
    push(stack,1);
    push(stack,2);
    pop(stack);
    peek(stack);
    display(stack);


    return 0;
}