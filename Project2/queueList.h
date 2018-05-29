#pragma once
#include"Headers.h"

template <typename T>
class queueList {
public:
	class Node {
	public:
		T data;
		Node * nextPtr;
		Node(T data) {
			this->data = data;
			nextPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	size_t count;

	queueList()
	{
		firstPtr = nullptr;
		lastPtr = nullptr;
		count = 0;
	}

	void push(T data);
	void pop();
	
	size_t Size();

	T &front();
	T &back();
	bool empty();

	~queueList();
};


