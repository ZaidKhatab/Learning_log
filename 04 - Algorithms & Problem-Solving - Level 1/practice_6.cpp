#include <iostream>

using namespace std;

struct stUserInfo
{
    string firstName;
    string lastName;
};

stUserInfo getUserInfo() {
    stUserInfo userInfo;

    cout << "Enter you first name: ";
    cin >> userInfo.firstName;

    cout << "Enter your last name";
    cin >> userInfo.lastName;

    return userInfo;
}

string getFullName(stUserInfo userInfo){
    string fullName = userInfo.firstName + " " + userInfo.lastName;

    return fullName;
}

void printFullName(string fullName){
    cout << "Your name is: ";
    cout << fullName;
}

int main()
{
    printFullName(getFullName(getUserInfo()));
    return 0;
}