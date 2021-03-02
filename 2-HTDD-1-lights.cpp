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

// light is int and one of:
// 0
// 1
// 2
// interp. 0 is Red, 1 is Yellow, 2 is Green
/*
int fnForLight()
{
switch(int light)
{
    case 0:
        ...
        break;
    case 1:
        ...
        break;
    case 2:
        ...
        break;
}
}
*/

// Functions
// light -> light
// write a function that consumes the curent light sets the next light
// the correct light progression is red -> yellow -> green -> red.
// in case of errondous data set light to red.

//int nextLight(int light) { return 0; }    //stub

int nextLight(int light)
{
switch(light)
{
    case 0:
        light = 1;
        break;
    case 1:
        light = 2;
        break;
    case 2:
        light = 0;
        break;
    default:
        light = 0;
}
return light;
}

int main()
{
    CheckExpect(nextLight(0),1);
    CheckExpect(nextLight(1),2);
    CheckExpect(nextLight(2),0);
    CheckExpect(nextLight(15),0);
    return 0;
}
