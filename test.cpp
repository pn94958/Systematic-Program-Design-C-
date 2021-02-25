#include<iostream>

using namespace std;

bool checkexpect(double f, double r)  // ugh, these types are static, right? I guess I'll have to customize check-expect code basing on signature
{
    bool pass;
    if(f == r)
    {
        cout << "Test passed.";
        pass = true;
    }
    else {
        cout << "Failure. Result: " << f << " is different from expected, " << r << ".\n";
        pass = false;
        }
        
    return pass;
}


// double -> double
// the function produces a given number multiplied by 2.

// double doubling(double n) {     return 0;} //stub

/* double doubling(double n)
{  n = ... n         
         return 0;}  */

double doubling(double n)
{  n = n * 2;         
         return n;} 

int main()
{
    checkexpect(doubling(2), 4);
    checkexpect(doubling(4.2), 8.4);

    return 0;
}
