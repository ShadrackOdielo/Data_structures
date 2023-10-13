#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdbool.h>

// Define a structure for the linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define a structure for the stack
typedef struct Stack {
    Node* top;
} Stack;

// Define a structure for the queue
typedef struct Queue {
    Stack* s1; // Stack for enqueue
    Stack* s2; // Stack for dequeue
} Queue;

// Stack functions
Stack* createStack();
void push(Stack* stack, int data);
int pop(Stack* stack);
bool isEmpty(Stack* stack);

// Queue functions
Queue* createQueue();
void enqueue(Queue* queue, int data);
int dequeue(Queue* queue);
bool isEmptyQueue(Queue* queue);

#endif // LIBRARY_H

