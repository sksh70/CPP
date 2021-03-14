/*
Build a program that having the following functions.
i. Function name - void odd_or_even(int x)- This function will get an integer from main function and then display whether the input is odd or even number.
ii. Function name - void display(int x)- This function will display welcome message to users.
iii. Function name - int sum_of_x(int sum)- This function will get an integer sum from main function and then check whether the summated integers is smaller than 100 or larger than 100. It will return 1 if the sum value is larger than 100. Otherwise, it will return 2.
iv. Function name - void display_sum(int x)- This function will get an integer from int sum_of_x(int x)function and then display whether the summated integers is smaller than 100 or larger than 100.
v. Function name - void thank_you() This function will display thank you messages for users.
*/ 
#include <iostream>

using namespace std;
void display(int x);
void odd_or_even(int x);
int sum_of_x(int sum);
void display_sum(int x);
void thank_you();

int main()
{
	int x = 0, sum = 0;

	display(x);

	cout << "Please, enter number (0 to exit): ";
	while (cin >> x)
	{
		if (x == 0)
		{
			break;
		}
		
		odd_or_even(x);
		sum = sum + x;
	}

	if (cin.fail())
	{
		cout << "ERROR: Please enter integer only!";
		return 1;
	}
	//cout << "Sum of input: " << sum << endl;
	cin.clear();

	sum_of_x(sum);
	display_sum(x);
	thank_you();

	return 0;
}

void display(int x)
{
	cout << "Welcome to the odd and even number counting program.\n";
	cout << "This program is divided into 5 functions.\n";
	cout << "First part is to display welcome message using a function,\n";
	cout << "Second part is to check whether you have inserted an odd or even number using a function,\n";
	cout << "Third part is to check the limit of sum and return an integer to the main program.\n";
	cout << "Fourth part is to display the message of sum.\n";
	cout << "Last part is to display thank you message.\n";
	cout << "==========================================\n";
}

void odd_or_even(int x)
{
	string input_text = "Please, enter number (0 to exit): ";

	if (x % 2 == 0)
	{
		cout << "You have just entered an EVEN number.\n";
		cout << input_text;
	}
	else
	{
		cout << "You have just entered an ODD number.\n";
		cout << input_text;
	}
}

int sum_of_x(int sum)
{
	if (sum > 100) {
		display_sum(1);
	}
	else if (sum < 100) {
		display_sum(2);
	}
	return sum;
}

void display_sum(int x)
{
	switch (x)
	{
		case 1:
			cout << "The sum of x is more than 100.\n";
			break;
		case 2:
			cout << "The sum of x is less than 100.\n";
			break;
		default:
			break;
	}
}

void thank_you()
{
	cout << "=================================\n";
	cout << "Thank you for using this program.";
}