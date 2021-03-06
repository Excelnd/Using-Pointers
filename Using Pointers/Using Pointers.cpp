// Using Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



void main()

{

	// declares an integer variable and two pointers variables
	int    num = 10, *point_one, *point_two;
	// assigns the address of variable num to pointer point_one

	point_one = &num;

	// assigns the (address) point_one to point_two
	point_two = point_one;

	cout << "Pointers variables..." << endl;

	cout << "*point_one = " << *point_one << "\n";

	cout << "*point_two = " << *point_two << "\n";

	cout << "\nNormal variable..." << endl;

	cout << "num = " << num << "\n";

	// displays value 10 stored in num since point_one

	// and point_two now point to variable num

	cout << "\n-Both pointer point_one and" << "\n";

	cout << "-point_two point to the same variable num." << "\n";

	cout << "-That is why, they have same value, 10." << endl;

}
