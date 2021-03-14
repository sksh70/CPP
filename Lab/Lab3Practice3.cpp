/*
Build a program that calculates the parking fare for the customer who parks their cars in a public parking lot given the following:
i. A character showing the type of vehicle: C for car, B for bus, T for truck
ii. An integer between 0 and 24 showing the hour the vehicle entered the lot
iii. An integer between 0 and 60 showing the minute the vehicle entered the lot
iv. An integer between 0 and 24 showing the hour the vehicle left the lot
v. An integer between 0 and 60 showing the minute the vehicle left the lot

For encouraging people to park for a short period of time, the management uses two different rates for each type of vehicle as shown below:

Vehicle		First Rate		Second Rate
CAR		$ 1.00/hr first 3 hr	$ 2.00 after first 3 hr
TRUCK		$ 1.50/hr first 3 hr	$ 2.50 after first 3 hr
BUS		$ 2.00/hr first 3 hr	$ 3.00 after first 3 hr

No vehicle is allowed to stay in the parking lot later than midnight. If the customer is detected
stay parking lot overnight, the customer is required to pay the penalty fee $ 150.00 per day
plus the parking fare.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int enter_hour, enter_minute, enter_day, enter_month, enter_year, enter_jdn;
	int exit_hour, exit_minute, exit_day, exit_month, exit_year, exit_jdn;
	int jdn2hour, diff_jdn, diff_hour, diff_minute;
	int penalty_fee = 0, const penalty = 150;
	int fare_hour, parking_hour;

	char vehicle_input;
	char car = 'C', bus = 'B', truck = 'T';

	string vehicle_output;
	string line = "------------";
	string error_hour = "ERROR: Please enter a number between 0 - 24";
	string error_minute = "ERROR: Please enter a number between 0 - 60";

	double fare = 0, fare_rate, total;

	cout << "Type of Vehicle ? ";;
	cin >> vehicle_input;

	//Enter time & date
	cout << "Hour vehicle entered lot (0- 24) ? ";
	cin >> enter_hour;

	if (cin.fail() || enter_hour > 24 || enter_hour < 0)
	{
		cout << error_hour;
		return 1;
	}

	if (enter_hour >= 24 || enter_hour >= 0 && enter_hour <= 6)
	{
		cout << "ERROR: Vehicles are not allowed to park from 12 AM - 6 AM";
		return 1;
	}

	cout << "Minute vehicle entered lot (0-60) ? ";
	cin >> enter_minute;

	if (cin.fail() || enter_minute > 24 || enter_minute < 0)
	{
		cout << error_minute;
		return 1;
	}

	cout << "Start date (D M YYYY): ";
	cin >> enter_day >> enter_month >> enter_year;

	//Exit time & date
	cout << "Hour vehicle left lot (0- 24) ? ";
	cin >> exit_hour;

	if (cin.fail() || exit_hour > 24 || exit_hour < 0)
	{
		cout << error_hour;
	}

	cout << "Minute vehicle left lot (0-60) ? ";
	cin >> exit_minute;

	if (cin.fail() || exit_minute > 24 || exit_minute < 0)
	{
		cout << error_minute;
		return 1;
	}

	cout << "Exit date (D M YYYY): ";
	cin >> exit_day >> exit_month >> exit_year;

	//Julian Day Number calculation
	enter_jdn = (1461 * (enter_year + 4800 + (enter_month - 14) / 12)) / 4 + (367 * (enter_month - 2 - 12 * ((enter_month - 14) / 12))) / 12 - (3 * ((enter_year + 4900 + (enter_month - 14) / 12) / 100)) / 4 + enter_day - 32075;
	exit_jdn = (1461 * (exit_year + 4800 + (exit_month - 14) / 12)) / 4 + (367 * (exit_month - 2 - 12 * ((exit_month - 14) / 12))) / 12 - (3 * ((exit_year + 4900 + (exit_month - 14) / 12) / 100)) / 4 + exit_day - 32075;

	diff_jdn = exit_jdn - enter_jdn;
	jdn2hour = diff_jdn * 24;

	//Hour calculation
	if (enter_hour > 12 && enter_hour < exit_hour)
	{
		diff_hour = exit_hour - enter_hour;
	}
	else if (enter_hour > 12 && enter_hour > exit_hour)
	{
		diff_hour = exit_hour - enter_hour + 24;
	}
	else
	{
		diff_hour = exit_hour - enter_hour;
	}

	//Minute calculation
	if (enter_minute > exit_minute)
	{
		diff_minute = exit_minute - enter_minute + 60;
	}
	else
	{
		diff_minute = exit_minute - enter_minute;
	}

	//Parking time calculation
	if (diff_hour == 0 && enter_day != exit_day && enter_month != exit_month && enter_year != exit_year)
	{
		parking_hour = jdn2hour;
	}
	else
	{
		parking_hour = diff_hour;
	}

	if (diff_jdn > 0)
	{
		parking_hour += jdn2hour;
	}

	//Fare hour calculation
	//Add 1 hour if Parking Time minute > 0
	//Prevents free parking if Parking Time < 1 hour
	fare_hour = parking_hour;

	if (diff_minute > 0)
	{
		fare_hour += 1;
	}

	//Vehicle type switch
	switch (vehicle_input)
	{
	case 'C':
		vehicle_output = "Car";

		if (fare_hour > 3)
		{
			fare_rate = 2;

			fare = fare_hour * fare_rate - 3;
		}
		else
		{
			fare_rate = 1;

			fare = fare_hour * fare_rate;
		}
		break;

	case 'B':
		vehicle_output = "Bus";

		if (fare_hour > 3)
		{
			fare_rate = 3;

			fare = fare_hour * fare_rate - 3;
		}
		else
		{
			fare_rate = 2;

			fare = fare_hour * fare_rate;
		}
		break;

	case 'T':
		vehicle_output = "Truck";

		if (fare_hour > 3)
		{
			fare_rate = 2.5;

			fare = fare_hour * fare_rate - 3;
		}
		else
		{
			fare_rate = 1.5;

			fare = fare_hour * fare_rate;
		}
		break;

	default:
		break;
	}

	//Penalty calculation
	//No vehicle is allowed to stay in the parking lot later than midnight.
	if (exit_hour > 0)
	{
		penalty_fee = penalty * diff_jdn;
	}

	//Total
	total = fare + penalty_fee;

	//Output
	cout << "\n\n";
	cout << setw(53) << "A+ Parking Company" << endl;
	cout << setw(55) << "PARKING LOT CHARGE\n\n";

	cout << "Type of Vehicle : " << vehicle_output << endl;
	cout << "TIME-IN" << setw(35) << enter_hour << " : " << enter_minute << endl;
	cout << "DATE-IN" << setw(35) << enter_day << "/" << enter_month << "/" << enter_year << endl;

	cout << "TIME-OUT" << setw(34) << exit_hour << " : " << exit_minute << endl;
	cout << "DATE-OUT" << setw(34) << exit_day << "/" << exit_month << "/" << exit_year << endl;

	cout << "\n" << setw(51) << line << endl;
	cout << "PARKING TIME" << setw(30) << parking_hour << " : " << diff_minute << endl;
	cout << setw(51) << line << endl;

	cout << "PARKING FARE" << setw(30) << "$ " << fixed << setprecision(2) << fare << endl;
	cout << "PENALTY FARE" << setw(30) << "$ " << penalty_fee << endl;

	cout << setw(51) << line << endl;
	cout << "TOTAL CHARGE" << setw(30) << "$ " << total << endl;
	cout << setw(51) << line << endl;
	return 0;
}
