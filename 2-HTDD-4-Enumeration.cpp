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

// NumberGrade is one of:
//  - 1
//  - 2
//  - 3
// interp. a number grade in class. 1 is failure, 2 is passing, 3 is good
// <examples are redundant in enumerations>

/*
void fnForNumberGrade(int ng)
{
    switch(ng)
    {
        case 1:
            (...)
            break;
        case 2:
            (...)
            break;
        case 3:
            (...)
            break;
    }
}
*/

// Template rules used:
// - One of. 3 cases:
// - atomic distinct value 1
// - atomic distinct value 2
// - atomic distinct value 3

// NumberGrade -> String
// Returns whenever a student did good, passed or failed basing on numbergrade
//string passedQ(int ng) { return ""; }   //stub


string passedQ(int ng)
{
    string passed;
    switch(ng)
    {
        case 1:
            passed = "Failed";
            break;
        case 2:
            passed = "Passed";
            break;
        case 3:
            passed = "Good";
            break;
    }
    return passed;
}

// took template from NumberGrade

int main()
{
    CheckExpect(passedQ(1), "Failed");
    CheckExpect(passedQ(2), "Passed");
    CheckExpect(passedQ(3), "Good");
    return 0;
}
