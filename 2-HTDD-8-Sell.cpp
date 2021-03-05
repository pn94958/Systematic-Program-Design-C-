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

// ItemStatus is one of:
//  - 1
//  - 2
//  - 3
// interp. status of item in organization's inventory.
//  - 1 is "New"
//  - 2 is "Outdated"
//  - 3 is "Heritage"

/*
void FnForItemStatus(int is)
{
    switch(is)
    {
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
    }
}
*/
// ugh, switch doesn't work on strings. That sucks.

// - template rules used:
// - one of. 3 cases:
//  - atomic distinct 1
//  - atomic distinct 2
//  - atomic distinct 3

// ItemStatus -> Boolean
// Return true if given item is "outdated" - ItemStatus is "Outdated"

//bool sellQ(int is) { return false; }    //stub

//<take template from ItemStatus>

bool sellQ(int is)
{
    bool sell;
    switch(is)
    {
        case 1:
        sell=false;
        break;
        case 2:
        sell=true;
        break;
        case 3:
        sell=false;
        break;
    }
    return sell;
}


int main()
{
    CheckExpect(sellQ(1), false);
    CheckExpect(sellQ(2), true);
    CheckExpect(sellQ(3), false);
    return 0;
}
