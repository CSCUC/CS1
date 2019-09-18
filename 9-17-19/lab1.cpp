//Lab 1A: numbercompare.cpp 
#include <iostream> //allows program to perform input and output 
using namespace std; 

int main()
{
	int number1; //first integer read from user 
	int number2; // second integer read from user 
	int number3; // thrid integer read from user 
	int smallest; // smalest integer read from user 
	int largest; // largest integer read from user

	cout << " Input three different integers: "; // prompt 
	/* please write a statement to read in values for number1 number2 and number3 using a single cin statement */ 
	cin >> number1 >> number2 >> number3; 

	largest = number1; // assume first integer is largest 

	/* Please write a statement to determine if number2 is greater than largest. If so assign number2 to largest */

	if (number1 < number2)
		largest = number2;

	/* Please write a statement to determine if number3 is greater than largest. If so assign number3 to largest */ 

	if (number2 < number3)
		largest = number3;

	smallest = number1; // assume first integer is smallest 

	/* Please write a statement to determine if number2 is less than smallest. If so assign number2 to smallest */ 

	if (number1 > number2)
		smallest = number2;

	/* Please write a statement to determine if number3 is less than smallest. If so assign number3 to smallest */ 
	if (number2 > number3)
		smallest = number3;

	/* Please write an output statement to prints the sum, average, product, largest and smallest */ 
	cout << "the sum is " << number1 + number2 + number3 << endl << "the average is " << (number1 + number2 + number3) / 3 << endl << "the product is " << number1 - number2 - number3 << endl <<  "The largest is " << largest << endl << "the smallest is " << smallest << endl;


	system("Pause"); 
	return 0; 

} // end main 