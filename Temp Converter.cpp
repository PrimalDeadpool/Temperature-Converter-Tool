/*Tool for temperature conversion
David Arturo Martinez Valenzuela
December 12, 2021*/

#include<iostream>
using namespace std;

int main()
{
	double fahrenheit, celsius; //variable names
	char y_or_n_choice, C_or_F_choice; //variables for questions with choice

choice: //loop bookmarker

		cout << "Enter c for Celsius to Fahrenheit conversion,\nEnter f for Fahrenheit to Celsius conversion." << endl; //asking for choice
		cin >> C_or_F_choice; //choice input

	if (C_or_F_choice == 'c') //if statement for conversion of Celsius to Fahrenheit
	{
		cout << "Enter Celsius temperature:"; //ask for Celsius temperature
		cin >> celsius; //input Celsius temperature
			fahrenheit = (celsius * 1.8) + 32; //formula to convert Celsius degrees to Fahrenheit
		cout << "Temperature in Celsius: " << celsius << " degrees celsius" << endl; //value inputted
		cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees fahrenheit" << endl; //conversion result
	}

	else if (C_or_F_choice == 'f') //else if statement for conversion of Fahrenheit to Celsius
	{
		cout << "Enter Fahrenheit temperature:"; //ask for Fahrenheit temperature
		cin >> fahrenheit; //input Fahrenheit temperature
			celsius = (fahrenheit - 32.0) / 1.8; //formula to convert Fahrenheit temperature to Celsius temperature
		cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees fahrenheit." << endl; //value inputted
		cout << "Temperature in Celsius: " << celsius << " degrees celsius." << endl; //conversion result
	}

	else //else statement incase of unexpected value on choice
	{
		cout << "Please enter valid input!" << endl; //error code
		goto choice; //loop to bookmarker
	}

choice2: //second loop bookmarker

		cout << "Do you want to convert another value? Enter y or n." << endl; //option to do another conversion
		cin >> y_or_n_choice; //input choice

	if (y_or_n_choice == 'y') //if statement to make program do another conversion
	{
		goto choice; //loop to bookmarker
	}

	else if (y_or_n_choice == 'n') //else if statement to end program
	{
		cout << "Thank you! Feel free to use my conversion tool again!";
		return 0;
	}

	else //else statement incase of unexpected input
	{
		cout << "Enter valid input!" << endl; //error code
		goto choice2; //loop to second bookmarker
	}
}