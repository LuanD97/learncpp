#include <iostream>
// use standard library input and output. 
int main()
{
    int x;  // defines a singular variable
    // int y, b;  // simultaneously defines two variables as ints 

    x = 5;

    std::cout << "x: " << x << std::endl;

    // the above was tedious, can do definition and assingment in one go
    // this is called initialisation
    int width { 5 };
    std::cout << "width: " << width << std::endl;

    // there are 5 forms of variable initialisations in c++
    // copy-init: simply copies right value to left variable
    int x2 = 5;

    std::cout << "x2: " << x2 << std::endl;

    // list-init: modern way, init using curly braces
    int y {5};
    std::cout << "y: " << y << std::endl;

    // copy-list-init: list init but copied 
    int z = {6};
    std::cout << "z: " << z << std::endl;

    // value init - sounds like init with default values. for int this is 0
    int z2 {};
    std::cout << "z2: " << z2 << std::endl;

    // ------------- 
    // list init is safer, errors with wrong type whereas copy-init does not
    // int z3 {3.25}; // errors on this line, float assigned to int variable
    // int z4 = 3.25;

    // std::cout << "z3: " << z3 << std::endl;
    // std::cout << "z4: " << z4 << std::endl;

    // -------------
    // un-used values will throw compiler error. use [[maybe-unused]] flag to bypass
    [[maybe_unused]] double  pi {3.14321};

    return 0;
}
