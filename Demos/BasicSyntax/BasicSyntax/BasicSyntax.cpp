#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl << "Nice to meet you!" << endl;

    bool myBool = true;
    char myChar = 'A';
    int myInt = 257;
    float myFloat = 6.9f;
    double myDouble = 100.69;

    if (myFloat == 6.9f)
    {
        cout << "My float is equal to 6.9" << endl;
    }
    else
    {
        cout << "My float is not equal to 6.9" << endl;
    }

    short int myShort = 10;

    cout << sizeof(myShort) << endl;
    cout << sizeof(myInt) << endl;
    cout << sizeof(myBool) << endl;
    cout << sizeof(myChar) << endl;

    long int myLong = 10;

    cout << sizeof(myLong) << endl;

    myInt = -1000;
    unsigned int myUnsignedInt = 50;
    unsigned short myUnsignedShort = 2;

    uint16_t a = 2;
    uint16_t b = 3;
    short add = a + b;
    short sub = a - b;
    short mult = a * b;
    short div = a / b;
    short mod = a % b;
    a += b; //a = a+b
    /* hehehehe blomck commemnt */
    a /= b;
    a %= b;

    a = 2;
    double c = 2.5;
    double doublePlusInt = c + a; //4.5
    int intPlusDouble = a + c; //4

    int large = 100;
    int small = 10;

    // <
    // >
    // <=
    // >=
    // !=
    // ==
    if (large != small)
    {
        //do something
    }

    // &&
    // ||
    // !
    //
    if (true && true)
    {

    }
}
