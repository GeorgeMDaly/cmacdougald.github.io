// chp5example1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fileOutput;
	ifstream fileInput;
	double dblOne = 5.67;
	double dblTwo = 8.67;
	double dblThree = 9.67;
	double dblSum = 0;
	// File Output
	fileOutput.open("input.dat");
	fileOutput << dblOne << " "
		<< dblTwo << " "
		<< dblThree;
	fileOutput.close();
	// Looped File Input
	fileInput.open("input.dat");

	while (!fileInput.eof()) {
		fileInput >> dblOne;
		cout << dblOne << endl;
		dblSum += dblOne;
	}
	fileInput.close();

	cout << "Sum: " << dblSum << endl;

	return 0;
}

