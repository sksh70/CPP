/*
Write a C++ program to display an integer in reverse order. Your program should include following
method to display an integer in reverse order:

void reverse (int number)

For example, reverse (1234) to display 4321. Write a test program that prompts the user to
enter an integer and display in reversal. Your program should read 1234 as one integer.
*/
#include <iostream>

using namespace std;
void reverse(int number);

int main()
{
	int input;

	cout << "Enter an Integer: ";
	cin >> input;

	if (cin.fail())
	{
		cout << "ERROR: Please enter integer only!";
		return 1;
	}

	reverse(input);
	return 0;
}

void reverse(int number)
{
	int input = number, reversed = 0, remainder;

	while (number != 0)
	{
		remainder = number % 10;
		reversed = reversed * 10 + remainder;
		number /= 10;
	}
	cout << "Reverse Order: " << reversed;
}
