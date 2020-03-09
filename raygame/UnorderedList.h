#pragma once
#include "List.h"

template<typename T>
class UnorderedList : public List
{
public:
	void insertFirst(const T&) override;
	void insertLast(const T&) override;
};

template<typename T>
void UnorderedList<T>::insertFirst(const T& Info)
{
	Node<T>* fNode = new Node<T>();

	fNode->Info = Info;
		
	fNode->Next = this->m_first;
		
	this->m_first = fNode;

	if (this->m_count == 0)
	{
		this->m_last = fNode;
	}
		
	this->m_count++;
}

template<typename T>
void UnorderedList<T>::insertLast(const T& Info)
{
	Node<T>* lNode = new Node<T>();
		
	lNode->Info = Info;

	lNode->Next = nullptr;
	if (this->m_count == 0)
	{
		this->m_first = lNode;
		this->m_last = lNode;
		this->m_count++;
		return;
	}

	this->m_last->Next = lNode;

	this->m_last = lNode;

	this->m_count++;
}