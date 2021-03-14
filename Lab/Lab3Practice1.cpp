/*
Write a program that calculates the user’s body mass index (BMI) and categorizes it as
underweight, normal, overweight or obese, based on the following table from the United States
Centers for Disease Control:

Below 18.5		Underweight
18.5 – 24.9		Normal
25.0 – 29.9		Overweight
30.0 and above		Obese

Sample Run:
USER’S BODY MASS INDEX (BMI) CALCULATOR
Enter weight in pounds => 600.00
Enter height in inches => 165.50
You BMI is 15.40 and your weight status is underweight.
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float wt_lb, ht_in, bmi;
	string status;
	
	cout << fixed << setprecision(2);
	cout << "USER'S BODY MASS INDEX (BMI) CALCULATOR";
	
	cout << "\n\nEnter weight in pounds => ";
	cin >> wt_lb;

	if (cin.fail())
	{
		cout << "Error: Only numbers are allowed!";
		return 1;
	}
	else if (wt_lb < 0)
	{
		cout << "Error: Please enter positive number!";
		return 1;
	}

	cout << "\nEnter height in inches => ";
	cin >> ht_in;

	if (cin.fail())
	{
		cout << "Error: Only numbers are allowed!";
		return 1;
	}
	else if (ht_in < 0)
	{
		cout << "Error: Please enter positive number!";
		return 1;
	}

	bmi = 703 * wt_lb / pow(ht_in, 2);

	if (bmi < 18.5)
	{
		status = "underweight";
	}
	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		status = "normal";
	}
	else if (bmi >= 25.0 && bmi <= 29.9)
	{
		status = "overweight";
	}
	else if (bmi > 30)
	{
		status = "obese";
	}

	cout << "\nYou BMI is " << bmi << " and your weight status is " + status + ".";
	return 0;
}
