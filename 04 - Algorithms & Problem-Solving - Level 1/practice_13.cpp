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

int findMax(int num1, int num2, int num3){
    return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}

void printMax(int max){
    cout << "The maximum of the three numbers is: " << max;
}

int main(){
    int number1, number2,number3;
    readNumbers(number1, number2,number3);
    printMax(findMax(number1, number2,number3));
    return 0;
}