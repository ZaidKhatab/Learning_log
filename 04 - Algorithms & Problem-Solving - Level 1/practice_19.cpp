#include <iostream>
#include <cmath>

using namespace std;

float pi = 3.14159;

void readDimensions(int &diameter)
{
    cout << "Enter the diameter: ";
    cin >> diameter;
}

float calculateArea(int diameter)
{
    float area = (pi * pow(diameter, 2)) / 4;
    return area;
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area;
}

int main()
{
    int diameter;
    readDimensions(diameter);
    printArea(calculateArea(diameter));
    return 0;
}