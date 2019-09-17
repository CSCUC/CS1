#include <iostream>
using namespace std;



int main()
{
	int num1, num2, num3, num4, num5;
	int smallNum, largeNum;

	cout << "Input 5 different integers" << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;



	if (num1 
		< num2 & num1 < num3 & num1 < num4 & num1 < num5 )
	{
		smallNum = num1;
	}
	else if (num1 > num2 & num1 > num3 & num1 > num4 & num1 > num5)
	{
		largeNum = num1;
	}


	if (num2 < num1 & num2 < num3 & num2 < num4 & num2 < num5)
	{
		smallNum = num2;
	}
	else if (num2 > num1 & num2 > num2 & num1 > num4 & num2 > num5)
	{
		largeNum = num2;
	}

	if (num3 < num1 & num3 < num2 & num3 < num4 & num3 < num5)
	{
		smallNum = num3;
	}
	else if (num3 > num1 & num3 > num2 & num3 > num4 & num3 > num5)
	{
		largeNum = num3;
	}

	if (num4 < num1 & num4 < num2 & num4 < num3 & num4 < num5)
	{
		smallNum = num4;
	}
	else if (num4 > num1 & num4 > num2 & num4 > num3 & num4 > num5)
	{
		largeNum = num4;
	}


	if (num5 < num1 & num5 < num2 & num5 < num3 & num5 < num4)
	{
		smallNum = num5;
	}
	else if (num5 > num1 & num5 > num2 & num5 > num3 & num5 > num4)
	{
		largeNum = num5;
	}


	cout << endl << endl;


	cout << "Smallest is: " << smallNum << endl;
	cout << "Largest is: " << largeNum << endl;



	system("pause");
	return 0;

}