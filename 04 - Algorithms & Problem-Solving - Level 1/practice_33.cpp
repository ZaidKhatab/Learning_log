#include <iostream>

using namespace std;

int readGrade()
{
    int grade;
    cout << "Enter a grade: ";
    cin >> grade;
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