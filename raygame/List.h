#pragma once
#include "Node.h"

template<typename T>
class List
{
public:
	T front();
	T back();
	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;
	bool isEmpty();

protected:
	int m_count;
	Node<T>* m_first;
	Node<T>* m_last;
};

//return to the front node
template<typename T>
T List<T>::front()
{
	return m_first->Info;
}

//return to the back node
template<typename T>
T List<T>::back()
{
	return m_last->Info;
}

//
template<typename T>
bool List<T>::isEmpty()
{
	return m_count == 0;
}