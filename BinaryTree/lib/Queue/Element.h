//
// Created by vladead on 17.11.2019.
//

#ifndef PROGRAM3_ELEMENT_H
#define PROGRAM3_ELEMENT_H

#include "../../Node.h"

class Element {
private:
    Node *element;
    Element *next;
public:
    Element();

    ~Element();

    void set_element(Node *);

    Node *get_element();

    void set_next(Element *);

    Element *get_next();
};


#endif //PROGRAM3_ELEMENT_H
