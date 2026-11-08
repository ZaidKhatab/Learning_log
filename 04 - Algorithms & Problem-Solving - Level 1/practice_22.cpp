#include <iostream>
#include <cmath>

using namespace std;

float pi = 3.14159;

void readDimensions(int &a, int &b)
{
    cout << "Enter the a and b lengths of the triangle: ";
    cin >> a >> b;
}

double calculateArea(float a, float b)
{
    double area = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    return area;
}

void printArea(double area)
{
    cout << "The area of the circle is: " << area;
}

int main()
{
    int a, b;
    readDimensions(a, b);
    printArea(calculateArea(a, b));
    return 0;
}