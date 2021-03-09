#include<iostream>
using namespace std;

// My world program  (make this more specific)

// =================
// Constants:

// =================
// Data definitions:

// Monkey is Integer
// interp. X position of a monkey character
int mk = 0;
/*
int FnForMonkey(int mk)
{
    ... mk;   
}
*/
//  Template rules used:
//   -atomic non-distinct: Integer

// =================
// Functions:
bool CheckExpect(int a, int b)
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

//Monkey -> Monkey
//produce next monkey incread by 1
// int NextMonkey(int mk) { return 0; }   //stub

//<use template from Monkey>

int NextMonkey(int mk)
{
    if(mk>5)
    {
        mk++;
    }
    return mk;
}

// Monkey -> Monkey
// start the world with mk
// 
int main()
{
    CheckExpect(NextMonkey(mk),0);
    CheckExpect(NextMonkey(5),5); 
    return 0;
}
