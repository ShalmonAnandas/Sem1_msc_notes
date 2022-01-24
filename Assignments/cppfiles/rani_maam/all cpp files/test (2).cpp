//write a program to find out type of triangle from sides

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter the length of sides of triangle: ";
	cin >> a >> b >> c;
	if (a == b && b == c)
		cout << "Equilateral triangle";
	else if (a == b || b == c || c == a)
		cout << "Isosceles triangle";
	else
		cout << "Scalene triangle";
	return 0;
}