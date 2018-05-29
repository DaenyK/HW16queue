#include "queueArray.h"

template<typename T>
queueArray<T>::queueArray()
{
	els = nullptr;
	lenght = 0;
	buf_size = 0;
}

template<typename T>
queueArray<T>::queueArray(T * arr, int n)
{
	this->lenght = n;
	this->els = new T[this->lenght];
	this->buf_size = this->lenght;
	for (int i = 0; i < lenght; i++)
		this->els[i] = arr[i];
}

template<typename T>
queueArray<T>::queueArray(const queueArray<T>& obj)
{
	this->length = obj.length;
	this->buf_size = obj.length;
	this->els = new T[length];
	for (int i = 0; i < length; i++)
		this->els[i] = obj.els[i];
}

template<typename T>
queueArray<T>::~queueArray()
{
	delete[]els;
}

template<typename T>
void queueArray<T>::push(T e)
{
	if (buf_size == 0)
	{
		buf_size = 2;
		els = new T[buf_size];
	}


	else if (buf_size <= lenght)
	{
		buf_size *= 2;
		T * temp = new T[buf_size];
		for (int i = 0; i < lenght; i++)
			temp[i] = els[i];
		delete[] els;
		els = temp;
	}
	els[lenght++] = e;

}

template<typename T>
void queueArray<T>::pop()
{
	for (int i = 0; i < lenght-1; i++)
		els[i] = els[i + 1];
	this->lenght--;
}

template<typename T>
T & queueArray<T>::front()
{
	return this->els[0];
}

template<typename T>
T & queueArray<T>::back()
{
	return this->els[(this->size()) - 1];
}



template<typename T>
size_t queueArray<T>::size()
{
	return this->lenght;
}

template<typename T>
bool queueArray<T>::empty()
{
	return (size() == 0);
}



