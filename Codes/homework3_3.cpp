//
// Created by 阮颖 on 2019/4/1.
//

#include <iostream>
using namespace std;

// 递归算法
int Ackerman(int m, int n){

    if (m == 0) return n + 1;
    else if (n == 0) return Ackerman(m - 1, 1);
    else return Ackerman(m - 1, Ackerman(m, n - 1));
}

// 非递归算法
/* 栈的链接实现 */
template <class T>
class stack{
public:
    virtual bool isEmpty() const = 0;
    virtual void push(const T & x) = 0;
    virtual T pop() = 0;
    virtual T top() const = 0;
    virtual ~stack(){}
};

template <class T>
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

template <class T>
linkStack<T>::linkStack() {

    top_p = NULL;
}

template <class T>
linkStack<T>::~linkStack() {

    node * tmp;
    while (top_p != NULL){

        tmp = top_p;
        top_p = top_p->next;
        delete tmp;
    }
}

template <class T>
bool linkStack<T>::isEmpty() const {

    return top_p == NULL;
}

template <class T>
void linkStack<T>::push(const T &x) {

    top_p = new node(x, top_p);
}

template <class T>
T linkStack<T>::pop() {

    node * tmp = top_p;
    T x = tmp->data;
    top_p = top_p->next;
    delete tmp;
    return x;
}

template <class T>
T linkStack<T>::top() const {

    return top_p->data;
}

int Ackerman1(int m, int n){

    linkStack<int> s;
    int m1, n1;
    s.push(m);
    s.push(n);

    while (!s.isEmpty()){
        n1 = s.pop();
        if (s.isEmpty()) return n1;
        m1 = s.pop();
        if (m1 != 0 && n1 != 0){
            s.push(m1 - 1);
            s.push(m1);
            s.push(n1 - 1);
        }
        else if (n1 == 0 && m1 != 0){
            s.push(m1 - 1);
            s.push(1);
        }
        else if (m1 == 0){
            s.push(n1 + 1);
        }
    }
}

int main(){
    cout << Ackerman(2,4) << endl;
    cout << Ackerman1(2,4) << endl;
}