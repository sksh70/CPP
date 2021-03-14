/*
Create a class Student. For the purpose of this exercise, a student has a name and a total quiz
score. Supply an appropriate constructor and functions get_name(), add_quiz(int score),
get_total_score(), and get_average_score(). To compute the latter, you also need to
store the number of quizzes that the student took.
*/
#include <iostream>

using namespace std;

class Student
{
	public:
		Student(string n)
		{
			name = n;
		}

		string get_name()
		{
			return name;
		}

		void add_quiz(int score)
		{
			total += score;
			attempt++;
		}

		int get_total_score()
		{
			return total;
		}

		void get_average_score()
		{
			if (total > 0)
				average = total / attempt;
		}

		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Total score: " << total << endl;
			cout << "Average score: " << average;
		}

	private:
		int attempt = 0;
		double total = 0, average = 0;
		string name;
};

int main()
{
	string n = "John";

	Student input(n);
	input.get_name();
	input.add_quiz(27);
	input.add_quiz(46);
	input.add_quiz(39);
	input.get_total_score();
	input.get_average_score();
	input.display();

	return 0;
}