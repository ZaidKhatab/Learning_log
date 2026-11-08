#include <iostream>
#include <cmath>

using namespace std;

float pi = 3.14159;
void readDimensions(int &A)
{
    cout << "Enter the value of A: ";
    cin >> A;
}

float calculateArea(int A)
{
    float area = (pi * pow(A, 2)) / 4;
    return area;
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area;
}

int main()
{
    int A;
    readDimensions(A);
    printArea(calculateArea(A));
    return 0;
}