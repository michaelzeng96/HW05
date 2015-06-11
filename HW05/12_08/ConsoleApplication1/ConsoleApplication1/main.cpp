#include "Vector.h"
#include "Vector.cpp"
#include <vector>

int main()
{
	Vector<int> intVector;
	
	for (int i = 0; i < 10; i++)
		intVector.push_back(i + 1);

	intVector.pop_back();
	cout << intVector.empty() << endl;
	cout << intVector.at(3) << endl;
	
	intVector.clear();
	Vector<int> intVector1;

	intVector1.push_back(1);
	Vector<string> stringVector1;
	Vector<string> stringVector;
	stringVector.push_back("Dooceedoo");

	stringVector.swap(stringVector1);

	cout << " ";

	vector<int> v123;
	vector<int>v234;

	v123.swap(v234);

	return 0;
}