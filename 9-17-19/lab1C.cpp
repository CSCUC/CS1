#include <iostream>
using namespace std;

int main()
{
	int numBig, num1, num2, num3, num4, num5;
	int numHolder;

	cout << "Enter a 5 digit number" << endl;
	cin >> numBig;
	cout << endl;



	num1 = numBig % 10;
	numHolder = numBig / 10;
	num2 = numHolder % 10;
	numHolder = numHolder / 10;
	num3 = numHolder % 10;
	numHolder = numHolder / 10;
	num4 = numHolder % 10;
	numHolder = numHolder / 10;
	num5 = numHolder % 10;


	cout << "Your number :" << numBig << endl;
	cout << num5 << endl;
	cout << num4 << endl;
	cout << num3 << endl;
	cout << num2 << endl;
	cout << num1 << endl;


	system ("pause");
	return 0;
}