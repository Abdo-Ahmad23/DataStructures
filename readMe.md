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