#include<iostream>
#include"book.h"
using namespace std;
int main(){
    string title,author,isbn;
    cout<<"Enter the ISBN of the book: ";
    cin>>isbn;
    cout<<"Enter the title of the book: ";
    cin>>title;
    cout<<"Enter the author of the book: ";
    cin>>author;
    Book book(title,author,isbn);
    cout<<endl<<"Displaying book details"<<endl;
    cout<<"ISBN: "<<book.getISBN()<<endl;
    cout<<"Title: "<<book.getTitle()<<endl;
    cout<<"Author: "<<book.getAuthor()<<endl;
    return 0;
}