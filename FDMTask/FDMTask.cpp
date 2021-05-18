// FDMTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LCDConversion.h"
#include <vector>

using namespace std;


int main()
{
	LCDConversion i1("   ", " | ", " | ");
	LCDConversion i2(" _ ", " _|", "|_ ");
	LCDConversion i3(" _ ", " _|", " _|");
	LCDConversion i4("   ", "|_|", "  |");
	LCDConversion i5(" _ ", "|_ ", " _|");
	LCDConversion i6(" _ ", "|_ ", "|_|");
	LCDConversion i7(" _ ", "  |", "  |");
	LCDConversion i8(" _ ", "|_|", "|_|");
	LCDConversion i9(" _ ", "|_|", " _|");
	
    int convert;
	vector<int> convertarray;
	
	std::cout << "Please Enter a Number to Convert";
	try
	{
		cin >> convert;
		
	}
	catch (const std::exception&)
	{
		cout << "Error Occurred";
	}
	if (convert > 0) {
		convertarray.push_back(convert);
	}

	switch (convert)
	{
	case 1:
		cout << i1.getline1();
		cout << i1.getline2();
		cout << i1.getline3();
		break;
	case 2:
		cout << i2.getline1();
		cout << i2.getline2();
		cout << i2.getline3();
		break;
	case 3:
		cout << i3.getline1();
		cout << i3.getline2();
		cout << i3.getline3();
		break;
	case 4:
		cout << i4.getline1();
		cout << i4.getline2();
		cout << i4.getline3();
		break;
	case 5:
		cout << i5.getline1();
		cout << i5.getline2();
		cout << i5.getline3();
		break;
	case 6:
		cout << i6.getline1();
		cout << i6.getline2();
		cout << i6.getline3();
		break;
	case 7:
		cout << i7.getline1();
		cout << i7.getline2();
		cout << i7.getline3();
		break;
	case 8:
		cout << i8.getline1();
		cout << i8.getline2();
		cout << i8.getline3();
		break;
	case 9:
		cout << i9.getline1();
		cout << i9.getline2();
		cout << i9.getline3();
		break;
	default:
		break;
	}
	
}