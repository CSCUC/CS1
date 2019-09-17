#include <iostream>	
using namespace std;

int main()
{
	//Names of integers.
	int number1;
	int number2;
	int number3;
	int smallest;
	int largest;

	cout << "Enter 3 different numbers" << endl;
	
	
	cin >> number1 >> number2 >> number3; //Inputs for the integers

	largest = number1;	// Finding the Largest integer.

	if (number1 < number2)
		largest = number2;

	if (number2 < number3)
		largest = number3;
	
	smallest = number1;	// Finding the smallest integer.


	if (number2 < smallest)
		smallest = number2;
	
	if (number3 < smallest)
		smallest = number3;
	
	//The final output for Sum, Average, Product, Smallest, and Largest.

	cout << "The sum is " << number1 + number2 + number3 << endl << "The Average is " << (number1+number2+number3) / 3 << endl << "Product is " << number1*number2*number3 << endl <<"The Largest is "<< largest<<endl <<"The smallest is "<< smallest<<endl;






	system("pause");
	return 0;
}