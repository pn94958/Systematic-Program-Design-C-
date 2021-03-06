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

//Ammo is Integer[0, 30]
//interp. amount of rounds in a magazine
int A1 = 30;  // full magazine
int A2 = 1;   // 1 round remaining
int A3 = 0;   // empty magazine

/*
void FnForAmmo(int a)
{
    ... a;
}
*/
// Template rules used:
// Atomic Non-Distinct: Integer[0, 30]

//Ammo -> String
//produce string "Blam!" Ammo is more than 0 and produce "Clang!" if 0

//string Fire(int a) { return ""; }   //stub

//<use template from Ammo>
string Fire(int a)
{
    string firing;
    if(a > 0)
    { firing = "Blam!"; }
    else { firing = "Clang!"; }
    return firing;
}

int main()
{
    CheckExpect(Fire(A1),"Blam!");
    CheckExpect(Fire(A2),"Blam!");
    CheckExpect(Fire(A3),"Clang!");
    return 0;
}
