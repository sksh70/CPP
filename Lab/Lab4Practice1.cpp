/*
Write a program to display the numbers 1 through 10 and their squares as demonstrated in Sample Run as below, with the use of :
(i) for statements
(ii) while statements
(iii) do...while statements

Number		Number per squared
========	==================
1					1
2					4
3					9
4					16
5					25
6					36
7					49
8					64
9					81
10					100
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int const num = 10;

	//for loop
	cout << "for statements:" << endl;
	cout << "Number" << setw(40) << "Number per squared" << endl;
	cout << "========" << setw(38) << "==================" << endl;

	for (int a = 1; a <= num; a++)
	{
		cout << a << setw(34) << pow(a, 2) << endl;
	}

	//while loop
	cout << "\n\nwhile statements:" << endl;
	cout << "Number" << setw(40) << "Number per squared" << endl;
	cout << "========" << setw(38) << "==================" << endl;

	int b = 1;

	while (b <= num)
	{
		cout << b << setw(34) << pow(b, 2) << endl;
		b++;
	}

	//do...while loop
	cout << "\n\ndo...while statements:" << endl;
	cout << "Number" << setw(40) << "Number per squared" << endl;
	cout << "========" << setw(38) << "==================" << endl;

	int c = 1;

	do
	{
		cout << c << setw(34) << pow(c, 2) << endl;
		c++;
	} while (c <= num);

	return 0;
}