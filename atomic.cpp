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

/* Write a function that consumes a city name and returns true if the city is biggest in the world.*/

// Data definitions:

// CityName is String
// interp. name of a city
string cn1 = "Fulda";
string cn2 = "Tokyo";

/*
int FnForCityName(string cn)
{
    ... cn;
}
*/

// Template rules used:
//  atomic non-distinct: String
//
//

// Functions:

// CityName -> Boolean
// Returns true if consumed city is biggest in the world, that is "Tokyo"

//bool isBiggestQ(string cn) { return false; }   //stub

// took template from CityName

bool isBiggestQ(string cn)
{
    if(cn == "Tokyo")
    { true; }
    else
    { false; }
}


int main()
{
    CheckExpect(isBiggestQ(cn1),false);
    CheckExpect(isBiggestQ(cn2),true);
    return 0;
}
