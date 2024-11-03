#include <iostream>
#include <string>
#include "functions.h"

/*
* Douglas Little
* MS549 Menu with 3 Functions
* Estimated time: 1 hour
* Actual time: 
*/

using namespace std;

int menu()
{
	int choice;
	cout << "Menu options" << endl;
	cout << "1. Calculate BMI " << endl;
	cout << "2. Leap year calculator" << endl;
	cout << "3. Exit" << endl;
	cin >> choice;
	return choice;
}

void calcBMI()
{
	//Prompt the user to enter their weight in pounds
	cout << "Enter weight in pounds: ";
	double weight;
	cin >> weight;

	//Prompt user to enter their height in inches
	cout << "Enter height in inches: ";
	double height;
	cin >> height;

	const double KILOGRAMS_PER_POUND = 0.45359237;
	const double METERS_PER_INCH = 0.0254;

	//Compute BMI
	double weightInKilograms = weight * KILOGRAMS_PER_POUND;
	double heightInMeters = height * METERS_PER_INCH;
	double bmi = weightInKilograms / (heightInMeters * heightInMeters);

	//Display result
	cout << "BMI is " << bmi << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Overweight" << endl;
	else
		cout << "Obese" << endl;
	cout << endl;
}

void leapYear()
{
	cout << "Enter a year: ";
	int year;
	cin >> year;

	//Check if the year is a leap year
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	//Display the result in a message dialog box
	if (isLeapYear)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is not a leap year" << endl;
	cout << endl;
}