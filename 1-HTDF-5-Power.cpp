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

// Integer Integer -> Integer
// consumes number and power and returns number^power
//int power(int num, int powr) { return 0; }   //stub

int power(int num, int powr)
{
    int result = 1;
    if(powr == 0)
    {
        result = 1;
    }
    else
    { 
        for(powr; powr > 0; powr--)
        {
            result = result * num;
        }
    }
    return result;
}

int main()
{
    CheckExpect(power(10,0),  1);
    CheckExpect(power(10,1), 10);
    CheckExpect(power(10,2), 100);
    CheckExpect(power(10,3), 1000);
    cout << power(13,7) << endl;
    return 0;
}
