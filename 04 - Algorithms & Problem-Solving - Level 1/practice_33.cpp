#include <iostream>

using namespace std;

int readGrade()
{
    int grade;

    do
    {
        cout << "Enter a grade (0-100): ";
        cin >> grade;
    } while (grade < 0 || grade > 100);

    return grade;
}

char determineLetterGrade(int grade)
{
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else
        return 'F';
}

void printResult(char letterGrade)
{
    cout << "The letter grade is: " << letterGrade << endl;
}

int main()
{
    printResult(determineLetterGrade(readGrade()));
    return 0;
}