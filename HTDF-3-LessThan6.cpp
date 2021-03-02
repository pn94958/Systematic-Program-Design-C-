/* Design a function that takes a word and returns true if the word is less than 6 characters long */
#include<iostream>

using namespace std;

bool CheckExpect(bool b, bool a)
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

// String -> Bool
// Produces true if given word is less than 6 characters long.

//bool ShorterThan6(string s) { return false; }   //stub

//bool ShorterThan6(string s)                     //template
//{   ... s }

bool ShorterThan6(string s)
{   return (s.length() < 6); }

int main()
{
    CheckExpect(true, ShorterThan6("Dark"));
    CheckExpect(false, ShorterThan6("Darker"));
    CheckExpect(false, ShorterThan6("Darkest"));
    return 0;
}
