//
// Created by vladead on 17.11.2019.
//

#include <stdexcept>
#include "BFT_Iterator.h"

BFT_Iterator::BFT_Iterator(Node *root) {
    current = root;
    traverse(root);
}

BFT_Iterator::~BFT_Iterator() {
    queueForTraverse.clear();
}

Node *BFT_Iterator::next() {
    if (current == nullptr) {
        throw std::out_of_range("Next element does not exist");
    }
    current = queueForTraverse.dequeue();
    Node *temp = current;
    return temp;
}

bool BFT_Iterator::has_next() {
    return (queueForTraverse.get_size() != 0);
}

void BFT_Iterator::traverse(Node *root) {
    Queue temp;
    Node* tempNode;
    temp.enqueue(root);
    while (temp.get_size() != 0) {
        tempNode = temp.dequeue();
        queueForTraverse.enqueue(tempNode);
        if (tempNode->get_left()) {
            temp.enqueue(tempNode->get_left());
        }
        if (tempNode->get_right()) {
            temp.enqueue(tempNode->get_right());
        }
    }
}
