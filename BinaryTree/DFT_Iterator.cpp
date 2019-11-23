//
// Created by vladead on 17.11.2019.
//

#include "DFT_Iterator.h"
#include "Stack.h"

DFT_Iterator::DFT_Iterator(Node *root) {
    current = root;
    traverse(root);
}

void DFT_Iterator::traverse(Node *root) {
    if (root) {
        stackForTraverse.push(root);
        traverse(root->get_left());
        traverse(root->get_right());
    }
}
