#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    return number;
}

float calculateHalfNumber(float number)
{
    return (number / 2);
}

void printResult(float number)
{
    cout << "The half of the number " << number << " is: " << calculateHalfNumber(number);
}

int main()
{
    printResult(readNumber());
    return 0;
}