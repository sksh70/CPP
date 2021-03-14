/*
Write a program that prompts the user to enter the integer number and uses nested loops to print the following output:

Enter an Integer: 3
321
21
1
*/
#include <iostream>

using namespace std;

int main()
{
	int input, a, b;

	cout << "Enter an Integer: ";
	cin >> input;
	
	if (cin.fail())
	{
		cout << "ERROR: You can only enter an Integer!";
		return 1;
	}

	for (a = input; a >= 1; a--)
	{
		for (b = a; b >= 1; b--)
		{
			cout << b;
		}
		cout << endl;
	}

	return 0;
}