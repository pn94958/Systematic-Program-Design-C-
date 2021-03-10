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

bool CheckExpect2(char a, char b)
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
//produce next monkey increased by 1 until it reaches 6
// int NextMonkey(int mk) { return 0; }   //stub

//<use template from Monkey>

int NextMonkey(int mk)
{
    if(mk<6)
    {
        mk++;
    }
    return mk;
}

//Monkey Number -> Char
//produce '@' if consumed number is equal to monkey and else produce '.'

//char RenderMonkey(int mk, int n) { return 'a'; }    //stub

//<use template from Monkey>

char RenderMonkey(int mk, int n)
{
    char rm;
    if(mk == n)
    { rm = '@'; }
    else
    { rm = '.'; }
    return rm;
}

// Monkey -> Monkey
// Moves monkey from left to right after every keypress
int main()
{
    //CheckExpect(NextMonkey(mk),0);
    //CheckExpect(NextMonkey(5),5); 
    //CheckExpect2(RenderMonkey(5,5),'@');
    //CheckExpect2(RenderMonkey(1,5),'.');
    cout << "Watch the monkey move left to right after pressing enter!" << endl;
    while(mk < 6)
    {
    cout << RenderMonkey(mk,0) << RenderMonkey(mk,1) << RenderMonkey(mk,2) << RenderMonkey(mk,3) << RenderMonkey(mk,4) << endl;
    mk = NextMonkey(mk);
    cin.get();
    }

    return 0;
}
