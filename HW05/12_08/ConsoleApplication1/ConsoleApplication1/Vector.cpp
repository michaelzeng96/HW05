#include "Vector.h"


template <typename elementType>
Vector<elementType>::Vector()
{
	vector_capacity = 0;
	vector_size = 0;
	pArray = 0;
}

template <typename elementType>
Vector<elementType>::Vector(int size)
{
	vector_capacity = size;
	vector_size = size;
	pArray = new elementType[size];
	for (int i = 0; i < size; i++)
		pArray[i] = DEFAULT_VALUE;

}
template <typename elementType>
Vector<elementType>::Vector(int size, elementType element)
{
	vector_capacity=size;
	vector_size = size;
	pArray = new elementType[size];
	for (int i = 0; i < size; i++)
		pArray[i] = element;
}


template <typename elementType>
void Vector<elementType>::push_back(elementType element)
{
	vector_size++;

	if (vector_size > vector_capacity)
	{
		elementType *pTempArray = pArray;
		pArray = new elementType[2 * vector_size];
		vector_capacity = 2 * vector_size;
		for (int i = 0; i < vector_size - 1; i++)
			pArray[i] = pTempArray[i];
		pArray[vector_size - 1] = element;
		delete[]pTempArray;
	}
	else
	{
		pArray[vector_size-1] = element;
	}

}

template<typename elementType>
void Vector<elementType>::pop_back()
{
	if (vector_size == 0)
	{
		cout << "Nothing in vector." << endl;
	}
	else
	{
		vector_size--;
		pArray[vector_size] = 0;
	}
}

template <typename elementType>
unsigned Vector<elementType>::size() const
{
	return vector_size;
}

template <typename elementType>
elementType Vector<elementType>::at(int index) const
{
	return pArray[index];
}

template <typename elementType>
bool Vector<elementType>::empty() const
{
	if (vector_size == 0)
		return true;
}

template <typename elementType>
void Vector<elementType>::clear()
{
	for (int i = 0; i < vector_size; i++)
		pArray[i] = 0;
	vector_size = 0;
}

template <typename elementType>
void Vector<elementType>::swap(Vector v2)
{
	elementType * pSwap = pArray;
	pArray = v2&;
	v2 &= pSwap;
}

