//
// Created by 阮颖 on 2019/4/1.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

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

int main(){

    int arrivalLowOfBus;
    int arrivalHighOfBus;
    int arrivalLowOfTrucks;
    int arrivalHighOfTrucks;
    int numberOfBus = 0;
    int numberOfTrucks = 0;

    double totalTime;
    int totalNumber = 0;

    cout << "totalTime arrivalLowOfBus arrivalHighOfBus arrivalLowOfTrucks arrivalHighOfTrucks:" << endl;
    cin >> totalTime >> arrivalLowOfBus >> arrivalHighOfBus >> arrivalLowOfTrucks >> arrivalHighOfTrucks;

    srand((unsigned)time(NULL));

    linkQueue<int> busQueue, trucksQueue;

    for (int i = 0; i <= totalTime;) {
        if (i != 0) busQueue.enQueue(i);
        i += rand() % (arrivalHighOfBus - arrivalLowOfBus + 1) + arrivalLowOfBus;
    }

    for (int i = 0; i <= totalTime;) {
        if (i != 0) trucksQueue.enQueue(i);
        i += rand() % (arrivalHighOfTrucks - arrivalLowOfTrucks + 1) + arrivalLowOfTrucks;
    }

    double waitTimeOfBus = 0, waitTimeOfTrucks = 0;
    int timer;
    for (timer = 10; timer < totalTime; timer += 10) {
        int set = 0;
        for (set = 0; set < 8 && !busQueue.isEmpty() && busQueue.getHead() <= timer; set++) {
            waitTimeOfBus += timer - busQueue.deQueue();
            numberOfBus++;
        }

        for (;set < 10 && !trucksQueue.isEmpty() && trucksQueue.getHead() <= timer; set++) {
            waitTimeOfTrucks += timer - trucksQueue.deQueue();
            numberOfTrucks++;
        }

        for (; set < 10 && !busQueue.isEmpty() && busQueue.getHead() <= timer; set++) {
            waitTimeOfBus += timer - busQueue.deQueue();
            numberOfBus++;
        }

        totalNumber += set;
    }

    cout << "totalNumber: " << totalNumber << endl;
    cout << "The number of buses: " << numberOfBus << endl;
    cout << "The number of trucks: " << numberOfTrucks << endl;
    cout << "The average waiting time of buses: " << waitTimeOfBus / numberOfBus << endl;
    cout << "The average waiting time of trucks: " << waitTimeOfTrucks / numberOfTrucks << endl;

}