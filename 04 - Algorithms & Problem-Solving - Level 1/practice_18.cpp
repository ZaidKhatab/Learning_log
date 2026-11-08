#include <iostream>
#include <cmath>

using namespace std;

float pi = 3.14159;
void readDimensions(int &radius)
{
    cout << "Enter the radius: ";
    cin >> radius;
}

float calculateArea(int radius)
{
    float area = pi * pow(radius, 2);
    return area;
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area;
}

int main()
{
    int radius;
    readDimensions(radius);
    printArea(calculateArea(radius));
    return 0;
}