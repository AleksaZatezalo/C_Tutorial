//userinput.cpp
#include <iostream>
using namespace std;
 
int main() {
    int age;
    string name;

    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "You are " << age << " years old!\n";

    cout << "Enter your name: ";
    
    getline(cin, name);
    cout << "You are " << name << "\n";

    return 0;
}