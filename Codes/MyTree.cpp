//
// Created by 阮颖 on 2019/4/4.
//

#include <iostream>
using namespace std;
/*树的抽象类*/
template <typename T>
class bTree{

public:
    virtual void clear() = 0;
    virtual bool isEmpty() const = 0;
    virtual T Root(T flag) const = 0;
    virtual T parent(T x, T flag) const = 0;
    virtual T lchild(T x, T flag) const = 0;
    virtual T rchild(T x, T flag) const = 0;
    virtual void delLeft(T x) = 0;
    virtual void delRight(T x) = 0;
    virtual void preOrder() const = 0;
    virtual void midOrder() const = 0;
    virtual void postOrder() const = 0;
    virtual void levelOrder() const = 0;
};
/*二叉树的链接实现*/
template <typename T>
class binaryTree:public bTree<T>{

    friend void printTree(const binaryTree & t, T flag);

private:
    struct Node{
        Node *left, *right;
        T data;

        Node():left(NULL), right(NULL){}
        Node(T item, Node * L = NULL, Node * R = NULL):data(item), left(L), right(R){}
        ~Node(){}
    };

    Node * root;

public:
    binaryTree():root(NULL){}
    binaryTree(T x){ root = new Node(x); }
    ~binaryTree();
    void clear();
    bool isEmpty() const;
    T Root(T flag) const;
    T lchild(T x, T flag) const;
    T rchild(T x, T flag) const;
    void delLeft(T x);
    void delRight(T x);
    void preOrder() const;
    void midOrder() const;
    void postOrder() const;
    void levelOrder() const;
    void createTree(T flag);
    T parent(T x, T flag) const { return flag; }

private:
    Node *find(T x, Node * t) const;
    void clear(Node *& t);
    void preOrder(Node * t) const;
    void midOrder(Node * t) const;
    void postOrder(Node * t) const;
};


