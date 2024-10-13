# Queue Implementation in C++
## Overview
### This project implements a queue data structure in C++ using generic    types. The queue supports the following operations:

    - Enqueue: Add an element to the back of the queue.
    - Dequeue: Remove an element from the front of the queue.
    - isEmpty: Check if the queue is empty.
    - Peek: Retrieve the value of the front element without removing it.
    - Display: Show all elements in the queue.
.
.
.
.

# Circular Queue
### The Circular Queue is an enhanced version of the traditional FIFO (First-In-First-Out) queue, where the last position is connected back to the first position to make a circle. This approach efficiently uses memory by reusing the space freed up by dequeued elements.

## Features of Circular Queue:
    - Generic Types: Supports different data types using templates.
    Circular Structure: Unlike a normal queue, the circular queue wraps around when the end is reached.
    - Enqueue: Adds elements to the back of the circular queue.
    - Dequeue: Removes elements from the front of the circular queue.
    - Peek: Retrieves the value of the front element without removing it.
    - isEmpty: Checks if the queue is empty.
    - isFull: Checks if the queue is full.
    - Display: Shows the elements in the queue in their correct order.
.
.
.
.
# Queue (Linked List Implementation)
### The Circular Queue is an enhanced version of the traditional FIFO (First-In-First-Out) queue, where the last position is connected back to the first position to make a circle. This approach efficiently uses memory by reusing the space freed up by dequeued elements.
    - Linked List Structure: Dynamically allocated nodes, allowing the queue to expand as necessary.
    - Enqueue: Adds elements to the back of the queue.
    - Dequeue: Removes elements from the front of the queue.
    - Peek: Retrieves the front element without removing it.
    - Display: Prints the elements in the queue in the order they appear.
.
.
.
.
# LinkedList Implementation in C++
### This repository contains a basic implementation of a singly linked list in C++ using struct. The linked list supports the following functionalities:

    - Insert from Start (insertFromStart): Adds a new node at the beginning of the list.
    - Insert from End (insertFromEnd): Adds a new node at the end of the list.
    - Delete (delete): Removes a node from the list.
    - Display (display): Prints the elements of the linked list.
    
The code is designed to demonstrate how linked lists can be managed using basic data structures like struct, with manual handling of memory allocation and node linking.
# Stack Implementation using vector:
#### A stack is a linear data structure that follows the Last In, First Out (LIFO) principle, meaning the last element added to the stack is the first one to be removed. In this implementation, we use a vector, a dynamic array from the C++ Standard Library, to manage the stack. Vectors are ideal for stack operations because they efficiently manage memory and allow for dynamic resizing.

# Key Operations:
    - Push:
        The push operation adds an element to the top of the stack. In this implementation, the vector’s push_back() function is used to append the new element to the end of the vector, which corresponds to the top of the stack.

    - Pop:
        The pop operation removes the element from the top of the stack. This is done using the pop_back() function of the vector, which removes the last element. Before performing the pop operation, we check if the stack is empty to avoid errors.

    - Peek:
        The peek operation returns the top element of the stack without removing it. The vector’s back() function is used to access the last element. If the stack is empty, an error message is displayed, and a default value is returned.

    - Display:
        The display operation prints all elements in the stack from top to bottom. Since the vector stores elements in the order they were added, we iterate through the vector in reverse order to display the stack contents in the correct LIFO order.