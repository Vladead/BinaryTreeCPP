//
// Created by vladead on 17.11.2019.
//

#ifndef PROGRAM3_QUEUE_H
#define PROGRAM3_QUEUE_H

#include "Element.h"
#include "../../Node.h"

class Queue {
private:
    static int size;
    Element *first, *last;
public:
    Queue();

    ~Queue();

    void enqueue(Node *);

    Node *dequeue();

    Node *peek();

    int get_size();
};


#endif //PROGRAM3_QUEUE_H
