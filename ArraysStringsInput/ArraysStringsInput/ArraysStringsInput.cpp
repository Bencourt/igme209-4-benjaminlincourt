#include <iostream>
#include <cstring>

using namespace std;

void PrintSize(int data[], int size);

int main()
{
	const int MY_DATA_SIZE = 10;
	int myData[MY_DATA_SIZE] = {1,2,3};
	cout << "myData at index 4: " << myData[3] << endl;
	cout << "size of my data: " << sizeof(myData) / sizeof(int) << endl;
	PrintSize(myData, MY_DATA_SIZE);

	char name[7] = "robert";

	char nameWithRoom[100] = "Austin ";

	strcat_s(nameWithRoom, name);
	cout << nameWithRoom[1] << endl;

	char username[100];
	cout << "Please enter your name: ";
	cin.getline(username, 99);

	cout << "Welcome, " << username << endl;

	cout << "What is your favorite character? ";
	char input;
	cin >> input;
	cout << "Your name is " << username << " \nand your favorite character is: " << input << endl;
}


void PrintSize(int data[], int size)
{
	cout << "size of my data in function: " << size << endl;
}