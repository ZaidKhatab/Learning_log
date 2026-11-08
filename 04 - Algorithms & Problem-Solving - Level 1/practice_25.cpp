#include <iostream>

using namespace std;

int readAge()
{
    int age;
    cout << "Please enter age between 18 and 45: ";
    cin >> age;
    return age;
}

bool ValidateAge(int &age, int minAge, int maxAge)
{
    return (age >= minAge && age <= maxAge);
}

int readAgeUntilValid(int minAge, int maxAge)
{
    int age;

    do
    {
        age = readAge();
    } while (!ValidateAge(age, minAge, maxAge));
    return age;
}

void printResult(int age)
{
    cout << "Age is valid." << endl;
}

int main()
{
    printResult(readAgeUntilValid(18, 45));

    return 0;
}