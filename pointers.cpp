//pointers.cpp
#include <iostream>
using namespace std;

int main() {
    // Var
    int age = 22;
    double gpa = 3.0;
    string name = "Aleksa";

    // Pointers
    int *pAge = &age;
    double *pGpa = &gpa;

    cout << "Age address: " << &age << "\n";
    cout << "Age pointer: " << pAge << "\n";
    cout << "Age deReferenced: " << *pAge << "\n";

    return 0;
}