#include <iostream>
using namespace std;

void readNumbers(int& num1, int& num2){
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
}

int findMax(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}

void printMax(int max){
    cout << "The maximum of the two numbers is: " << max;
}

int main(){
    int number1, number2;
    readNumbers(number1, number2);
    printMax(findMax(number1, number2));
    return 0;
}