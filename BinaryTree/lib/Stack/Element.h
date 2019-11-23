//
// Created by vladead on 17.10.2019.
//

#ifndef PROGRAM2_ELEMENT_H
#define PROGRAM2_ELEMENT_H

#include "../../Node.h"

class Element {
private:
    Node *element;
    Element *next;

public:
    Element();

    ~Element();

    friend class Stack;
};


#endif //PROGRAM2_ELEMENT_H
