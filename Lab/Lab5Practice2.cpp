/*
Write a complete program to find the smallest test scores entered. Assume that user will key
positive number and that -1 is used as a sentinel (value to stop). When -1 is entered the program
must display the largest number. Your program should include following functions :

void calculateScore ( int number)
- to find out and display the smallest test scores
*/
#include <iostream>

using namespace std;
void calculateScore(int number);

int main()
{
	int number = 0;

	cout << "Enter a test score (-1 to stop): ";

	calculateScore(number);
	return 0;
}

void calculateScore(int number)
{
	int sum = 0, counter = 1, lowest = 0;

	while (cin >> number)
	{
		if (number == -1)
		{
			break;
		}
		cout << "Enter a test score (-1 to stop): ";
		sum = sum + number;
		
		if (counter == 1)
		{
			lowest = number;
			counter++;
		}
		else
		{
			if (number < lowest)
			{
				lowest = number;
			}
		}
	}

	cout << "The lowest test score : " << lowest << endl;
	cout << "The sum of test score : " << sum;
	cin.clear();
}