#include <bits/stdc++.h>
using namespace std;
int front , rear;
template <typename T>
T isEmpty(vector<T>&queue){
    if(front == -1 && rear == -1)
        return true;
    return false;
}

template <typename T>
T isFull(vector<T>&queue){
    if(front == 0 && rear == queue.size() -1 )
        return true;
    if(rear == front - 1)
        return true;
    return false;
}
template <typename T>
void enQueue(vector<T>&queue,const T& item){
    if(isFull(queue)){
        // puts("Container is Full Now ! \nSo I'll Expand The Size of ThisContainer ");
        rear++;
        queue.push_back(item);
    }else if(isEmpty(queue)){
        rear = front = 0;
        // queue.push_back(item);
    }else if(rear == queue.size() -1){
        rear = 0;
        queue[rear] = item;
    }else{
        queue[++rear] = item;
    }
}
template <typename T>
void deQueue(vector<T>&queue){
    if(isEmpty(queue)){
        puts("Container is Empty !");
    }else if(front == queue.size() - 1){
        front = 0;
        queue.pop_back();
    }else{
        front++;
    }
}
template <typename T>
void Peek(vector<T>&queue){
    if(isEmpty(queue)){
        puts("Container is Empty !");
    }else{
        cout << "Front Of Container : " << queue[front] << '\n';
    }
}
template <typename T>
void Display(vector<T>&queue){
    if(isEmpty(queue)){
        puts("Container is Empty !");
    }else{
        if(front <= rear){
            for(int i=front;i<=rear;i++)
                cout << queue[i] << ' ';
            puts("");
        }else{
            for(int i = front;i<queue.size();i++)
                cout << queue[i] << ' ';
            for(int i = 0 ;i<=rear;i++)
                cout << queue[i] << ' ';
        }
    }
}
int main(){
    front = -1 , rear = -1;
    vector<int>intQueue;
    enQueue(intQueue,1);// 1
    // enQueue(intQueue,2);// 1 2
    // enQueue(intQueue,3);// 1 2 3
    // enQueue(intQueue,4);// 1 2 3 4
    // deQueue(intQueue);// 2 3 4
    Peek(intQueue);// get value of front
    // Display(intQueue);



    return 0;
}