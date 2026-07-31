#include <iostream>  // for std::cout and std::cin
// the characterout is buffered and gets flushed periodically
// if program crashes inbetween flushes, the current variables in line will not show up on console
// doing std::endl is potentially inefficient as it forces a flush everytime
// opt for "\n" instead which doesn't force a flush unnecessarily

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';

    //cin is buffered as well, and multiple inputs will get immediately extracted to fulfil consecutive variable inputs
    std::cout << "Enter two numbers: ";
    int y{};
    std::cin >> y; // if user supplies 2 values here, there won't be a pause after z, as the 2nd value is buffered and extracted

    int z{};
    std::cin >> z;

    std::cout << "You entered " << y << " and " << z << '\n';

    return 0;
}
