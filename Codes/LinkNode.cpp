//
// Created by 阮颖 on 2019/3/11.
//

#include "LinkNode.h"


template <typename elemType>
sLinkNode<elemType>::Node * sLinkNode<elemType>::move(int i) const {

    Node * p = head;
    while (i-- >= 0) p = p->next;
    return p;
}

template <class elemType>
sLinkNode<elemType>::sLinkNode() {

    head = new Node;
    currentLength = 0;
}

template <class elemType>
void sLinkNode<elemType>::clear() {

    Node * p = head->next, *q;
    head->next = NULL;
    while (p != NULL){
        q = p->next;

    }
}