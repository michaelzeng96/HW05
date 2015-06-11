#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

template <typename elementType>
class Vector
{
#define DEFAULT_VALUE 10
public:
	typedef elementType * iterator;
	Vector();
	Vector(int size);
	Vector(int size, elementType element);
	void push_back(elementType element);
	void pop_back();
	unsigned size() const;
	elementType at(int index) const;
	bool empty() const;
	void clear();
	void swap(Vector v2);
private:
	unsigned int vector_size;
	unsigned int vector_capacity;
	elementType * pArray;
};

#endif

