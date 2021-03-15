#include<iostream>

using namespace std;

bool CheckExpect(string a, string b)
{
    bool check;
    if(a == b)
    {
        cout << "Test passed successfully.\n";
        check = true;
    }
    else
    {
        cout << "The result is expected to be " << b << " but is " << a << ".\n";
        check = true;
    }
    
    return check;
}

// Data Definitions

class Book
{
    public:
    string title;
    string author;
    int year;
    Book(string aTitle, string aAuthor, int aYear)
    {
        title = aTitle;
        author = aAuthor;
        year = aYear;
    }
};
// Book is Book(String String Integer)
// interp. a book with title, author and year of publishing

Book B1("Prekursorzy: Pierwsze brytyjskie czołgi", "Witold J. Ławrynowicz", 2006);
Book B2("Wojna Pancerna", "Ludwik Von Eimannsberger", 2013);
Book B3("A7V i Prekursorzy Niemieckiej Broni Pancernej", "Witold J. Ławrynowicz", 2016);
Book B4("Czołgi w Wielkiej Wojnie", "John Frederick Charles Fuller", 2013);
/*
Book fnForBook(Book b)
{
    ...
        b.title;
        b.author;
        b.year;
}
*/

// Template rules used:
//  - compound: 3 fields

// Book Book -> String
// Consumes two books and returns name of the newer book. If year is equal returns a message saying so.

//string newer(Book b, Book c) { return ""; }

// <use template from Book>

string newer(Book b, Book c)
{   
    string title;
    if(b.year >  c.year)
    { title = b.title; }
    else if(b.year == c.year)
    { title = "Both books are from the same year."; }
    else    
    { title = c.title; }
    return title;
}

int main()
{
    CheckExpect(newer(B1, B2), "Wojna Pancerna");
    CheckExpect(newer(B3, B2), "A7V i Prekursorzy Niemieckiej Broni Pancernej");
    CheckExpect(newer(B4, B2), "Both books are from the same year.");
    return 0;
}
