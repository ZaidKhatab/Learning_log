#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int readPower()
{
    int power;
    cout << "Enter a power: ";
    cin >> power;
    return power;
}

int calculatePower(int number, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= number;
    }
    return result;
}

void printResult(int result)
{
    cout << "result: " << result << endl;
}

int main(){
    printResult(calculatePower(readNumber(), readPower()));

    return 0;
}