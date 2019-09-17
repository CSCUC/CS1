//	Lab 1b: multiples
#include <iostream> // allows program to	perform input	and output

using namespace std;
int main()
{
	/*	please	write	variables declarations here	*/
	int number1, number2, remainder;
	cout << "Enter two integers: ";	//prompt
	/*	please	write	an	input	statement	to	read	data	into	variables
	here	*/
	cin >> number1;
	cin >> number2;
	remainder = number2%number1;
	//	using	modulus	operator
	if (number2%number1 == 0	/* please write a condition	that	tests	whether	number1	is a multiple of number2	*/)
		cout << number1 << "	is	a	multiple	of	" << number2 << endl;
	//Line	15
	if (number2%number1 >> 0/*	please	write	a condition	that	tests	whether number1 is not a multiple of number2 (lines 16–18)*/)
		cout << number1 << "	is not	a multiple of	" << number2 << endl;
	system("pause");
}	//	end	main
