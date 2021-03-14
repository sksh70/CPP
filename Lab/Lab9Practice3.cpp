/*
Create a class Container.There are two functions in the class, calculateArea() and
calculateVolume().The program will receive inputs from userand the inputs will be passed
to the class Container for calculating the areaand volume.Declare the necessary variables.
*/
#include <iostream>

using namespace std;

class container
{
	public:
		container(double l, double b, double h)
		{
			length = l;
			breadth = b;
			height = h;
		}

		void calculateArea()
		{
			area = length * breadth;
		}

		void calculateVolume()
		{
			volume = length * breadth * height;
		}

		void display()
		{
			cout << "Area of container = " << area << endl;
			cout << "Volume of container = " << volume;
		}

	private:
		double length, breadth, height, area, volume;
};

int main()
{
	double l, b, h;

	cout << "Please enter container length: ";
	cin >> l;

	cout << "Please enter container breadth: ";
	cin >> b;

	cout << "Please enter container height: ";
	cin >> h;

	container input(l,b,h);
	input.calculateArea();
	input.calculateVolume();
	input.display();

	return 0;
}