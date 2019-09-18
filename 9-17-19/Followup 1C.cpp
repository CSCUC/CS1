#include <iostream>
using namespace std;

int main()
{
	int number, n1, n2, n3;
	cout << "Enter 3 single digit numbers: " << endl;
	cin >> n1 >> n2 >> n3;
	number = (n1 * 100) + (n2 * 10) + (n3 * 1);
	cout << "The combined number is: " << number << endl;

	system("pause");
	return 0;
	
}