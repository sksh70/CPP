/*
Write a program that allow user to enter a series of integers up to 50. The program should allow
to justify how many integers that would like to enter and print the integers in reversed.
*/
#include <iostream>

using namespace std;

int main()
{
	int limit, input[50], reversed[50];

	cout << "You may enter up to 50 integers:\n";
	cout << "How many would you like to enter? ";
	cin >> limit;

	if (cin.fail())
	{
		cout << "\nERROR: Please enter integer only!";
		return 1;
	}

	cout << "\nEnter your number:\n";
	
	for (int i = 0; i < limit; i++)
	{
		cin >> input[i];
		if (cin.fail())
		{
			cout << "\nERROR: Please enter integer only!";
			return 1;
		}
	}

	//Reversed
	for (int i = 0; i < limit; i++)
	{
		reversed[i] = input[limit - i - 1];		
	}

	cout << "\n\nYour numbers reversed are:\n";
	for (int i = 0; i < limit; i++)
	{
		cout << reversed[i] << " ";		
	}

	return 0;
}