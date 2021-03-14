/*
Build a program that gets 10 integers input from users and perform the function for each of the following process: -
a) fill_array function to fill array with the input from users
b) sum_array function to sum and return the sum of all values in the array
c) find_smallest function to find and return the smallest value in the array
d) find_compare function to find and return all values in the array smaller than integer max 20. You should pass this value from main function to this function.
e) return_largest function to return the location of the largest value in the array.

Subsequently, write the statements in main function to call and passing the arguments (if any) 
to each of the above functions, as well as displaying the returned result in the console.
*/
#include <iostream>

using namespace std;

void fill_array(int array[]);
int sum_array(int array[]);
int find_smallest(int array[]);
int find_compare(int array[]);
int return_largest(int array[]);

int main()
{
	int array[10];

	fill_array(array);
	sum_array(array);
	find_smallest(array);
	find_compare(array);
	return_largest(array);

	return 0;
}

//fill array with the input from users
void fill_array(int array[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> array[i];
	}
}

//sum and return the sum of all values in the array
int sum_array(int array[])
{
	int sum = 0;
	
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}

	cout << "\nThe sum of the entered values is : " << sum;
	return sum;
}

//find and return the smallest value in the array
int find_smallest(int array[])
{
	int smallest = array[0];

	for (int i = 0; i < 10; i++)
	{
		if (smallest > array[i])
		{
			smallest = array[i];
		}
	}

	cout << "\nThe smallest of the entered values is : " << smallest;
	return smallest;
}

//find and return all values in the array smaller than integer max 20
int find_compare(int array[])
{
	cout << "\nThe entered value(s) that are smaller than 20 is : ";

	int compare = 0;

	for (int i = 0; i < 10; i++)
	{
		if (array[i] < 20)
		{
			compare = array[i];
			cout << compare << " ";
		}
	}

	return compare;
}

//return the location of the largest value in the array. 
int return_largest(int array[])
{
	int largest = array[0];

	for (int i = 0; i < 10; i++)
	{
		if (largest < array[i])
		{
			largest = array[i];
		}
	}

	int location = 0;

	for (int i = 0; i < 10; i++)
	{
		if (array[i] == largest)
		{
			location = i;
		}
	}

	cout << "\nThe location of the largest values is : " << location;
	return location;
}