#include <iostream>
using namespace std;

template<typename T>

int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;  //returns index 
	}
	return -1; //if fails, returns -1
}

int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };
	cout << linearSearch(array, 3, 5) << endl;

	double array1[5] = { 5.34, 3.51, 3.54, 4.32, 5.41 };
	cout << linearSearch(array1, 3.512, 5) << endl;

	string array2[5] = { "fifa", "madden", "nhl", "2k", "pete" };
	cout << linearSearch(array2, string("pete"), 5) << endl;

	return 0;
}