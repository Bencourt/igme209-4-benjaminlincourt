// PE4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//create the Super C string
	char super[100] = "Supercalifragilistic";
	//find the length and print it out
	int superLength = strlen(super);
	cout << "The length of supercalifragilistic is " << superLength << endl;

	//create the Expi C string
	char expi[100] = "expialidocious";
	//combine the two strings and print out the result
	strcat_s(super, expi);
	cout << super << endl;

	//recalculate the length 
	superLength = strlen(super);
	//create an i count variable
	int iCount = 0;
	//loop throught the C string and track the instances of i
	for (int i = 0; i < superLength; i++)
	{
		if (super[i] == 'i')
			iCount++;
	}
	//print the number of i's in the C string
	cout << "The number of i's in Supercalifragilisticexpialidocious is " << iCount << endl;
}
