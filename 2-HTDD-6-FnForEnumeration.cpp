#include<iostream>

using namespace std;

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

// NumberGrade -> NumberGrade
// Produce next lower number grade. 1 stays the same

//int bumpDown(int ng) { return 0; }   //stub

//<take template from NumberGrade>

int bumpDown(int ng)
{
    int bumpedng;
    switch(ng)
    {
        case 1:
            bumpedng = 1;
            break;
        case 2:
            bumpedng = 1;
            break;
        case 3:
            bumpedng = 2;
            break;
    }
    return bumpedng;
}


int main()
{
    CheckExpect(bumpDown(1),1);
    CheckExpect(bumpDown(2),1);
    CheckExpect(bumpDown(3),2);
    return 0;
}
