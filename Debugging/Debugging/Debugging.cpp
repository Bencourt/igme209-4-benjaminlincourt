#include <iostream>
#include <time.h>

using namespace std;

int intMutator(int input);
void functionWithLoop();

int main()
{
    functionWithLoop();
    srand(time(NULL));
    cout << intMutator(0) << endl;

    cout << "Please input your name: ";
    char name[100];
    cin.getline(name, 100);

    char smallstring[6] = "Small";
    strcpy_s(smallstring, name);
}

int intMutator(int input)
{
    for (int i = 0; i < 20; i++)
    {
        input += (rand() % 11);
    }

    cout << "Finished mutating integer" << endl;

    return input;
}

void functionWithLoop()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
}
