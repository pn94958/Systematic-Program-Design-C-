#include<iostream>

using namespace std;

bool CheckExpect1(int a, int b)
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

int getInput()
{
    cout << "Write an integer: \n";
    int input;
    cin >> input;
    return input;
}


int aInput()
{
    int input;
    input = 1;
    return input;
}

int bInput()
{
    int input;
    input = 2;
    return input;
}

int cInput()
{
    int input;
    input = 3;
    return input;
}

// Int Int -> Int
// Write a function that produces the higher of two consumed numbers.

//int higherN(int b, int a) { return 0; }   //stub

//int higherN(int a, int b)                 //template
//{
//    ... a b
//}

int higherN(int a, int b)
{
    int higher;
    if(a > b)
        { higher = a; }
        else
        { higher = b; }
    return higher;
}

// Int Int Int -> Int
// Write a function that produces the higher of three consumed numbers.

//int higherNT(int a, int b, int c) { return 0; }   //stub

//int higherNT(int a, int b, int c)                 //template
//{ ... a b c }

int higherNT(int a, int b, int c)
{ 
    int higher;
    if(a >= b && a >= c)
    { higher = a; }
        else if ( b >= c)
        { higher = b; }
            else
                { higher =c; }
    return higher;
}

int main()
{
    CheckExpect1(higherN(2, 1),2);
    CheckExpect1(higherN(2, 2),2);
    CheckExpect1(higherN(1, 2),2);
    CheckExpect1(higherN(aInput(), bInput()), bInput());

    CheckExpect1(higherNT(3, 2, 1),3);
    CheckExpect1(higherNT(2, 2, 2),2);
    CheckExpect1(higherNT(1, 2, 3),3);
    CheckExpect1(higherNT(aInput(), bInput(), cInput()), cInput());
    return 0;
}
