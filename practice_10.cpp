#include <iostream>
using namespace std;

void readMarks(int &num1, int &num2, int &num3)
{
    cout << "Enter a mark: ";
    cin >> num1;
    cout << "Enter another mark: ";
    cin >> num2;
    cout << "Enter a third mark: ";
    cin >> num3;
}

int sumOfMarks(int num1, int num2, int num3)
{
    return (num1 + num2 + num3);
}

float averageOfMarks(int num1, int num2, int num3)
{
    return ((float)sumOfMarks(num1, num2, num3) / 3.0);
}

void printResult(float average)
{
    cout << "The average of the marks is: " << average;
}

int main()
{
    int number1, number2, number3;
    readMarks(number1, number2, number3);
    printResult(averageOfMarks(number1, number2, number3));

    return 0;
}