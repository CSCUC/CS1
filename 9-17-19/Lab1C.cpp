#include<iostream>
using namespace std;
int main()
{
	int number, n1, n2, n3, n4, n5;
	cout << "enter a five digit number" << endl;
	cin >> number;
	n5 = (number % 10);
	n4 = ((number % 100) / 10);
	n3 = ((number % 1000) / 100);
	n2 = ((number % 10000) / 1000);
	n1 = (number / 10000);
	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << n4 << endl;
	cout << n5 << endl;
	system("pause");
	return 0;

}
