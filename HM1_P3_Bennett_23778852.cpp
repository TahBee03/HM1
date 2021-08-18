/*
NAME: Talike Bennett
EMPLID: 23778852
*/

#include <iostream>
#include <cmath> //Library needed to use min() and max().

using namespace std;

int main() {

	//Variables to store user values.
	double num1;
	double num2;
	double num3;
	double num4;

	//Variables to store minimum and maximum values.
	double minNum;
	double maxNum;

	cout << "Enter four real numbers between 0 and 1,000,000: " << endl;

	cin >> num1; //num1 takes the value of the first number.
	cin >> num2; //num2 takes the value of the second number.
	minNum = min(num1, num2); //minNum takes the smallest value between num1 and num2.
	maxNum = max(num1, num2); //maxNum takes the largest value between num1 and num2.

	cin >> num3; //num3 takes the value of the third number.
	minNum = min(minNum, num3); //If num3 < minNum, then minNum = num3.
	maxNum = max(maxNum, num3); //Else if num3 > maxNum, then maxNum = num3.

	cin >> num4; //num4 takes the value of the fourth number.
	minNum = min(minNum, num4); //If num4 < minNum, then minNum = num4.
	maxNum = max(maxNum, num4); //Else if num4 > maxNum, then maxNum = num4.

	cout << endl;
	cout << "The difference between the largest number (" << maxNum << ") and smallest number (" << minNum << ") is: " << maxNum - minNum << endl;

	return 0;

}