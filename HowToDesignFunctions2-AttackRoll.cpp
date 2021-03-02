#include<iostream>

using namespace std;

bool CheckExpect1(int b, int a)
{
    bool check;
    if(a <= b && a >= 1)
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

bool CheckExpect2(int a, int b)
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

bool CheckExpect3(string a, string b)
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

// Number -> Number
// consumes a dice side number and returns a dice roll (1 to number of sides)

// int DiceRoll(int s) { return 0; }   //stub

//int DiceRoll(int s)                  //template
//{ 
//   ... s
//    return 0;
//}

int DiceRoll(int s)
{   int roll;
    roll = 1 + rand() % s;
    cout << roll << endl;
    return roll;
}

// Number Number -> Number
// consumes a roll result and a difficulty level and returns attack result
// attack result is roll - difficulty

// int AttackResult(int b, int a) {return 0; }   //stub

//int AttackResult(int b, int a)                 //template
//{   ... a b
//    return 0; 
//}

int AttackResult(int b, int a)
{   int result;
    result = a - b;
    cout << result << endl;
    return result;
    }

// Number -> String
// Consumes a number and produces different string basing on result.
// Negative - "Miss!"
// 0 - "Glancing hit!"
// Positive - "Solid hit!"

//string AttackText(int a) { return ""; }   //stub

//string AttackText(int a)                  //template
//{
//    ... a
//    return "";
//}

string AttackText(int a)
{
    string text;
    if(a < 0)
    { text = "Miss!"; }
    else if(a == 0)
    { text = "Glancing hit!"; }
    else { text = "Solid hit!"; }
        
    return text;
}

int main()
{
    srand(time(NULL));
    CheckExpect1(6,DiceRoll(6));
    CheckExpect2(AttackResult(10,21), 11);
    CheckExpect2(AttackResult(10,10), 0);
    CheckExpect2(AttackResult(10,5), -5);
    CheckExpect3(AttackText(-1), "Miss!");
    CheckExpect3(AttackText(0), "Glancing hit!");
    CheckExpect3(AttackText(1), "Solid hit!");
    CheckExpect3(AttackText(AttackResult(10,10)), "Glancing hit!");

    cout << AttackText(AttackResult(10,DiceRoll(20))) << endl;
    cout << AttackText(AttackResult(10,DiceRoll(20))) << endl;
    cout << AttackText(AttackResult(10,DiceRoll(20))) << endl;
    return 0;
}
