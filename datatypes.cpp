//datatypes.cpp
#include <iostream>
using namespace std;
 
int main() {
    char grade = 'A';
    string phrase = "School Sucks";
    int age = 15;
    float flt = 20.1;
    double dub = 20.22;
    bool flag = true;

    cout << phrase.length() << '\n';
    cout << phrase[0] << '\n';
    cout << phrase.find("Sucks", 2) << '\n';
    
    return 0;
}