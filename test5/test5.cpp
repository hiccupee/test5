#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	int sum = 0;
	int lower, upper;
	std::cin >> v1 >> v2;
	if (v1 < v2) {
		lower = v1;
		upper = v2;
		for (int val = lower; val <= upper; ++val)
			sum += val;
		std::cout << "Sum of " << lower << " to "
			<< upper << " inclusive is "
			<< sum << std::endl;
	}
	if (v1 > v2) {
		lower = v2;
		upper = v1;
		for (int val = lower; val <= upper; ++val)
			sum += val;
		std::cout << "Sum of " << lower << " to "
			<< upper << " inclusive is "
			<< sum << std::endl;
	}
	if (v1 == v2) {
		sum = v1 + v2;
		std::cout << "Sum of " << v1 << " and "
			<< v2 << " inclusive is "
			<< sum << std::endl;
	}
	return 0;
}
