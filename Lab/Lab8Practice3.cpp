/*
Write a program that:
1) Prompt the user to enter a file name to save the inputs.
2) Prompt the user to enter information/statements.
3) Save the information/statements entered by user to the file name given early.
4) Close the file.
5) Reopen the input file
6) Read all info from the file.
7) Reverse all characters from the reading.
8) Prompt the user to enter a file name to save the outputs.
9) Write the reversed results to the file.

Do not use reverse function provided in the algorithm header file.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string input_filename, output_filename, data;

	ofstream outfile;
	ifstream infile;

	//Prompt the user to enter a file name to save the inputs
	cout << "Please enter a file name for input file : ";
	cin >> input_filename;

	outfile.open(input_filename);

	//Prompt the user to enter information/statements
	cout << "Please enter your information/statements (Enter a dot to stop) : ";
	while (data != ".")
	{
		getline(cin, data);

		//Save the information/statements entered by user to the file name given early
		outfile << data << endl;
	} 

	//Close the file
	outfile.close();

	//Reopen the input file
	infile.open(input_filename);

	//Prompt the user to enter a file name to save the outputs
	cout << "Please enter a file name for output file : ";
	cin >> output_filename;

	outfile.open(output_filename);

	//Read all info from the file
	while (getline(infile, data))
	{
		//Reverse all characters from the reading
		string reversed = "";

		for (int i = data.length() - 1; i >= 0; i--)
		{
			reversed += data[i];
		}

		//Write the reversed results to the file
		outfile << reversed << endl;
	}
	return 0;
}