#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include "library.h"

// Function to create a new queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    if (queue == NULL) {
        // Handle memory allocation failure
        exit(1);
    }
    queue->s1 = createStack();
    queue->s2 = createStack();
    return queue;
}

// Function to enqueue an element
void enqueue(Queue* queue, int data) {
    // Push all elements from s2 to s1
    while (!isEmpty(queue->s2)) {
        push(queue->s1, pop(queue->s2));
    }
    // Push the new element to s1
    push(queue->s1, data);
}

// Function to dequeue an element
int dequeue(Queue* queue) {
    if (isEmptyQueue(queue)) {
        // Handle underflow
        return INT_MIN; // You can define a custom value for underflow
    }
    // Push all elements from s1 to s2
    while (!isEmpty(queue->s1)) {
        push(queue->s2, pop(queue->s1));
    }
    return pop(queue->s2);
}

// Function to check if the queue is empty
bool isEmptyQueue(Queue* queue) {
    return (isEmpty(queue->s1) && isEmpty(queue->s2));
}
/*Authors : Shadrack odielo, Charles ndiritu, Giscard Njeru*/ 

