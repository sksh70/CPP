/*
Write a program that calculates mileage reimbursement for a salesperson at a rate of $0.45 per
mile. Your program should interact with the user in this manner.

MILEAGE REIMBURSEMENT CALCULATOR
*********************************
Enter Beginning odometer reading => 13505.2
Enter ending odometer reading => 13810.6
You travelled 305.4 miles. At $ 0.45 per mile, your
reimbursement is $ 137.43.
*/
#include <iostream>

using namespace std;

int main()
{
	double beginning_odometer, ending_odometer;
	const double rate = 0.45;

	cout << "MILEAGE REIMBURSEMENT CALCULATOR" << endl;
	cout << "*********************************\n\n";

	cout << "Enter Beginning odometer reading => ";
	cin >> beginning_odometer;
	cout << endl;
	
	cout << "Enter ending odometer reading =>";
	cin >> ending_odometer;
	cout << endl;

	double miles_travelled = ending_odometer - beginning_odometer;

	cout << "You travelled " << miles_travelled << " miles.";
	cout << " At $ " << rate << " per mile, your \n\nreimbursement is $ " << miles_travelled * rate << ".\n";
	return 0;
}