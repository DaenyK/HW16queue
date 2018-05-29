#pragma once
#include"Headers.h"

template <typename T>
class queueArray {
private:
	T * els;
	size_t lenght;
	size_t buf_size;
public:
	queueArray();
	queueArray(T * arr, int n);
	queueArray(const queueArray<T> & obj);
	virtual ~queueArray();

	void push(T e);
	void pop();
	T &front();
	T &back();
	size_t size();
	bool empty();
};