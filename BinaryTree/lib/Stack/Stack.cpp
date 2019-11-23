//
// Created by vladead on 17.10.2019.
//

#include <iostream>
#include <stdexcept>
#include "Stack.h"

Stack::Stack() : top(nullptr) {

}

Stack::~Stack() {
    clear();
}

void Stack::push(Node *value) {
    try {
        auto temp = new Element;

        if (top != nullptr) {
            temp->next = top;
            top = temp;
        } else {
            top = temp;
        }
        top->value = value;
    }
    catch (const std::bad_alloc &) {
        std::cerr << "Something bad happened with memory allocation " << std::endl;
        exit(-1);
    }
}

Node *Stack::pop() {
    if (get_size() == 0) {
        throw std::runtime_error("There is nothing to delete");
    }

    auto current = top->next;
    Node *tempValue;
    tempValue = top->value;
    delete top;
    top = current;
    return tempValue;
}

Node *Stack::peek() {
    if (get_size() == 0) {
        throw std::runtime_error("There is nothing to show");
    }
    return top->value;
}

size_t Stack::get_size() noexcept {
    size_t sizeOfList = 1;

    if (top == nullptr) {
        sizeOfList = 0;
    } else {
        auto current = top;
        while (current->next != nullptr) {
            sizeOfList++;
            current = current->next;
        }
    }

    return sizeOfList;
}

void Stack::clear() noexcept {
    if (get_size() != 0) {
        Element *temp;

        while (top) {
            temp = top->next;
            delete top;
            top = temp;
        }
    }
}