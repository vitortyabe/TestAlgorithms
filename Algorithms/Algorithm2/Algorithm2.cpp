// Algorithm2.cpp : This file contains the 'main' function. Program execution begins and ends there.

// teste2

#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i < 101; i++)
    {
        //Evaluate if i is divisible by 3 and 5
        if ((i % 3) == 0 && (i % 5) == 0)
        {
            std::cout << "FooBaa" << "\n";
        }
        //Evaluate if i is divisible by 3
        else if ((i % 3) == 0)
        {
            std::cout << "Foo" << "\n";
        }
        //Evaluate if i is divisible by 5
        else if ((i % 5) == 0)
        {
            std::cout << "Baa" << "\n";
        }
        //If it doesn't apply, simply print i
        else
        {
            std::cout << i << "\n";
        }
        
    }

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
