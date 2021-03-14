/*
Build a program that capable to random an integer between 1-100. The program will print:
a. All odd numbers of the input. Solve this problem using while loop.
b. All even numbers of the input. Solve this problem using do while loop.
c. All prime numbers of the input. Solve this problem using nested for loops.
*/ 
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	//random integer
	srand(time(0));
	int rng = rand() % 100 + 1;

	cout << "You have randomized integer: " << rng << endl;
	
	//odd integers - while loop
	cout << "The odd integers are:" << endl;
	int odd = 1;

	while (odd <= rng)
	{
		if (odd % 2 == 1)
		{
			cout << odd << " ";
		}
		odd++;
	}

	//even integers - do while loop
	cout << "\n\nThe even integers are:" << endl;
	int even = 1;

	do
	{
		if (even % 2 == 0)
		{
			cout << even << " ";
		}
		even++;
	} 
	while (even <= rng);

	//prime numbers - nested for loops
	cout << "\n\nThe prime integers are:" << endl;
	int a = 0, b = 0, counter = 0;

	for (a = 1; a <= rng; a++)
	{
		for (b = 2; b <= sqrt(a); b++)
		{
			if (a % b == 0)
			{
				counter++;
			}
		}
		if (counter == 0 && a != 1)
		{
			cout << a << " ";
			counter = 0;
		}
		counter = 0;
	}

	return 0;
}