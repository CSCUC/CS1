#include <iostream>
using namespace std;



int main()
{
	int num1 , num2, num3;
	int sum, avg, prod, smallNum, largeNum;

	cout << "Input 3 different integers" << endl;
	cin >> num1 >> num2 >> num3;

	sum = num1 + num2 + num3;
	avg = (num1 + num2 + num3) / 3;
	prod = num1 * num2 * num3;

	if (num1 < num2 & num1 < num3)
	{
		smallNum = num1;
	}
	else if (num1 > num2 & num1 > num3)
	{
		largeNum = num1;
	}

	if (num2 < num1 & num2 < num3)
	{
		smallNum = num2;
	}
	else if (num2 > num1 & num2 > num3)
	{
		largeNum = num2;
	}

	if (num3 < num1 & num3 < num2)
	{
		smallNum = num3;
	}
	else if (num3 > num1 & num3 > num2)
	{
		largeNum = num3;
	}

	
	cout << endl << endl;
	
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << avg << endl;
	cout << "Product is: " << prod << endl;
	cout << "Smallest is: " << smallNum << endl;
	cout << "Largest is: " << largeNum << endl;



	system("pause");
	return 0;

}