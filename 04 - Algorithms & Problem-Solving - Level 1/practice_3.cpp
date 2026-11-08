#include <iostream>

using namespace std;

enum enNumberType
{
    none = 0,
    Odd = 1,
    Even = 2
};

int readNumberType()
{
    int number;
    cout << "Please enter a number: " << endl;
    cin >> number;
    return number;
}

enNumberType checkNumberType(int number)
{
    int result = number % 2;
    if (result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}

void printNumberType(enNumberType numberType)
{
    if (numberType == enNumberType::Even)
    {
        cout << "Number is even." << endl;
    }
    else
    {
        cout << "Number is Odd." << endl;
    }
}

int main()
{
    printNumberType(checkNumberType(readNumberType()));
    return 0;
}