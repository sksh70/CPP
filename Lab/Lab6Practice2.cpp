/*
Write a program that initializes an array with ten random integers and then prints four lines of output, containing
• Every element at an even index.
• Every even element.
• All elements in reverse order.
• Only the first and last element.
*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int numbers[10], reversed[10], even[10], even_index[10];

	//random integer
	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		numbers[i] = rand() % 99 + 1;
		cout << numbers[i];
		cout << " ";
	}

	//elements at even indexes
	cout << "\nElements at even indexes: ";
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			even_index[i] = numbers[i];
			cout << even_index[i] << " ";
		}
	}

	//even elemets
	cout << "\nEven elements: ";
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			even[i] = numbers[i];
			cout << even[i] << " ";
		}
	}

	//reversed elements
	for (int i = 0; i < 10; i++)
	{
		reversed[i] = numbers[10 - i - 1];
	}

	cout << "\nAll elements in reverse: ";
	for (int i = 0; i < 10; i++)
	{
		cout << reversed[i] << " ";
	}

	//first and last element
	cout << "\nFirst and last elements: " << numbers[0] << " " << numbers[9];
	return 0;
}