//
// Created by 阮颖 on 2019/4/1.
//

#include <iostream>
using namespace std;

template <class T>
class queue{

public:
    virtual bool isEmpty() const = 0;
    virtual void enQueue(const T & x) = 0;
    virtual T deQueue() = 0;
    virtual T getHead() const = 0;
    virtual ~queue(){}
};

/* 队列的链接实现 */
template <class T>
class linkQueue:public queue<T>{

private:
    struct node{
        T data;
        node * next;
        node(const T & x, node * N = NULL){
            data = x;
            next = N;
        }
        node():next(NULL){}
        ~node(){}
    };

    node * front, *rear;

public:
    linkQueue();
    ~linkQueue();
    bool isEmpty() const;
    void enQueue(const T & x);
    T deQueue();
    T getHead() const;
};

template <class T>
linkQueue<T>::linkQueue() {

    front = rear = NULL;
}

template <class T>
linkQueue<T>::~linkQueue() {

    node * tmp;
    while (front != NULL){

        tmp = front;
        front = front->next;
        delete tmp;
    }
}

template <class T>
bool linkQueue<T>::isEmpty() const {

    return front == NULL;
}

template <class T>
T linkQueue<T>::getHead() const {

    return front->data;
}

template <class T>
void linkQueue<T>::enQueue(const T &x) {

    if (rear == NULL)
        front = rear = new node(x);
    else
        rear = rear->next = new node(x);
}

template <class T>
T linkQueue<T>::deQueue() {

    node * tmp = front;
    T value = front->data;
    front = front->next;
    if (front == NULL) rear = NULL;
    delete tmp;
    return value;
}

