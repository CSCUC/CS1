#include<iostream>

using namespace std;

int main() {
	int num1, num2, num3, num4, num5, large, small;

	cout << "Enter five integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	large = num1;
	small = num1;

		if (num2 > large)
			large = num2;

		if (num3 > large)
			large = num3;

		if (num4 > large)
			large = num4;

		if (num5 > large)
			large = num5;

		if (num2 < small)
			small = num2;

		if (num3 < small)
			small = num3;

		if (num4 < small)
			small = num4;

		if (num5 < small)
			small = num5;

		cout << "Largest Integer: " << large << "Smallest Integer: " << small << endl;

		system("pause");
			return 0;
}


