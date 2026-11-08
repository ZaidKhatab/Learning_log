#include <iostream>
#include <cmath>

using namespace std;

void readDimensions(int &height, int &base)
{
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the base: ";
    cin >> base;
}

float calculateArea(int height, int base)
{
    float area = 0.5 * height * base;
    return area;
}

void printArea(float area)
{
    cout << "The area of the triangle is: " << area;
}

int main()
{
    int height, base;
    readDimensions(height, base);
    printArea(calculateArea(height, base));
    return 0;
}