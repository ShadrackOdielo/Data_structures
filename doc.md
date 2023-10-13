# ICS 2105: Data Structures and Algorithms
## Assignment One

**Name:** Shadrack Omondi Odielo  
**Registration Number:** SCT221-0479/2021  
**Name:** Giscard Njeru  
**Registration Number:** SCT221-0543/2021  
**Name:** Charles Ndiritu  
**Registration Number:** SCT221-0964/2021  

**Submission Date:** 13th October 2023

## Table of Contents
1. Introduction
2. Program Code
3. Implementation Details
4. How the Program Works
5. Running the Program
6. Conclusion

## 1. Introduction

This document presents the implementation of a queue data structure using a stack. The program is written in the C programming language and uses a linked list to manage the data.

## 2. Program Code

The program consists of several source code files. Here are the main files:

- `library.h`: The header file that contains the function and structure declarations.

- `stack.c`: Implements stack operations (push, pop, isEmpty).

- `queue.c`: Implements the queue using two stacks, including enqueue and dequeue operations.

- `main.c`: The main program file that demonstrates how to use the queue data structure.

## 3. Implementation Details

### `library.h`

This header file declares the structures and functions used in the program. It provides a common interface for the stack and queue operations.

### `stack.c`

- `createStack()`: Creates and returns a new stack.
- `push(Stack* stack, int data)`: Pushes an element onto the stack.
- `pop(Stack* stack)`: Pops and returns an element from the stack.
- `isEmpty(Stack* stack)`: Checks if the stack is empty.

### `queue.c`

- `createQueue()`: Creates and returns a new queue.
- `enqueue(Queue* queue, int data)`: Enqueues an element in the queue.
- `dequeue(Queue* queue)`: Dequeues and returns an element from the queue.
- `isEmptyQueue(Queue* queue)`: Checks if the queue is empty.

## 4. How the Program Works

The program implements a queue using two stacks (`s1` for enqueue and `s2` for dequeue). When you enqueue an element, it's pushed onto `s1`, and when you dequeue an element, it's popped from `s2`. If `s2` is empty when dequeuing, all elements are transferred from `s1` to `s2` in reverse order to maintain the queue order.

## 5. Running the Program

### Windows

To run the program on Windows, you can use a C compiler like MinGW. Follow these steps:

1. Open the command prompt.
2. Navigate to the directory containing the source code files.
3. Compile the program using `gcc`:


