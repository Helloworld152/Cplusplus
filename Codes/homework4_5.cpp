//
// Created by 阮颖 on 2019/4/15.
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
	void printTree(T flag);

	/* 交换二叉树中所有结点的左右子树 */
	void exchangeLR();
	void exchangeLR(Node * t);


private:
	Node *find(T x, Node * t) const;
	void clear(Node *& t);
	void preOrder(Node * t) const;
	void midOrder(Node * t) const;
	void postOrder(Node * t) const;
};

template <typename T>
bool binaryTree<T>::isEmpty() const {

	return root == NULL;
}

template <typename T>
T binaryTree<T>::Root(T flag) const {

	if (root == NULL) return flag;
	else return root->data;
}

template <typename T>
void binaryTree<T>::clear(binaryTree<T>::Node *& t) {

	if (t == NULL) return;
	clear(t->left);
	clear(t->right);
	delete t;
	t = NULL;
}

template <typename T>
void binaryTree<T>::clear() {

	clear(root);
}

template <typename T>
void binaryTree<T>::preOrder(binaryTree<T>::Node *t) const {

	if (t == NULL) return;
	cout << t->data << " ";
	preOrder(t->left);
	preOrder(t->right);
}

template <typename T>
void binaryTree<T>::preOrder() const {

	cout << "\nPreOrder: ";
	preOrder(root);
}

template <typename T>
void binaryTree<T>::postOrder(binaryTree<T>::Node *t) const {

	if (t == NULL) return;
	postOrder(t->left);
	postOrder(t->right);
	cout << t->data << " ";
}

template <typename T>
void binaryTree<T>::postOrder() const {

	cout << "\nPostOrder: ";
	postOrder(root);
}

template <typename T>
void binaryTree<T>::midOrder(binaryTree<T>::Node *t) const {

	if (t == NULL) return;
	midOrder(t->left);
	cout << t->data << " ";
	midOrder(t->right);
}

template <typename T>
void binaryTree<T>::midOrder() const {

	cout << "\nMidOrder: ";
	midOrder(root);
}

template <typename T>
void binaryTree<T>::levelOrder() const {

	linkQueue<Node *> que;
	Node * tmp;

	cout << "\nLevelOrder: ";
	que.enQueue(root);

	while (!que.isEmpty()){
		tmp = que.deQueue();
		cout << tmp->data << " ";
		if (tmp->left) que.enQueue(tmp->left);
		if (tmp->right) que.enQueue(tmp->right);
	}
}

template <typename T>
typename binaryTree<T>::Node * binaryTree<T>::find(T x, binaryTree<T>::Node *t) const {

	Node * tmp;
	if (t == NULL) return NULL;
	if (t->data == x) return t;
	tmp = find(x, t->left);
	if (tmp) return tmp;
	else return find(x, t->right);
}

template <typename T>
void binaryTree<T>::delLeft(T x) {

	Node * tmp = find(x, root);
	if (tmp == NULL) return;
	clear(tmp->left);
}

template <typename T>
void binaryTree<T>::delRight(T x) {

	Node * tmp = find(x, root);
	if (tmp == NULL) return;
	clear(tmp->right);
}

template <typename T>
T binaryTree<T>::lchild(T x, T flag) const {

	Node * tmp = find(x, root);
	if (tmp == NULL || tmp->left == NULL) return flag;

	return tmp->left->data;
}

template <typename T>
T binaryTree<T>::rchild(T x, T flag) const {

	Node * tmp = find(x, root);
	if (tmp == NULL || tmp->right == NULL) return flag;

	return tmp->right->data;
}

template <typename T>
void binaryTree<T>::createTree(T flag) {

	linkQueue<Node *> que;
	Node * tmp;
	T x, ldata, rdata;
	cout << "\nInput the root: ";
	cin >> x;
	root = new Node(x);
	que.enQueue(root);

	while (!que.isEmpty()){
		tmp = que.deQueue();
		cout << "\nInput the two sons of " << tmp->data << ", " << flag << " express NULL: ";
		cin >> ldata >> rdata;
		if (ldata != flag) que.enQueue(tmp->left = new Node(ldata));
		if (rdata != flag) que.enQueue(tmp->right = new Node(rdata));
	}

	cout << "Create completed.";
}

template <typename T>
void binaryTree<T>::printTree(T flag) {

	linkQueue<T> q;
	q.enQueue(root->data);
	cout << endl;
	while (!q.isEmpty()){
		char p, l, r;
		p = q.deQueue();
		l = lchild(p, flag);
		r = rchild(p, flag);
		cout << p << " " << l << " " << r << endl;
		if (l != 0) q.enQueue(l);
		if (r != 0) q.enQueue(r);
	}
}

template <typename T>
binaryTree<T>::~binaryTree() {
	clear(root);
}

/* 交换二叉树中所有结点的左右子树 */
template <typename T>
void binaryTree<T>::exchangeLR(binaryTree<T>::Node *t) {

	if (t == NULL) return;
	exchangeLR(t->left);
	exchangeLR(t->right);
	Node * tmp = t->left;
	t->left = t->right;
	t->right = tmp;
}

template <typename T>
void binaryTree<T>::exchangeLR() {
	exchangeLR(root);
}

int main(){
	binaryTree<int> tree;
	tree.createTree(0);
	tree.levelOrder();
	tree.exchangeLR();
	tree.levelOrder();
}

