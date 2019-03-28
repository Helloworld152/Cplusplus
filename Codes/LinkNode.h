//
// Created by 阮颖 on 2019/3/11.
//

#ifndef MYCPPNOTE_LINKNODE_H
#define MYCPPNOTE_LINKNODE_H

#include <iostream>

template <typename elemType>class List {
public:
    virtual void clear() = 0;

    virtual int length() const = 0;

    virtual void insert(int i, const elemType & x) = 0;

    virtual void remove(int i) = 0;

    virtual int search(const elemType & x) const = 0;

    virtual elemType visit(int i) const = 0;

    virtual void traverse() const = 0;

    virtual ~List(){};
};


//单链表

template <typename elemType>
class sLinkNode:public List<elemType>{
private:
    struct Node{
        elemType data;
        Node *next;

        Node(elemType d, Node *n){
            data = d;
            next = n;
        }

        Node():next(nullptr) {}

        ~Node(){}
    };

    Node *head;
    int currentLength;

    Node * move(int i) const ;


public:
    sLinkNode();

    ~sLinkNode(){ clear(); delete head; }

    void clear();

    int length(){ return currentLength; }

    void insert(int i, const elemType & x);

    void remove(int i);

    int search(const elemType & x) const;

    elemType visit(int i) const;

    void traverse() const;

};



template <typename elemType>
typename sLinkNode<elemType>::Node * sLinkNode<elemType>::move(int i) const {

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
#endif //MYCPPNOTE_LINKNODE_H
