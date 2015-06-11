#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	for (unsigned int i = 0; i < v.size(); i++)
	{
		//first generate random number (for the index to be swapped)
		
			int index = rand() % v.size();
			//then swap
			T swap = v[i];
			v[i] = v[index];
			v[index] = swap;

	}
}

int main()
{
	srand(time(NULL));
	vector<int> numbers(10);

	//user input numbers
	cout << "Enter 10 numbers. They will be shuffled nicely after you enter all 10 digits." << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}

	//shuffle cards and display
	shuffle(numbers);

	cout << "Shuffled deck is: ";

	for (unsigned int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i]<<" ";
	}
	
	return 0;
}