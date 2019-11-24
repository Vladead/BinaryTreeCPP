//
// Created by vladead on 31.10.2019.
//

#include <stdexcept>
#include "BinaryTree.h"
#include "BFT_Iterator.h"
#include "DFT_Iterator.h"

BinaryTree::BinaryTree() : root(nullptr) {

}

BinaryTree::~BinaryTree() {
    destroy(root);
    root = nullptr;
}

bool BinaryTree::contains(int key) {
    if (root == nullptr) {
        throw std::out_of_range("The tree is empty");
    }

    if (root->data == key) {
        return true;
    }
    Iterator *iterator = create_dft_iterator();
    while (iterator->has_next()) {
        if (iterator->next()->data == key) {
            delete iterator;
            return true;
        }
    }
    delete iterator;
    return false;
}

void BinaryTree::insert(int key) {
    if (!root) {
        root = new Node(key);
    } else {
        addElement(root, key);
    }
}

void BinaryTree::addElement(Node *root, int key) {
    if (root->data > key) {
        if (root->left == nullptr) {
            root->left = new Node(key);
        } else {
            addElement(root->left, key);
        }
    } else {
        if (root->right == nullptr) {
            root->right = new Node(key);
        } else {
            addElement(root->right, key);
        }
    }
}

void BinaryTree::remove(int key) {

}

Iterator *BinaryTree::create_bft_iterator() {
    return new BFT_Iterator(root);
}

Iterator *BinaryTree::create_dft_iterator() {
    return new DFT_Iterator(root);
}

void BinaryTree::print() {

}

void BinaryTree::destroy(Node *root) {
    if (root) {
        destroy(root->left);
        destroy(root->right);
        delete root;
    }
}