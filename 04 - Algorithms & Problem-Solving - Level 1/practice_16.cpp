#include <iostream>
#include <cmath>
using namespace std;

void readDimensions(int &height, int &diagonal)
{
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the diagonal: ";
    cin >> diagonal;
}

float calculateArea(int height, int diagonal)
{
    float area = height * sqrt(pow(diagonal, 2) - pow(height, 2));
    return area;
}

void printArea(float area)
{
    cout << "The area of the rectangle is: " << area;
}

int main()
{
    int height, diagonal;
    readDimensions(height, diagonal);
    printArea(calculateArea(height, diagonal));
    return 0;
}