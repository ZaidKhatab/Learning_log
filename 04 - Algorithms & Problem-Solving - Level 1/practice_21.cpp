#include <iostream>
#include <cmath>

using namespace std;

float pi = 3.14159;
void readDimensions(int &circumference)
{
    cout << "Enter the circumference: ";
    cin >> circumference;
}

float calculateArea(int circumference)
{
    float area = (pow(circumference, 2)) / (4 * pi);
    return area;
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area;
}

int main()
{
    int circumference;
    readDimensions(circumference);
    printArea(calculateArea(circumference));
    return 0;
}