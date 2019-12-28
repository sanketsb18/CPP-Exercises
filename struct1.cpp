/* Structures using arrays and functions. */

#include<iostream>
#include<cstring>
using namespace std;

void printBook(struct Books book);

struct Books{
    char title[100];
    char author[100];
    int pages;
    char book_id[50];
    char subject[100];
    int price;
};

int main(){
    int i, n;
    struct Books book;

    cout << "Enter the number of Books : ";
    cin >> n;

    // Take user input for book specification
    for(i=0; i<n; i++){
        cout << endl << "Enter the detail of Book#" << i+1 << endl;

        cout << "Enter the Book Title : ";
        cin >> book.title;

        cout << "Enter the Book Author : ";
        cin >> book.author; 

        cout << "Enter the Number of pages of Book : ";
        cin >> book.pages;
    
        cout << "Enter the Book Subject : ";
        cin >> book.subject;
    
        cout << "Enter the Book id : ";
        cin >> book.book_id;

        cout << "Enter the Book Price : ";
        cin >> book.price;

    }

    for(i=0; i<n; i++){
        cout << endl << "The Details of Book #" << i+1 << endl;
        printBook(book);
    }
    return 0;
}

void printBook(struct Books book){
    cout << "Book Title : " << book.title << endl;
    cout << "Book Author : " << book.author << endl;
    cout << "Number Of Pages : " << book.pages << endl;
    cout << "Book id : " << book.book_id << endl;
    cout << "Book Subject : " << book.subject << endl;
    cout << "Book Price : " << book.price << endl;

}