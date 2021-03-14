/*
Write a C++ program that creates customer’s bills for a carpet company when the following information is given :
i. the length and the width of the carpet in feet
ii. the carpet price per square foot
iii. the percent discount for each customer

The labor cost is fixed at $2.50 per square foot. It is to be defined as a constant. The tax rate
is 5.5% applied before the discount. It is also to be defined as a constant. The input data consist
of a set of three integers presenting the length and width of the room to be carpeted, the
percentage of the discount the owner gives to a customer, and a real number representing the
unit price of the carpet. The program is to prompt the user for this input as shown below.

The program’s design should use the main function to complete the following tasks:
i. Read data from the keyboard. This function is to use addresses to read all data and place them in the calling function’s variables.
ii. Calculate and print the subtotal price, including the mathematical formula to calculate area, carpet cost and labor cost.
iii. Calculate and print the discount price on company offers.
iv. Calculate and print Tax price based on a constant of 5.5%
v. Calculate and print the total price with discount and tax.
vi. Print t the company header and measurements
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double room_length, room_width, discount, carpet;
	const double labor = 2.5, tax = 5.5;

	cout << "Length of room(feet) => ";
	cin >> room_length;

	cout << "Width of room(feet) => ";
	cin >> room_width;

	cout << "Customer discount (percent) => ";
	cin >> discount;

	cout << "Cost per square foot (XXX.XX) => ";
	cin >> carpet;

	//measurement
	double area = room_length * room_width;

	cout << "\nMEASUREMENT\n\n";
	cout << fixed << setprecision(2);
	cout << setw(7) << "Length" << setw(23) << room_length << " ft\n";
	cout << setw(6) << "Width" << setw(24) << room_width << " ft\n";
	cout << setw(5) << "Area" << setw(26) << area << " square ft\n\n";

	//charges
	cout << "CHARGES\n\n";
	cout << "DESCRIPTION" << setw(28) << "COST/SQ.FT" << setw(19) << "CHARGE\n";
	cout << "-------------" << setw(26) << "----------" << setw(23) << "------------\n";

	double carpet_charge = carpet * area;
	double labor_charge = labor * area;

	cout << "Carpet" << setw(26) << "$ " << carpet << setw(16) << "$ " << setw(9) << carpet_charge << endl;
	cout << "Labor" << setw(27) << "$ " << labor << setw(16) << "$ " << setw(9) << labor_charge << endl;

	double subtotal = carpet_charge + labor_charge;

	cout << setw(62) << "------------\n";
	cout << setw(40) << "SUB TOTAL" << setw(7) << ":" << setw(4) << "$" << setw(10) << subtotal << endl;

	//The tax rate is 5.5 % applied before the discount
	double vat = subtotal * tax / 100;
	double taxed_subtotal = subtotal + vat;
	double discount_charge = taxed_subtotal * discount / 100;

	cout << setw(62) << "------------\n";
	cout << setw(41) << "DISCOUNT (" << fixed << setprecision(0) << discount << "%)" << setw(2) << ":" << setw(5) << "$ " << setw(9) << fixed << setprecision(2) << discount_charge << endl;
	cout << setw(36) << "VAT (" << fixed << setprecision(1) << tax << "%)" << setw(6) << ":" << setw(4) << "$" << setw(10) << fixed << setprecision(2) << vat << endl;

	double total = taxed_subtotal - discount_charge;

	cout << setw(62) << "------------\n";
	cout << setw(36) << "TOTAL" << setw(11) << ":" << setw(4) << "$" << setw(10) << total << endl;
	return 0;
}