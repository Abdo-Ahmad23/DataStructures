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
int main(){
    vector<int>queue;
    enQueue(queue,2);
    cout<< queue[0]<<endl<<endl;
    return 0;
}