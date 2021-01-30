//switch.cpp
#include <iostream>
using namespace std;

string getDay(int dayNum){
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "Sun\n";
        break;
    case 1:
        dayName = "Mon\n";
        break;
    default:
        dayName = "ABC";
        break;
    }

    return dayName;
}

int main() {
    cout << getDay(1);
    return 0;
}