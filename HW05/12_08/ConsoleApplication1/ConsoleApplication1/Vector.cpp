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
	else
		return false;
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
	if (this == &v2)
		return;
	else
	{
		int temp_size = vector_size;
		int temp_capacity = vector_capacity;
		elementType * pTemp = new elementType[vector_capacity];
		for (int i = 0; i < vector_size; i++)
			pTemp[i] = pArray[i];

		vector_size = v2.vector_size;
		vector_capacity = v2.vector_capacity;
		pArray = v2.pArray;

		v2.vector_size = temp_size;
		v2.vector_capacity = temp_capacity;
		v2.pArray = pTemp;

		//After debugging/working on this for a couple hours, i have finally realized that I cannot
		//switch the input object's stuff with the original objects because I am not passing by reference
		//I can only give the input objects values to the origninal object

	}
}

