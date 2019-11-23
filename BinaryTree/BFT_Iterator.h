//
// Created by vladead on 17.11.2019.
//

#ifndef PROGRAM3_BFT_ITERATOR_H
#define PROGRAM3_BFT_ITERATOR_H

#include "Iterator.h"
#include "Node.h"
#include "Queue.h"

class BFT_Iterator : public Iterator {
private:
    Node *current;
    Queue queueForTraverse;
public:
    explicit BFT_Iterator(Node *root);

    ~BFT_Iterator() override;

    Node* next() override;

    bool has_next() override;

    void traverse(Node *root) override;
};


#endif //PROGRAM3_BFT_ITERATOR_H
