//
// Created by vladead on 17.11.2019.
//

#ifndef PROGRAM3_DFT_ITERATOR_H
#define PROGRAM3_DFT_ITERATOR_H

#include "Stack.h"
#include "Iterator.h"
#include "Node.h"

class DFT_Iterator : public Iterator {
private:
    Node *current;
    Stack stackForTraverse;
public:
    explicit DFT_Iterator(Node *root);

    ~DFT_Iterator() override;

    Node* next() override;

    bool has_next() override;

    void traverse(Node *) override;
};


#endif //PROGRAM3_DFT_ITERATOR_H
