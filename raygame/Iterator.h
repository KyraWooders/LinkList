#pragma once
#include "Node.h"

template<typename T>
class Iterator
{
public:
	Iterator() {}
	Iterator(Node* ptr);

protected:
	Node<T>* current;
};

//create a node
template<typename T>
inline Iterator<T>::Iterator(Node<T> * ptr)
{
	current = ptr;
}