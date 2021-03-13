#include<iostream>
using namespace std;

// My world program  (make this more specific)

// =================
// Constants:

// =================
// Data definitions:

// Monkey is Integer
// interp. X position of a monkey character
int mk = 2;
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

bool CheckExpect3(char a, int b)
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

bool CheckExpect4(string a, string b)
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

// Char Monkey -> Monkey
// Moves the monkey one field left if 'a' is pressed, one field right if 's' is pressed. Moves it to 6 if other key is pressed
//int KeyHandler(char ke, int mk) { return 0; }    //stub

int KeyHandler(char ke, int mk) { 
    switch(ke)
    {
    case 'a':
    mk = mk - 1;
    break;
    case 's':
    mk = mk + 1;
    break;
    default:
    mk = 6;
    break;
    }
    return mk; }

// Monkey -> String
// Renders a scene with monkey in correct place.

//string RenderScene(int mk) { return ""; }    //stub

//<use template from Monkey>

string RenderScene(int mk)
{
    string Scene;
    Scene = ".....";
    Scene[0] = RenderMonkey(mk,0);
    Scene[1] = RenderMonkey(mk,1);
    Scene[2] = RenderMonkey(mk,2);
    Scene[3] = RenderMonkey(mk,3);
    Scene[4] = RenderMonkey(mk,4);
    return Scene;
}


// Monkey -> Monkey
// Moves monkey from left to right after every keypress
int main()
{
    //CheckExpect(NextMonkey(mk),0);
    //CheckExpect(NextMonkey(5),5); 
    //CheckExpect2(RenderMonkey(5,5),'@');
    //CheckExpect2(RenderMonkey(1,5),'.');
    //CheckExpect3(KeyHandler(' ', 4), 6);
    //CheckExpect3(KeyHandler('a', 4), 3);
    //CheckExpect3(KeyHandler('s', 4), 5);
    //CheckExpect4(RenderScene(0),"@....");
    //CheckExpect4(RenderScene(4),"....@");
    //CheckExpect4(RenderScene(6),".....");

    cout << "Move the monkey left by pressing 'a' and right by pressing 's'." << endl;
    cout << "End the program by pressing other letter. Enter confirms the key." << endl;
    cout << RenderScene(mk) << endl;
    while(mk < 6 && mk >= 0)
    {
    // mk = NextMonkey(mk);
    mk = KeyHandler(getchar(), mk);
    cin.ignore();
    cout << RenderScene(mk) << endl;
    }


    return 0;
}
