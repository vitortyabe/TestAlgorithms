// Algorithm6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

/*
	@Author: Vitor Yabe
	Evaluate how many characters the introduced string has.
*/
int CountCharacters(string value)
{
	//Local variables
	int j = 0;

	//Check if it's a valid character on each index. Case yes: valid character. Case no: end of string.
	while (value[j])
	{
		j++;
	}

	return j;
}

int main()
{
	//Local variables
	int counter = 0;
	string value;

	//Introduce the string to be evaluated
	std::cout << "Character Counter. Please, introduce a string: " << std::endl;

	//Getline function is supporting inputs which contains blank spaces
	std::getline(std::cin, value);

	//Receive the total of characters
	counter = CountCharacters(value);

	//Print out
	std::cout << "The number of characters is: " << counter << std::endl;

	system("pause");

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
