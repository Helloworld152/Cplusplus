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

/* 队列的顺序实现 */
template <class T>
class seqQueue:public queue<T>{

private:
    T * data;
    int maxSize;
    int front, rear;
    void doubleSpace();

public:
    seqQueue(int size = 10);
    ~seqQueue();
    bool isEmpty() const;
    void enQueue(const T & x);
    T deQueue();
    T getHead() const;
};

template <class T>
seqQueue<T>::seqQueue(int size) {

    data = new T[size];
    maxSize = size;
    front = rear = 0;
}

template <class T>
seqQueue<T>::~seqQueue() {

    delete [] data;
}

template <class T>
bool seqQueue<T>::isEmpty() const {

    return front == rear;
}

template <class T>
T seqQueue<T>::deQueue() {

    front = (front + 1) % maxSize;
    return data[front];
}

template <class T>
T seqQueue<T>::getHead() const {

    return data[(front + 1) % maxSize];
}

template <class T>
void seqQueue<T>::enQueue(const T &x) {

    if ((rear + 1) % maxSize == front) doubleSpace();
    rear = (rear + 1) % maxSize;
    data[rear] = x;
}

template <class T>
void seqQueue<T>::doubleSpace() {

    T * tmp = data;
    data = new T[2 * maxSize];
    for (int i = 1; i <= maxSize; ++i) {
        data[i] = tmp[(front + i) % maxSize];
    }
    front = 0;
    rear = maxSize;
    maxSize *= 2;
    delete tmp;
}