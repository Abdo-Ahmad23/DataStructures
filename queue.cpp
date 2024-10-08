#include <bits/stdc++.h>
using namespace std;
int front , rear;
/// Function to push in queue from end as natural queue
template <typename T>
void enQueue(vector<T>&queue, const T& element){
    if(front == -1 && rear == -1)
        front++;
    queue.push_back(element);
    rear ++;
}
// Check if queue is empty or not 
template <typename T>
T isEmpty(vector<T>&queue){
    if(front == -1 && rear == -1)
        return true;
    if(front > rear)
        return true;
    
    return false;
}

template <typename T>
void deQueue(vector<T>&queue){
    if(isEmpty(queue)){
        printf("This Queue is Empty !");
    }else{
        front++;
    }
}

template <typename T>
T Peek(vector<T>&queue){
    if(isEmpty(queue)){
        printf("This Queue is Empty !");
    }else{
        cout << "Front of Queue is : "<<queue[front] <<'.'<<endl;
    }
}
// Display Fucntion For print all queue if it's not empty 
template <typename T>
T Display(vector<T>&queue){
    if(isEmpty(queue)){
        printf("This Queue is Empty !");
    }else{
        printf("{");
        for(int i=front;i<=rear;i++)
            if(i !=rear)
                cout << queue[i] << ", ";
            else
                cout << queue[i];
        printf("}");
        puts("");
    }
}
int main(){
    front = -1 , rear = -1;
    vector<int>intQueue;//
    enQueue(intQueue,1);// 1
    enQueue(intQueue,2);// 1 2
    enQueue(intQueue,3);// 1 2 3
    enQueue(intQueue,4);// 1 2 3 4
    deQueue(intQueue);// will remove first 1 and then queue will be -> 2 3 4
    Peek(intQueue);
    puts("Display All Queue Elements");
    Display(intQueue);

    return 0;
}