//classes.cpp
#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string atitle, string aauthor, int apages){
            title = atitle;
            author = aauthor;
            pages = apages;
            cout << "Creating Object" << endl;
        }
};

int main() {
    Book book1("Harry Potter", "J.K. Rowling", 500);
    cout << book1.title << '\n' ;

    return 0;
}