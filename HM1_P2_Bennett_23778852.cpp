/*
NAME: Talike Bennett
EMPLID: 23778852
*/

#include <iostream>
#include <iomanip> //Library needed to set number of decimal digits.
#include <cstdlib> //Library needed to use rand() and srand().
#include <cmath> //Library needed to use math functions.

using namespace std;

int main() {

	const int studentID = 23778852;
	srand(studentID);
	double randNum = (((rand() % 9999) + 90001) / 10000.0) * -1; //*

	/*
	*BREAKDOWN:
	rand() -> range: [0, RAND_MAX]
	 % 9999 -> range: [0, 9998]
	  + 90000 -> range: [90001, 99999]
	   / 10000.0 -> range: [9.0001, 9.9999]
	    * -1 -> range: [-9.9999, -9.0001]
	*/

	cout << fixed << setprecision(4); //All numbers that are printed after this point will have 4 decimal digits. Ignored if number is converted to an integer.
	cout << "Random number: " << randNum << endl;
	cout << "Absolute value of random number: " << abs(randNum) << endl; 
	cout << "Ceiling of random number: " << static_cast<int>(ceil(randNum)) << endl;
	cout << "Floor of random number: " << static_cast<int>(floor(randNum)) << endl;
	cout << "Decimal portion of random number: " << static_cast<int>((randNum * 10000) * -1) % 10000 << endl; //**

	/*
	**BREAKDOWN:
	randNum -> [-9.9999, -9.0001]
	 * 10000 -> [-99999, -90001]
	  * -1 -> [90001, 99999]
	   % 10000 -> [0001, 9999]
	*/

	return 0;
}
