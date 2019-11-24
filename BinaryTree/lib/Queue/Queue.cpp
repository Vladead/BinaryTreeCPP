//
// Created by vladead on 17.11.2019.
//

#include <cstddef>
#include <stdexcept>
#include <iostream>
#include "Queue.h"

Queue::Queue() : first(nullptr), last(nullptr), size(0){}

Queue::~Queue() = default;

void Queue::enqueue(Node *element) {
    try {
        auto temp = new Element;

        if (last != nullptr) {
            temp->next = last;
            last = temp;
        } else {
            last = temp;
            first = temp;
        }
        last->element = element;
        size++;
    }
    catch (const std::bad_alloc &) {
        std::cerr << "Something bad happened with memory allocation " << std::endl;
        exit(-1);
    }
}

Node *Queue::dequeue() {
    if (get_size() == 0) {
        throw std::runtime_error("There is nothing to delete");
    }

    auto current = first->next;
    Node *tempValue;
    tempValue = first->element;
    delete first;
    first = current;
    size--;
    return tempValue;
}

Node *Queue::peek() {
    if (get_size() == 0) {
        throw std::runtime_error("There is nothing to show");
    }
    return first->element;
}

size_t Queue::get_size() noexcept {
    return size;
}

void Queue::clear() noexcept {
    if (get_size() != 0) {
        Element *temp;

        while (first) {
            temp = first->next;
            delete first;
            first = temp;
        }
    }
}