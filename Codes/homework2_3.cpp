//
// Created by 阮颖 on 2019/3/18.
//
#include <iostream>
using namespace std;


struct node{
    int data;
    node * next;

    node(int d = 0, node * n = NULL){ data = d; next = n; }
};

class LinkNode{
public:
    node *head;

    LinkNode(node *h){
        head = h;
    }

    void inversion(){
        node * p, * q, * r;
        p = head->next->next;
        q = p->next;
        r = head->next;
        head->next->next = NULL;
        while (p->next != NULL){
            p->next = r;
            r = p;
            p = q;
            q = q->next;
        }
        p->next = r;
        head->next = p;
    }
};
// 测试用例
int main(){
    node * p = new node();
    node * r = p;
    for (int i = 1; i < 4; ++i) {
        p->next = new node(i);
        p = p->next;
    }
    LinkNode linkNode1(r);
    linkNode1.inversion();
    r = linkNode1.head->next;
    while (r != NULL){
        cout << r->data << endl;
        r = r->next;
    }
}
