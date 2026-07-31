#include <iostream>

using namespace std;

// unitialized values may have garbage values or unintended consequences

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
    // define var x
    int x; // unitialized, just declared

    doNothing(x); // make the compiler think we're assigning a value to this variable

    cout << x << '\n'; // computer will assign random memory location, and return what's at that location
    return 0;
}

/* C++ allows compilers to interpret and determine how some parts of the language will behave - say to optimise for some hardware. 

A specific compiler and its associated libraries are called an implementation.

Behaviour that is dictated by the implementation are dubbed implementation-defined behaviour.
*/ 

/* A similar vein is unspecified behaviour. As the name suggests, the behaviour is not defined and left to the particular implementation to define, but not required to document it. 

In general we want to avoid these two classes of implementation-specific behaviours. */
