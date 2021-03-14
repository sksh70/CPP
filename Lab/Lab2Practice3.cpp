/*
Write a program that prompts the user to enter a positive integer ranging from 0 to 65535.
Subsequently, write an algorithm to break the entered integer into a sequence of individual digits
and then prints them vertically (each on one line), first forward and then reversed (the last one
first), as shown in the following design:

Please enter an integer between 0 and 65535 : 65432
The forward sequence:
				6
				5
				4
				3
				2
The reversed sequence:
				2
				3
				4
				5
				6
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	unsigned short int input;
	int a, b, c, d, e;

	cout << "Please enter an integer between 0 and 65535 : ";
	cin >> input;

	a = input / 10000 % 10;
	b = input / 1000 % 10;
	c = input / 100 % 10;
	d = input / 10 % 10;
	e = input / 1 % 10;

	cout << "The forward sequence:\n";
	cout << setw(17) << a << endl;
	cout << setw(17) << b << endl;
	cout << setw(17) << c << endl;
	cout << setw(17) << d << endl;
	cout << setw(17) << e << endl;

	cout << "The reversed sequence:\n";
	cout << setw(17) << e << endl;
	cout << setw(17) << d << endl;
	cout << setw(17) << c << endl;
	cout << setw(17) << b << endl;
	cout << setw(17) << a << endl;

	return 0;
}