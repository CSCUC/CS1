#include <iostream>
using namespace std;

int main() {
	cout << "Input three different integers: ";

	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	int sum, product, avg, smallNum, largeNum;

	sum = (a + b + c);
	avg = ((a + b + c) / 3);
	product = (a * b * c);

	smallNum = a;
	if (b <= smallNum)
		smallNum = b;
	if (c <= smallNum)
		smallNum = c;

	largeNum = a;
	if (b >= largeNum)
		largeNum = b;
	if (c >= largeNum)
		largeNum = c;

	cout << "Sum is " << sum << endl;
	cout << "Average is " << avg << endl;
	cout << "Product is " << product << endl;
	cout << "Smallest is " << smallNum << endl;
	cout << "\nLargest is " << largeNum << endl;

	system("pause");

	return 0;


}