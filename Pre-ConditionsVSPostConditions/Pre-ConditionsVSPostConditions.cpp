// Pre-ConditionsVSPostConditions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"

int area(int, int);

int main()
{
	int length;
	int width;

	cout << "please provide" << endl;
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;

	int result = area(length, width);

	cout << "result: " << result << endl;


	system("pause");
    return 0;
}
int area(int length, int width)
{
	if (length <= 0 || width <= 0) error("area() pre-condition");
	int a = length * width;
	if (a <= 0) error("area() post-condition");
	return a;
}
