#include <iostream>

// we define a function that returns 5
int five()
{
    return 5;
}

int main()
{
    int a{ 2 };            // initialize variable a, literal 2
    int b{ 2 + 3 };        // computed value 5
    int c{ (2 * 3) + 4 };  // computed value 10
    int d { b };           // value 5
    int e{ five()};        // e with function return 5

    return 0;
}

// the language is evaluating all the expressions to a single value for assignment to the variable
// we've demonstrated a variety of different expressions
// expressions cannot exist by themselves, must be part of a statement
// and a statement always terminates with semicolon ;

