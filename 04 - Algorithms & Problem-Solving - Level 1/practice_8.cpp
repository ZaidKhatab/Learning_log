#include <iostream>

using namespace std;

enum enPassFail
{   
    NONE = 0,
    PASS = 1,
    FAIL = 2
};

int readMark(){
    int grade;
    cout << "Enter your mark: ";
    cin >> grade;
    return grade;
}

enPassFail checkMark(int grade){
    return (grade >= 50) ? enPassFail::PASS : enPassFail::FAIL;
}

void printResult(int grade){
    if (checkMark(grade) == enPassFail::PASS)
        cout << "You passed the exam";
    else
        cout << "You failed the exam";
}

int main(){
    printResult(readMark());
    return 0;
}