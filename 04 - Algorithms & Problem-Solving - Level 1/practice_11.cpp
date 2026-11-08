#include <iostream>
using namespace std;

enum enPassFail
{
    NONE = 0,
    PASS = 1,
    FAIL = 2
};

void readMarks(int& mark1, int& mark2, int& mark3)
{
    cout << "Enter your mark: ";
    cin >> mark1;
    cout << "Enter your second mark: ";
    cin >> mark2;
    cout << "Enter your third mark: ";
    cin >> mark3;
}

int sumOfMarks(int mark1, int mark2, int mark3)
{
    return (mark1 + mark2 + mark3);
}

float averageOfMarks(int mark1, int mark2, int mark3)
{
    return ((float)sumOfMarks(mark1, mark2, mark3) / 3.0);
}

enPassFail checkAverage(float average)
{
    return (average >= 50) ? enPassFail::PASS : enPassFail::FAIL;
}

void printResult(float average)
{
    if (checkAverage(average) == enPassFail::PASS)
        cout << "You passed the exam";
    else
        cout << "You failed the exam";
}

int main(){
    int mark1, mark2, mark3;
    readMarks(mark1, mark2, mark3);
    printResult(averageOfMarks(mark1, mark2, mark3));

    return 0;
}