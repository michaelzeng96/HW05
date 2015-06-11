#include <iostream>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	int i = 0;
	int j = 1;
	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			if(!(list[i] < list[j]))
				break;
		}
	}
	if (i == 5 && j == 5)
		return true;
	else
		return false;
}

int main()
{
	int iArray[5] = { 1, 2, 3, 4, 5 };
	double dArray[6] = { 1.0, 3.0, 5.0, 6.0, 7.0,3.0 };
	string sArray[5] = { string("a"), string("b"), string("c"), string("d") };

	cout << isSorted(iArray, 5) << endl;
	cout << isSorted(dArray, 6) << endl;
	cout << isSorted(sArray, 5) << endl;
	return 0;
}