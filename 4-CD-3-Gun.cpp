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

//=====Data Definitions=====

class Gun
{
    public:
    string name;
    string ammotype;
    int    ammo;
    int    accuracy;
    int    speed;
    Gun(string aName, string aAmmotype, int aAmmo, int aAccuracy, int aSpeed)
    {
        name = aName;
        ammotype = aAmmotype;
        ammo = aAmmo;
        accuracy = aAccuracy;
        speed = aSpeed;
    }
};

// Gun is Gun(String, String, Integer, Integer, Integer)
// interp a gun type with name, ammo type, ammo number, accuracy and speed

Gun Gun1("Semi-auto Rifle", "5mm", 20, 3, -1);
Gun Gun2("Pistol", "10mm", 8, 0, 2);
/*
void fnForGun(Gun g)
{
    //...
    g.name;
    g.ammotype;
    g.ammo;
    g.accuracy;
    g.speed;
}
*/
// Template rules used:
//  - compound: 5 fields

//=====Functions=====

// Gun -> String
// Produces a string containing gun's parameters.

// string gunParameters(Gun g) { return ""; }   //stub

// <take template from Gun>

string gunParameters(Gun g)
{
    string gparameters;
    gparameters = g.name + " with " + to_string(g.ammo) + " " + g.ammotype + " rounds";
    gparameters = gparameters + ", accuracy " + to_string(g.accuracy);
    gparameters = gparameters + " and speed " + to_string(g.speed) + " .\n";
    return gparameters;
}

int main()
{
    CheckExpect(gunParameters(Gun1), "Semi-auto Rifle with 20 5mm rounds, accuracy 3 and speed -1 .\n");
    cout << gunParameters(Gun1);
    cout << gunParameters(Gun2);
    return 0;
}
