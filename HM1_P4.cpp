/*
NAME: Talike Bennett
HM1, Part 4
*/

#include <iostream>
#include <cmath> //Library needed to use pow() and M_PI.
#include <iomanip> //Library needed to set number of decimal digits.

using namespace std;

int main() {

	double cylinRadius; //Radius of cylinder.
	double cylinHeight; //Height of cylinder.

	double cylinArea; //Surface area of cylinder.
	double cylinVolume; //Volume of cylinder.

	cout << "Enter the radius of the cylinder (in inches): ";
	cin >> cylinRadius;

	cout << "Enter the height of the cylinder (in inches): ";
	cin >> cylinHeight;

	cylinArea = (2 * M_PI * cylinRadius * cylinHeight) + (2 * M_PI * pow(cylinRadius, 2)); //Surface area formula applied.
	cylinVolume = M_PI * pow(cylinRadius, 2) * cylinHeight; //Volume formula applied.

	cout << fixed << setprecision(2); //All numbers that are printed after this point will have 2 decimal digits.
	cout << "Surface Area: " << cylinArea << " square inches" << endl;
	cout << "Volume: " << cylinVolume << " cubic inches" << endl;

	return 0;

}
