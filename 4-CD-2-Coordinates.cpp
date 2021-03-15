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

// Data Definitions:

class Monkey
{
    public:
    int x;
    int y;
    Monkey(int aX, int aY)
    {
        x = aX;
        y = aY;
    }
};
// Monkey is Monkey(Integer, Integer)
// interp. x,y coordinates of a game character
Monkey M1(0, 0);
Monkey M2(0, 3);
Monkey M3(3, 0);
Monkey M4(3, 3);
Monkey M5(-1, 0);
Monkey M6(0, -1);
Monkey M7(-1, -1);
Monkey M8(5, 4);
Monkey M9(4, 5);
Monkey M10(5, 5);
Monkey M11(4, 4);

/*
Monkey fnForMonkey(Monkey m)
{
    ...
    m.x;
    m.y;
}
*/
// Template rules used:
//  - compound: 2 fields

// Functions:

// Monkey -> Boolean
// Return true if x or y of consumed monkey is lesser than 0 greater than 4.

//bool outsideQ(Monkey m) { return false; }   //stub

//<use template from Monkey>

bool outsideQ(Monkey m)
{
    bool outside;
    if(m.x < 0 || m.y < 0)
    {
        outside = true;
    }
    else if(m.x > 4 || m.y > 4)
    {
        outside = true;
    }
    else
    {
        outside = false;
    }
    return outside;
}

int main()
{
    CheckExpect(outsideQ(M1), false);
    CheckExpect(outsideQ(M5), true);
    CheckExpect(outsideQ(M6), true);
    CheckExpect(outsideQ(M7), true);
    CheckExpect(outsideQ(M8), true);
    CheckExpect(outsideQ(M9), true);
    CheckExpect(outsideQ(M10), true);
    CheckExpect(outsideQ(M11), false);
    return 0;
}
