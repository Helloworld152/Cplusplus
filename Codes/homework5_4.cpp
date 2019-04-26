//
// Created by 阮颖 on 2019/4/22.
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

	T *tmp = data;
	data = new T[2 * maxSize];
	for (int i = 1; i <= maxSize; ++i) {
		data[i] = tmp[(front + i) % maxSize];
	}
	front = 0;
	rear = maxSize;
	maxSize *= 2;
	delete tmp;
}


class priorityQueue:public queue<int>{
public:
	priorityQueue(int capacity = 100){

		array = new int[capacity];
		maxSize = capacity;
		currentSize = 0;
	};

	priorityQueue(const int * items, int size):maxSize(size + 10), currentSize(size){
		array = new int[maxSize];
		for (int i = 0; i < size; ++i) {
			array[i + 1] = items[i];
		}
		buildHeap();
	};

	~priorityQueue(){
		delete[](array);
	};

	bool isEmpty() const{
		return currentSize == 0;
	};

	void enQueue(const int & x){

		if (currentSize == maxSize - 1) doubleSpace();

		int hole = ++currentSize;
		// 向下过滤
		for ( ; hole > 1 && x < array[hole / 2]; hole /= 2)
			array[hole] = array[hole/2];

		array[hole] = x;
	};


	int deQueue(){
		int minItem;
		minItem = array[1];
		array[1] = array[currentSize--];
		perolateDown(1);
		return minItem;
	};

	int getHead() const{
		return array[1];
	};

	void printQueue(){
		for (int i = 1; i <= currentSize; ++i) {
			cout << array[i] << " ";
		}
	}

	/* findMin函数 */
	int findMin(int x){
		int min = x, index = -1;
		for (int i = 1; i <= currentSize; ++i) {
			if ((array[i] >= x && index == -1) || (array[i] >= x && index != -1 && array[i] < min)){
				min = array[i];
				index = i;
			}

		}
		return index;
	};

	/* decreaseKey函数 */
	void decreaseKey(int i, int value){
		array[i] = array[i] - value;
		for (int j = i; j > 0; --j) {
			perolateDown(j);
		}
		return;
	};

private:
	int currentSize;
	int * array;
	int maxSize;

	void doubleSpace(){
		int * tmp = array;
		maxSize *= 2;
		array = new int[maxSize];
		for (int i = 0; i <= currentSize; ++i) {
			array[i] = tmp[i];
		}
		delete[](tmp);
	};
	void buildHeap(){
		for (int i = currentSize/2; i > 0; i--) {
			perolateDown(i);
		}
	};

	void perolateDown(int hole){
		int child;
		int tmp = array[hole];

		for ( ; hole*2 <= currentSize; hole = child){
			child = hole * 2;
			if (child != currentSize && array[child + 1] < array[child])
				child++;
			if (array[child] < tmp) array[hole] = array[child];
			else break;
		}

		array[hole] = tmp;
	};
};

int main(){
	int a[] = {3, 6, 7, 12, 8, 21, 14, 15, 37, 18, 24, 23, 33, 18, 17, 26};
	priorityQueue pq(a, 16);
	cout << pq.findMin(9) << endl;
	pq.decreaseKey(4, 7);
	pq.printQueue();

}
