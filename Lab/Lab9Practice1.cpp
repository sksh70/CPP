/*
Create a class Rectangle. Provide a constructor to construct a rectangle with a given width and
height, member functions get_perimeter and get_area that compute the perimeter and area,
and a member function void resize(double factor) that resizes the rectangle by
multiplying the width and height by the given factor.
*/
#include <iostream>

using namespace std;

class Rectangle
{
	public:
		Rectangle(double w, double h)
		{
			width = w;
			height = h;
		}

		void get_perimeter()
		{
			perimeter = 2 * (width + height);
		}

		void get_area()
		{
			area = width * height;
		}

		void resize(double factor)
		{
			f = factor;

			width *= factor;
			height *= factor;
		}

		void display()
		{
			cout << "Perimeter & Area of a rectangle:\n\n";
			cout << "Width: " << width << endl;
			cout << "Height: " << height << endl;
			cout << "Perimeter: " << perimeter << endl;
			cout << "Area: " << area << endl << endl;
		}

		void display_resized()
		{
			cout << "Resize factor: " << f << endl;
			cout << "Resized Width: " << width << endl;
			cout << "Resized Height: " << height << endl;
			cout << "Resized Perimeter: " << perimeter << endl;
			cout << "Resized Area: " << area << endl;
		}

	private:
		double width, height, f, perimeter, area;
};

int main()
{
	double w = 10, h = 5, f = 2;
	
	Rectangle input(w, h);
	input.get_area();
	input.get_perimeter();
	input.display();
	input.resize(f);
	input.get_area();
	input.get_perimeter();
	input.display_resized();

	return 0;
}