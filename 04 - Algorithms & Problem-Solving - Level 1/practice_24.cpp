#include <iostream>

using namespace std;

int readAge(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
    return age;
}

bool ValidateAge(int age, int minAge, int maxAge){
    return (age >= minAge && age <= maxAge);
}

void printResult(int age){
    if(ValidateAge(age, 18, 45)){
        cout << "Age is valid." << endl;
    } else {
        cout << "Age is not valid." << endl;
    }
}

int main(){
    printResult(readAge()); 

    return 0;
}