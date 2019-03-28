//
// Created by 阮颖 on 2019/3/26.
//


#ifndef MYCPPNOTE_MYSTACK_H
#define MYCPPNOTE_MYSTACK_H

#include <iostream>

template <class elemType>
class stack{
public:
    virtual bool isEmpty() const = 0;
    virtual void push(const elemType & x) = 0;
    virtual elemType pop() = 0;
    virtual elemType top() = 0;
    virtual ~stack(){}
};


/* 栈的顺序实现 */
template <class elemType>
class seqStack:public stack<elemType>{

private:
    elemType * elem;
    int top_p;
    int maxSize;
    void doubleSpace();

public:
    seqStack(int initSize = 10);
    ~seqStack();
    bool isEmpty() const;
    void push(const elemType & x);
    elemType pop();
    elemType top() const;
};

template <class elemType>
seqStack<elemType>::seqStack(int initSize) {

    elem = new elemType[initSize];
    maxSize = initSize;
    top_p = -1;
}

template <class elemTye>
seqStack<elemTye>::~seqStack() {

    delete [] elem;
}

template <class elemType>
bool seqStack<elemType>::isEmpty() const {

    return top_p == -1;
}

template <class elemType>
void seqStack<elemType>::push(const elemType &x) {

    if (top_p == maxSize - 1) doubleSpace();

    elem[++top_p] = x;
}

template <class elemType>
elemType seqStack<elemType>::pop() {

    return elem[top_p--];
}

template <class elemType>
elemType seqStack<elemType>::top() const {

    return elem[top_p];
}

template <class elemType>
void seqStack<elemType>::doubleSpace() {

    elemType * tmp = elem;

    elem = new elemType[2*maxSize];

    for (int i = 0; i < maxSize; ++i) {
        elem[i] = tmp[i];
    }

    delete [] tmp;
}


/* 栈的链接实现 */
template <typename T>
class linkStack:public stack<T>{

private:
    struct node{
        T data;
        node *next;

        node(const T &x, node * N = NULL){
            data = x;
            next = N;
        }

        node():next(NULL){}

        ~node(){}
    };

    node * top_p;

public:

    linkStack();
    ~linkStack();
    bool isEmpty() const ;
    void push(const T & x);
    T pop();
    T top() const ;
};

template <typename T>
linkStack<T>::linkStack() {

    top_p = NULL;
}

template <typename T>
linkStack<T>::~linkStack() {

    node * tmp;
    while (top_p != NULL){

        tmp = top_p;
        top_p = top_p->next;
        delete tmp;
    }
}

template <typename T>
bool linkStack<T>::isEmpty() const {

    return top_p == NULL;
}

template <typename T>
void linkStack<T>::push(const T &x) {

    top_p = new node(x, top_p);
}

template <typename T>
T linkStack<T>::pop() {

    node * tmp = top_p;
    T x = tmp->data;
    top_p = top_p->next;
    delete tmp;
    return x;
}

template <typename T>
T linkStack<T>::top() const {

    return top_p->data;
}



#endif //MYCPPNOTE_MYSTACK_H
