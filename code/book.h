#ifndef BOOK
#define BOOK
#include<string>
using namespace std;
class Book{
    string title,author,ISBN;
    public:
        Book(string title,string author,string isbn);
        string getTitle();
        string getAuthor();
        string getISBN();
};
#endif