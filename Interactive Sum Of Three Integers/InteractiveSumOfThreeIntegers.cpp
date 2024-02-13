// InteractiveSumOfThreeIntegers.cpp 
// Daniel Alteon
// ET-505
// 10.08.17
// An interactive program that allows users to input integers to be summed up

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x;
	int y;
	int z;
	int sum;

	cout << "What is the value of variable x? " << endl;
	cin >> x;
	cout << "The value of variable x is " << x << "." << endl;
	cout << "What is the value of variable y? " << endl;
	cin >> y;
	cout << "The value of variable y is " << y << "." << endl;
	cout << "What is the value of variable z? " << endl;
	cin >> z; 
	cout << "The value of variable z is " << z << "." << endl;
	sum = x + y + z;
	cout << "The sum of all variables is " << sum << "." << endl;

    return 0;
}

/*

Case 1*

What is the value of variable x?
25
The value of variable x is 25.
What is the value of variable y?
25
The value of variable y is 25.
What is the value of variable z?
25
The value of variable z is 25.
The sum of all variables is 75.

Case 2*

What is the value of variable x?
30
The value of variable x is 30.
What is the value of variable y?
90
The value of variable y is 90.
What is the value of variable z?
438
The value of variable z is 438.
The sum of all variables is 558.

Case 3* 

What is the value of variable x?
63
The value of variable x is 63.
What is the value of variable y?
75
The value of variable y is 75.
What is the value of variable z?
87
The value of variable z is 87.
The sum of all variables is 225.

*/
