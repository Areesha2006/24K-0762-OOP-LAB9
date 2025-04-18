#include<iostream>
#include"book.h"
using namespace std;
Book::Book(string title,string author,string isbn):title(title),author(author),ISBN(isbn){}
string Book::getTitle(){
    return title;
}
string Book::getAuthor(){
    return author;
}
string Book::getISBN(){
    return ISBN;
}