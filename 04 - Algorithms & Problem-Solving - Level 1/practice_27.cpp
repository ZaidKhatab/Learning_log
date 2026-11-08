#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void printResult(int number)
{
    for (int i = number; i > 0; i--)
        cout << i << endl;
}

int main()
{
    printResult(readNumber());
    return 0;
}