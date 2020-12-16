# TestAlgorithms

## Table of Contents
* [General Info](#general-info)
* [How to Run It](#how-to-run-it)
* [Comments and Useful Information](#comments-and-useful-information)

## General Info

This repository stores the proposed solution for each exercise as part of a test to evaluate Programming and SQL skills.

The algorithms were developed in C++ by using Visual Studio 2019 environment and the SQL queries were implemented on Microsoft Access as testing environment.

For each algorithm it was created a project on Visual Studio 2019 that contains the main() function and will be running the solution on a Windows Console Aplication. The projects can be opened individualy on Visual Studio, but there is also a Solution file on the root directory which contains the three projects available to run. In case you choose to open the Solution file in a Visual Studio environment, remember to right-click on the project you want to run and select the option "Set as Startup Project" before running the application.

Regards to the SQL Queries, on the root directory you can find the folders Query4 and Query7 which stores the SQL files. On each folder there is also a Microsoft Access database that was created based on the wording of each SQL problem. The databases stores the tables that were introduced and also the queries, the same o the SQL files, that can be aplied to see the results on the Microsoft Access interface.

As reference, see below a mapping that associates the algorithms and queries with each problem:

* Algorithm2 -> Rules to print multipliers of 3/5/15 ranging form 1 tp 100
* Algorithm3 -> Convert string s on string t
* Algorithm6 -> Counting the number of characters without using pre-defined functions/procedures
* Query4     -> Students grades
* Query7     -> Dogs and Cats with distinct names report

## How to Run It
* To run algorithms
1) Open the Project file located on the folder that has the same name as the algorithm
OR
2) Open the Solutions file in your Visual Studio environment, press right-click on the project you want to run and choose "Set as Startup Project". Finally, press F5 and for the Windows Console APplication to start.

* To run queries
1) Open the access database files, select the query available, on Views select SQL View and, finally, press Run to see the results.


## Comments ad Useful Information
The statements below introduces more information on the approaches that were choosen for each problem solving:

* Algorithm2: The approach is simply using the operator % to identify when a number is divisible by 3, 5 and 15

* Algorithm3: The methodology applied was designed based on the following two statements: 1) How many operations would be necessary to turn string s on string t by initally removing all the characters from s and them adding all the characters from string t? 2) How many operations can be avoided on the procedure performed of the statement number 1)? The answer for each statement is: 1) Simply doing the summation of the string s and t lengths 2) We simply need to compare both strings index by index and identify on which index the string start to become different. For each group of equal characters we may subtract from the total of operations needed to turn string s on string t. Example:

string s -> thisisatest (length: 11)

string t -> thasisate (length: 9)

The total of operations to turn string s on string t, without saving any operations, is: 11 + 9 = 20

Comparing the strings index by index, it's known that on index number 2 the strings start to become different. In that case: two removal operation can be avoided and two addition operations can be avoided.

Finally, the number of operations required is defined by the subtraction of 20 from 4 which is 16, which can interpreted that the k number must be at least equal to 16 in order to generatea positive "sim" outcome.

* Algorithm6: The function created to return the total of characters is using a while statement that is regularly updating a counter until it fins the end of the input string.

* Query4: 
