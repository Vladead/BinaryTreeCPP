//
// Created by vladead on 31.10.2019.
//

#ifndef PROGRAM3_BINARYTREE_H
#define PROGRAM3_BINARYTREE_H

#include "Node.h"
#include "Iterator.h"

class BinaryTree {
private:
    Node *root;
public:
    BinaryTree();

    ~BinaryTree();

    bool contains(int key);            // Find element in tree by key

    void insert(int key);              // Adding element in tree by key

    void remove(int key);              // Deleting element in tree by key

    Iterator* create_dft_iterator();    // Create iterator for depth-first traverse

    Iterator* create_bft_iterator();    // Create iterator for breadth-first traverse

    void print();                      // Print tree to console

    static void destroy(Node *root);

private:
    static void addElement(Node* root, int key);
};


#endif //PROGRAM3_BINARYTREE_H
