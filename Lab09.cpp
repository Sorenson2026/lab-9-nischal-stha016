/* A program that reads a list of student names from a file and determines the first and last names alphabetically, as well as the total number of names in the file.
By: Nischal Shrestha
Date: 3/17/2026
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// A function to read student names from a file and analyze them
int main() 
{
	ifstream file;
	string filename, name, firstName, lastName;
	int count = 0;

	// Greet the user and ask for the file name
	cout << "Welcome to the Student Name Analyzer!" << endl;
	cout << "Enter the name of the file: ";
	cin >> filename;
	
	// Open the file
	file.open(filename);
	// Check if the file was opened successfully
	if (!file) 
	{
		cout << "Error: Could not open the file " << filename << endl;
		return 1;
	}
	// If the file is opened successfully, read the names and analyze them
	if (file)
	{
		while (getline(file, name)) // Read each name from the file
		{
			if (count == 0)
			{
				firstName = lastName = name;
			}
			else
			{
				if (name < firstName)
				{
					firstName = name;
				}
				if (name > lastName)
				{
					lastName = name;
				}

			}
			count++;
		}
		
	}
	file.close();
	
	// Display the results
	cout << "First name alphabetically: " << firstName << endl;
	cout << "Last name alphabetically: " << lastName << endl;
	cout << "Total number of names: " << count << endl;
	return 0;
}
