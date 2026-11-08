#include <iostream>

using namespace std;

enum enOddEven
{
    none = 0,
    odd = 1,
    even = 2
};

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

enOddEven checkOddEven(int number)
{
    if (number % 2 == 0)
        return enOddEven::even;
    else
        return enOddEven::odd;
}

void printResult(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        if (checkOddEven(i) == enOddEven::even)
        {
            sum += i;
        }
    }

    cout << "The sum of even numbers from 0 to " << number << " is: " << sum << endl;
}

int main()
{
    printResult(readNumber());
    return 0;
}