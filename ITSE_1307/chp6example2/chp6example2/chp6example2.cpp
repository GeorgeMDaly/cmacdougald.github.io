// chp6example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Function Prototypes
double convertKMtoM(double dblKilometers = 1.0); //w default value
double convertMtoKM(double dblMiles); //w/o default value
int printMenu();
char getMenuChoice();
double inputBaseUnit(string strMessage);

int main()
{
	//Loop until the user decides to quit
	while (getMenuChoice() != 'Q');

    return 0;
}

double convertMtoKM(double dblMiles) {
	//Converts from miles to kilometers
	double dblKilometers = 1.609344;
	dblKilometers = dblMiles * dblKilometers;
	return dblKilometers;
}

double convertKMtoM(double dblKilometers) {
	//Converts from kilometers to miles
	return dblKilometers * 0.621371;
}

int printMenu() {
	//Prints out the menu of options
	cout << "Welcome to distance convert:" << endl;
	cout << "K) Convert from Kilometers to Miles" << endl;
	cout << "M) Convert from Miles to Kilometers" << endl;
	cout << "Enter your choice (K, M, or Q to quit): ";
	return 0;
}

char getMenuChoice() {
	//Gets the users menu choice and runs the logic for the action picked
	char chrChoice = ' ';
	printMenu();
	cin >> chrChoice;
	chrChoice = toupper(chrChoice);
	switch (chrChoice) {
		case 'K':
			cout << "Miles: " << convertKMtoM(inputBaseUnit("Enter number of kilometers: ")) << endl;
			break;
		case 'M':
			cout << "KM: " << convertMtoKM(inputBaseUnit("Enter number of miles: ")) << endl;
			break;
		case 'Q':
			cout << "Quitting" << endl;
			break;
		default:
			cerr << "Invalid User Choice" << endl;
	}
	return chrChoice;
}

double inputBaseUnit(string strMessage) {
	//Prompts the user and returns a double from the user
	double dblBase = 0.0;
	cout << strMessage;
	cin >> dblBase;
	return dblBase;
}
