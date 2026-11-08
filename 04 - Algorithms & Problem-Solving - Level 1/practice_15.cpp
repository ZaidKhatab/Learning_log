#include <iostream>
using namespace std;

void readDimensions(int& height, int& width){
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the width: ";
    cin >> width;
}

int calculateArea(int height, int width){
    return height * width;
}

void printArea(int area){
    cout << "The area of the rectangle is: " << area;
}

int main(){
    int height, width;
    readDimensions(height, width);
    printArea(calculateArea(height, width));
    return 0;
}