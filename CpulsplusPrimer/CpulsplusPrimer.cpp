// CpulsplusPrimer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales_item.h"

int main()
{
	//std::cout << "/*";
	//std::cout << "*/";
	////Sample
	//std::cout << "Enter two numbers:" << std::endl;
	//int v1 = 0, v2 = 0;
	//std::cin >> v1 >> v2;
	//std::cout << "The sum of " << v1 << "and " << v2 << " is " << v1 + v2 << std::endl;
	////practice 1.3
	//std::cout << "Hello, World";
	//practice 1.4.3
	/*int sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is " << sum;*/
	//practice 1.5
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
