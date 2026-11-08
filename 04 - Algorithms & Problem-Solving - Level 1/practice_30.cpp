#include <iostream>

using namespace std;

void readNumber(int &number)
{
    cout << "Enter a number: ";
    cin >> number;
}

int calculateFactorial(int number)
{
    if (number == 0)
        return 1;
    return (number * calculateFactorial(number - 1));
}

void printResult(int number, int result)
{
    cout << "The factorial of " << number << " is: " << result << endl;
}

int main()
{
    int number;
    readNumber(number);
    printResult(number, calculateFactorial(number));

    return 0;
}