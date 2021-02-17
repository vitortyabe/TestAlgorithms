// Algorithm3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
#include <string>

#include <Windows.h>

using namespace std;

/*
    @Author: Vitor Yabe
    The function's outcome indicates if string "s" can turn on string "t" in less or equal to k operations,
    which k indicates the sum of characters concatenation and/or removal operations.
*/
string ConcatERemove(string s, string t, int k)
{
    //Local variables
    int counterOperations = 0, sLength = 0;

    //Protection against invalid ipout data
    if (s.length() < 1 || s.length() > 100 || t.length() < 1 || t.length() > 100 || k < 1 || k > 100) { return "Input data out of range limitations. Please, verify."; }
    //Protection against invalid input data
    for (int i = 0; i < s.length(); i++)
    {
        if (!(std::islower(s.at(i))))
        {
            return "String s has invalid characters. Please, consider introducing only ascii[a-z].";
        }
    }
    //Protection against invalid input data
    for (int i = 0; i < t.length(); i++)
    {
        if (!(std::islower(t.at(i))))
        {
            return "String t has invalid characters. Please, consider introducing only ascii[a-z].";
        }
    }

    //Represents the total of operations required to turn string "s" on string "t"
    counterOperations = s.length() + t.length();

    //Find the length size of the smallest string
    sLength = s.length() > t.length() ? t.length() : s.length();

    //The loop compares both strings starting on index 0, for each index in which the caracters are the same
    //it means two less operations is needed to turn string "s" in string "t"
    for (int i = 0; i < sLength; i++)
    {
        if (s.at(i) == t.at(i))
        {
            counterOperations = counterOperations - 2;
        }
        else
        {
            //This statement identifies the index on which the strings start to be different,
            //no more concatenation/removal operations can be saved along this point until the end of the string
            break;
        }
    }

    //Return if k is higher than the number of operations needed to rearrange the strings
    return k >= counterOperations ? "sim" : "não";

}

int main()
{ 

    //Local variables
    int k;
    string valueT, valueS, outcome;

    //Introduce string s, string t and number of operation k
    std::cout << "Introduce string s, string t and the number of operations k. Once the value is introduced you may press Enter to introduce the new value: " << std::endl;

    //Getline function is supporting inputs which contains blank spaces. Take string s value
    std::getline(std::cin, valueS);

    //Getline function is supporting inputs which contains blank spaces. Take string t value
    std::getline(std::cin, valueT);

    //Take the total of operations k value
    std::cin >> k;

    //Evaluate
    outcome = ConcatERemove(valueS, valueT, k);

    //Print out
    std::cout << "Result: " << outcome << std::endl;

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
