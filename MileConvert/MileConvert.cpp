// Jeremy Harrell
// ITSE1307
// Convert Programming Problem km to miles. 
// Making a program that converts Kilo meters to miles 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int KM = 1;
	double Miles = .621371;
	float TOTAL = KM * Miles;

	cout << "Enter Kilometer(s): " << endl;
	cin >> KM;

	cout << "Your total: " << KM * Miles << endl;
    return 0;
}

