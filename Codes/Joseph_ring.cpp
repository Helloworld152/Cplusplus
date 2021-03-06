//
// Created by 阮颖 on 2019/3/18.
//
#include <iostream>
using namespace std;

struct node{
    int data;
    node * next;

    node(int d, node * n = NULL){
        data = d;
        next = n;
    }
};

int main(){
    node * head, *p, *q;
    int n;

    cout << "\ninput n:";
    cin >> n;

    head = p = new node(0);//创建第一个节点

    for (int i = 1; i < n; ++i) {
        p = p->next = new node(i);
    }//创建链表

    p->next = head;//头尾相连

    q = head;

    while (q->next != q){
        p = q->next;
        q = p->next;

        p->next = q->next;//绕过节点
        cout << q->data << '\t';

        delete(q);
        q = p->next;
    }

    cout << "\n leave :" << q->data << endl;
    return 0;
}
