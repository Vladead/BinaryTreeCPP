//
// Created by vladead on 31.10.2019.
//

#include "BinaryTree.h"

BinaryTree::BinaryTree() : height(0), root(nullptr) {

}

BinaryTree::~BinaryTree() {
    destroy(root);
}

void BinaryTree::destroy(Node *root) {
    if (root) {
        destroy(root->left);
        destroy(root->right);
        delete root;
    }
}