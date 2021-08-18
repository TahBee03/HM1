/*
NAME: Talike Bennett
EMPLID: 23778852
*/

//Compile: g++ -std=c++0x -o HM1_P1 HM1_P1.cpp

#include <iostream>
#include <cmath> //Library required to use round().

using namespace std;

int main() {

	double x = 0;
	int xInt; //Variable to hold the integer value of x.

	cout << "Enter a six-digit floating-point number:" << endl;
	cout << "(Format: abc.xyz)" << endl; //Clarifies the number format.

	cin >> x;

	//Process of converting x to an integer. Necessary to grab digits. Stores new value in xInt.
	x *= 1000;
	xInt = static_cast<int>(x);

	cout << endl;

	//GIVEN: a-f are digits that make up the six-digit number abcdef.
	cout << "Hundreds digit: " << (xInt / 100000) % 10 << endl; //(abcdef / 100000) % 10 = a % 10 = a
	cout << "Tens digit: " << (xInt / 10000) % 10 << endl; //(abcdef / 10000) % 10 = ab % 10 = b
	cout << "Ones digit: " << (xInt / 1000) % 10 << endl; //(abcdef / 1000) % 10 = abc % 10 = c
	cout << "Tenths digit: " << (xInt / 100) % 10 << endl; //(abcdef / 100) % 10 = abcd % 10 = d
	cout << "Hundredths digit: " << (xInt / 10) % 10 << endl; //(abcdef / 10) % 10 = abcde % 10 = e
	cout << "Thousandths digit: " << xInt % 10 << endl; //abcdef % 10 = f

	//Process of converting xInt to a double. Necessary to round number. Stores new value in x.
	x = static_cast<double>(xInt);
	x /= 1000; 

	cout << "Rounded value (to nearest whole number): " << round(x) << endl; //Rounds the double x.

	return 0;
}
