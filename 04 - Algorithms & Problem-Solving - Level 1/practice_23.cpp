#include <iostream>
#include <cmath>

using namespace std;

float pi = 3.14159;

void readDimensions(int &a, int &b, int &c)
{
    cout << "Enter the a, b and c lengths of the triangle: ";
    cin >> a >> b >> c;
}

float calculateP(float a, float b, float c)
{
    return (a + b + c) / 2;
}

float calculateArea(float a, float b, float c)
{
    float p = calculateP(a, b, c);
    float result = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    float area = pi * (pow(result, 2));
    return area;
}

void displayArea(float area)
{
    cout << "The area of the triangle is: " << area << endl;
}

int main()
{
    int a, b, c;
    readDimensions(a, b, c);
    displayArea(calculateArea(a, b, c));
    return 0;
}