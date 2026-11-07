#include <iostream>

using namespace std;

struct stInfo
{
    /* data */
    int age;
    bool hasDrivingLicense;
    bool hasRecommendation;
};

stInfo readInfo()
{
    stInfo info;

    cout << "Enter your age";
    cin >> info.age;

    cout << "Do you have a driver License?";
    cin >> info.hasDrivingLicense;

    cout << "Do you have recommendation?";
    cin >> info.hasRecommendation;

    return info;
}

bool isAccepted(stInfo info)
{
    return ((info.age > 21 && info.hasDrivingLicense) || info.hasRecommendation);
}

void printResult(stInfo info)
{
    if (isAccepted(info))
        cout << "Accepted";
    else
        cout << "Rejected";
}

int main()
{

    printResult(readInfo());
    return 0;
}