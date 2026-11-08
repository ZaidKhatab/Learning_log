#include <iostream>
using namespace std;

void readNumbers(int& num1, int& num2, int& num3){
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Enter a third number: ";
    cin >> num3;
}

int sumOfNumbers(int num1, int num2, int num3){
    return (num1 + num2 + num3);
}

void printResult(int total){
    cout << "The sum of the numbers is: " << total;
}

int main(){
    int number1, number2, number3;
    readNumbers(number1, number2, number3);
    printResult(sumOfNumbers(number1, number2, number3));
    return 0;
}