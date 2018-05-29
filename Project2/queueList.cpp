#include "queueList.h"

template<typename T>
 void queueList<T>::push(T data)
{
	if (count == 0) {
		this->firstPtr = new Node(data);
		this->lastPtr = firstPtr;
	}
	else
	{
		lastPtr->nextPtr = new Node(data);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}

template<typename T>
void queueList<T>::pop()
{
	if (Size() == 1)
	{
		delete firstPtr;
		firstPtr = nullptr;
		lastPtr = nullptr;
	}
	else
	{
		Node * cp;
		cp = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = cp;
	}
	count -= 1;
}

template<typename T>
size_t queueList<T>::Size()
{
	return count;
}

template<typename T>
T & queueList<T>::front()
{
	return this->firstPtr->data;
}

template<typename T>
T & queueList<T>::back()
{
	return this->lastPtr->data;
}

template<typename T>
bool queueList<T>::empty()
{
	return (Size() == 0);
}

template<typename T>
queueList<T>::~queueList()
{
	Node *cp;

	while (firstPtr != nullptr)
	{
		cp = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = cp;
		count -= 1;
	}
	delete firstPtr;

}