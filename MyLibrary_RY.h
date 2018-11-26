//
// Created by 阮颖 on 2018/10/15.
//
#include <iostream>
using namespace std;


#ifndef PROJECT2_MYLIBRARY_RY_H
#define PROJECT2_MYLIBRARY_RY_H

#endif //PROJECT2_MYLIBRARY_RY_H

const int M = 10;
const int N = 10;
class Matrice{
private:
    int num[M][N];
public:
};

void merge(int *data, int start, int mid, int end, int *result){
    int i, j, k;
    i = start;
    j = mid + 1;
    k = 0;
    while (i <= mid && j <= end){
        if (data[i] <= data[j])
            result[k++] = data[i++];
        else
            result[k++] = data[j++];
    }
    while (i <= mid)
        result[k++] = data[i++];
    while (j <= end)
        result[k++] = data[j++];

    for (i = 0; i < k; ++i) {
        data[start + i] = result[i];
    }
}

void merge_sort(int *data, int start, int end, int *result){
    if (start < end){
        int mid = start + (end - start) / 2;
        merge_sort(data, start, mid, result);
        merge_sort(data, mid+1, end, result);
        merge(data, start, mid, end, result);
    }
}
#include <iostream>
#include <string>
using namespace std;

typedef int TypeName;
/*
 * C++链表
 */
struct Node {
    TypeName data;
    Node *next;
};

/*
 * C++链表类
 */
#include <iostream>
#include <string>
using namespace std;

typedef int TypeName;

class LinkNode {
public:
    LinkNode();
    ~LinkNode();
    void insertNode(LinkNode index, TypeName data);
    void deleteNode(LinkNode node);
    TypeName returnData(LinkNode node);

public:
    TypeName data;
    LinkNode *next;
};

TypeName LinkNode::returnData(LinkNode node) {
    return node.data;
}

void LinkNode::insertNode(LinkNode index, TypeName data) {
    LinkNode temp;
    temp.data = data;
    temp.next = index.next;
    *(index.next) = temp;
}

void LinkNode::deleteNode(LinkNode node) {
    node.next = node.next->next;
}

LinkNode::~LinkNode() {}
LinkNode::LinkNode() {}


