//
// Created by vladead on 17.11.2019.
//

#ifndef PROGRAM3_QUEUE_H
#define PROGRAM3_QUEUE_H

#include <cstddef>
#include "Element.h"
#include "../../Node.h"

class Queue {
private:
    size_t size;
    Element *first, *last;
public:
    Queue();

    ~Queue();

    void enqueue(Node *element);    // Add element to the queue

    Node *dequeue();    // Remove element from the queue. Return deleted element

    Node *peek();    // Return element from the beginning of the queue

    size_t get_size();    // Return size of the queue

    void clear() noexcept;    // Delete all elements in queue
};


#endif //PROGRAM3_QUEUE_H
