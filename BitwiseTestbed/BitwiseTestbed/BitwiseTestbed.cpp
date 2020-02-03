#include <iostream>
#include <bitset>
using namespace std;

void printTwoShorts(short a, short b);
void printOneShort(short a);
bool detectCollision(short mask, short layer);

int main()
{
    short a = 0b11110000;
    short b = 0b10101010;

    printTwoShorts(a, b);

    short resultOfAND = a & b;
    cout << "Result of AND &                         Binary: " << bitset<8>(resultOfAND) << endl;
    
    printTwoShorts(a, b);

    short resultOfOR = a | b;
    cout << "Result of OR |                          Binary: " << bitset<8>(resultOfOR) << endl;

    printTwoShorts(a, b);

    short resultOfXOR = a ^ b;
    cout << "Result of XOR ^                         Binary: " << bitset<8>(resultOfXOR) << endl;

    printOneShort(a);

    short resultOfCOMP = ~a;
    cout << "Result of COMP ~                        Binary: " << bitset<8>(resultOfCOMP) << endl;

    printOneShort(a);

    short resultOfShiftLeft = a << 2;
    cout << "Result of Shift Left <<    Decimal: " << resultOfShiftLeft << " Binary: " << bitset<8>(resultOfShiftLeft) << endl;

    printOneShort(a);

    short resultOfShiftRight = a >> 1;
    cout << "Result of Shift Right >>   Decimal: " << resultOfShiftRight << " Binary: " << bitset<8>(resultOfShiftRight) << endl;

    short collisionLayer1 = 0b0001; // bullets
    short collisionLayer2 = 0b0010; // players
    short collisionLayer3 = 0b0100; // platforms

    short collisionMask1 = 0b0110; // bullets collide with players and platforms
    short collisionMask2 = 0b0110; //

    cout << "Bullet v bullet: " << detectCollision(collisionMask1, collisionLayer1) << endl;
    cout << "Bullet v player: " << detectCollision(collisionMask1, collisionLayer2) << endl;
    cout << "Bullet v platform: " << detectCollision(collisionMask1, collisionLayer3) << endl;
}

void printTwoShorts(short a, short b)
{
    cout << endl;
    cout << "Short A                    Decimal: " << a << " Binary: " << bitset<8>(a) << endl;
    cout << "Short B                    Decimal: " << b << " Binary: " << bitset<8>(b) << endl;
}

void printOneShort(short a)
{
    cout << endl;
    cout << "Short A                    Decimal: " << a << " Binary: " << bitset<8>(a) << endl;
}

bool detectCollision(short mask, short layer)
{
    return (mask & layer);
}