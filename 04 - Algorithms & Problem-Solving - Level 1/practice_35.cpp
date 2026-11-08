#include <iostream>

using namespace std;

struct stPiggyBankContent
{
    int penny, nickel, dime, quarter, dollar;
};

stPiggyBankContent readPiggyBankContent(stPiggyBankContent &piggyBank)
{
    cout << "Enter the number of pennies: ";
    cin >> piggyBank.penny;
    cout << "Enter the number of nickels: ";
    cin >> piggyBank.nickel;
    cout << "Enter the number of dimes: ";
    cin >> piggyBank.dime;
    cout << "Enter the number of quarters: ";
    cin >> piggyBank.quarter;
    cout << "Enter the number of dollars: ";
    cin >> piggyBank.dollar;

    return piggyBank;
}

void printPiggyBankPennyAndDollar(stPiggyBankContent piggyBank)
{
    cout << "The number of pennies is: " << piggyBank.penny << endl;
    cout << "The number of dollars is: " << piggyBank.dollar << endl;
}

void printTotalPinneis(stPiggyBankContent piggyBank)
{
    int totalPennies = piggyBank.penny + (piggyBank.nickel * 5) + (piggyBank.dime * 10) + (piggyBank.quarter * 25) + (piggyBank.dollar * 100);
    cout << "The total number of pennies is: " << totalPennies << endl;
    cout << "The total amount in dollars is: $" << totalPennies / 100.0 << endl;
}

int main()
{
    printTotalPinneis(readPiggyBankContent(*(new stPiggyBankContent())));
    return 0;
}