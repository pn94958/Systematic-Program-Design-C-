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

// ParkField Integer ParkField -> Bool
// Return true if entered character is a ParkField.


// bool IsParkFieldQ(int pfa, int i, int pfc) { return false; }

bool IsParkFieldQ(int pfa, int i, int pfc)
{
    bool ipf;
    if(i >= pfa && i <= pfc)
    {
        ipf = true;
    }
    else
    {
        ipf = false;
    }
    return ipf;
}

int main()
{
    CheckExpect(IsParkFieldQ(PF1, 0, PF3), false);
    CheckExpect(IsParkFieldQ(PF1, PF1, PF3), true);
    CheckExpect(IsParkFieldQ(PF1, PF2, PF3), true);
    CheckExpect(IsParkFieldQ(PF1, PF1, PF3), true);
    return 0;
}
