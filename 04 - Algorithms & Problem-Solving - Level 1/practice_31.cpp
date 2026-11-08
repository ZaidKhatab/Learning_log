#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void pow2_3_4(int number)
{
    cout << "The power of 2 is: " << (number * number) << endl;
    cout << "The power of 3 is: " << (number * number * number) << endl;
    cout << "The power of 4 is: " << (number * number * number * number) << endl;

}

int main(){
    pow2_3_4(readNumber());
    return 0;
}