#include<iostream>
using namespace std;
int main()
{
	int smallest, largest , n1, n2, n3,n4, n5;
	cout << "enter a 5 integers" << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	cin >> n5;
	smallest = n1;
	largest = n1;
	if (n2 < smallest)
		smallest = n2;
	if (n3 < smallest)
		smallest = n3;
	if (n4 < smallest)
		smallest = n4;
	if (n5 < smallest)
		smallest = n5;
	if (n2 > largest)
		largest = n2;
	if (n3 > largest)
		largest = n3;
	if (n4 > largest)
		largest = n4;
	if (n5 > largest)
		largest = n5;
	
	cout << largest << endl;
	cout << smallest;	system("pause");
	return 0;
}