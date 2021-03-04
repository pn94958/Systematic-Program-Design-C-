#include<iostream>

using namespace std;

bool CheckExpect(bool a, bool b)
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

// ParkField is Integer[1, 16]
// interp. number of parking field in a row, 1 and 16 are borders
int PF1 = 1;    // border
int PF2 = 9;    // middle
int PF3 = 16;   // border

/*
void fnForParkField(int pf)
{
    ... pf;
}
*/

// Template rules used:
//  - atomic non-distinct: Integer[1, 16]

// ParkField -> Boolean
// Returns true if consumed ParkField is border, that is 1 or 16

// bool BorderQ(int pf) { return false; }   //stub

//<take template from ParkField>

bool BorderQ(int pf)
{
    bool borderpf;
    if(pf == 1 || pf==16)
    { borderpf = true; }
    else { borderpf = false; }
    return borderpf;
}

int main()
{
    CheckExpect(BorderQ(PF1), true);
    CheckExpect(BorderQ(PF2), false);
    CheckExpect(BorderQ(PF3), true);
    return 0;
}
