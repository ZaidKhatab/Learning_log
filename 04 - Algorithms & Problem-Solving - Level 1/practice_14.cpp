#include <iostream>
using namespace std;

void readNumbers(int& num1, int& num2){
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
}

void swapNumbers(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void printNumbers(int num1, int num2){
    cout << "The numbers are: " << num1 << " and " << num2;
}

int main(){
    int number1, number2;
    readNumbers(number1, number2);
    printNumbers(number1, number2);
    swapNumbers(number1, number2);
    printNumbers(number1, number2);

    return 0;
}