//
// Created by 阮颖 on 2019/4/22.
//

#include <iostream>
#include "Myqueue.cpp"
using namespace std;

template <class T>
class priorityQueue:public queue<T>{
public:
	priorityQueue(int capacity = 100){

		array = new T[capacity];
		maxSize = capacity;
		currentSize = 0;
	};

	priorityQueue(const T * items, int size):maxSize(size + 10), currentSize(size){
		array = new T[maxSize];
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

	void enQueue(const T & x){

		if (currentSize == maxSize - 1) doubleSpace();

		int hole = ++currentSize;
		// 向下过滤
		for ( ; hole > 1 && x < array[hole / 2]; hole /= 2)
			array[hole] = array[hole/2];

		array[hole] = x;
	};


	T deQueue(){
		T minItem;
		minItem = array[1];
		array[1] = array[currentSize--];
		perolateDown(1);
		return minItem;
	};

	T getHead() const{
		return array[1];
	};

private:
	int currentSize;
	T * array;
	int maxSize;

	void doubleSpace();
	void buildHeap(){
		for (int i = currentSize/2; i > 0; i--) {
			perolateDown(i);
		}
	};

	void perolateDown(int hole){
		int child;
		T tmp = array[hole];

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


