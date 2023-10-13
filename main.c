/*main.c*/
#include <stdio.h>
#include "library.h"

int main() {
    Queue* queue = createQueue();

    // Enqueue elements
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 35);

    // Dequeue and print elements
    printf("Dequeued: %d\n", dequeue(queue));
    printf("Dequeued: %d\n", dequeue(queue));

    // Enqueue more elements
    enqueue(queue, 43);

    // Dequeue and print the rest
    printf("Dequeued: %d\n", dequeue(queue));
    printf("Dequeued: %d\n", dequeue(queue));

    // Check if the queue is empty
    if (isEmptyQueue(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }

    return 0;
}

/*Authors : Shadrack odielo, Charles ndiritu, Giscard Njeru*/ 
