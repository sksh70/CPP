/*
Write a program that interacts with the user as the following:
(1) Carbon Monoxide
(2) Hydrocarbons
(3) Nitrogen Oxides
(4) Nonmethane Hydrocarbons
Enter pollutant number >> 2
Enter odometer reading >> 40112
Emissions exceed permitted level of 0.30 grams/mile.

Use the table of emissions limits below to determine the appropriate message.
							First 50,000 Miles		Second 50,000 Miles
Carbon Monoxide				3.5 grams/mile			4.5 grams/mile
Hydrocarbons				0.30 grams/mile			0.40 grams/mile
Nitrogen Oxides				0.40 grams/mile			0.50 grams/mile
Nonmethane Hydrocarbons		0.25 grams/mile			0.31 grams/mile
*/
#include <iostream>

using namespace std;

int main()
{
	int pollutant;
	double emissions, odometer;

	emissions = 0;

	cout << "(1)  Carbon Monoxide" << endl;
	cout << "(2)  Hydrocarbons" << endl;
	cout << "(3)  Nitrogen Oxides" << endl;
	cout << "(4)  Nonmethane Hydrocarbons\n\n\n";

	cout << "Enter pollutant number >> ";
	cin >> pollutant;

	if (cin.fail() || pollutant > 4 || pollutant < 1)
	{
		cout << "\nError: Please enter a number between 1 to 4!";
		return 1;
	}

	cout << "Enter odometer reading >> ";
	cin >> odometer;

	if (cin.fail())
	{
		cout << "\nError: Please enter a number between 1 to 4!";
		return 1;
	}
	else if (odometer < 0)
	{
		cout << "\nError: Please enter positive number!";
		return 1;
	}

	switch (pollutant)
	{
		case 1: 
			if (odometer <= 50000)
			{
				emissions = 3.5;
			}
			else
			{
				emissions = 4.5;
			}
			break;

		case 2:
			if (odometer <= 50000)
			{
				emissions = 0.30;
			}
			else
			{
				emissions = 0.40;
			}
			break;

		case 3:
			if (odometer <= 50000)
			{
				emissions = 0.40;
			}
			else
			{
				emissions = 0.50;
			}
			break;

		case 4:
			if (odometer <= 50000)
			{
				emissions = 0.25;
			}
			else
			{
				emissions = 0.31;
			}
			break;

		default:
			cout << "\nError: Please enter a number between 1 to 4!";
			break;
	}

	cout << "Emissions exceed permitted level of " << emissions << " grams/mile.";
	return 0;
}