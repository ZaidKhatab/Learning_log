#include <iostream>
using namespace std;

int readSalesAmount()
{
    int salesAmount;
    cout << "Enter the sales amount: ";
    cin >> salesAmount;
    return salesAmount;
}

float calculateCommission(float salesAmount)
{
    if(salesAmount >= 1000000)
        return salesAmount * 0.01;
    else if(salesAmount >= 500000 && salesAmount < 1000000)
        return salesAmount * 0.02;
    else if(salesAmount >= 100000 && salesAmount < 500000)
        return salesAmount * 0.03;
    else if(salesAmount >= 50000 && salesAmount < 100000)
        return salesAmount * 0.05;
    else
        return 0;
}

void printResult(float commission)
{
    cout << "The commission is: " << commission << endl;
}

int main(){
    printResult(calculateCommission(readSalesAmount()));
        
    return 0;
}