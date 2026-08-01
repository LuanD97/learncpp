#include <iostream>

int main()
{
int input_1 {};
int input_2 {};

std::cout << "Enter an integer: ";
std::cin >> input_1;

std::cout << "Enter another integer: "; 
std::cin >> input_2;

// solution
std::cout << input_1 << " + " << input_2 << " is " << input_1 + input_2 << ".\n";
std::cout << input_1 << " - " << input_2 << " is " << input_1 - input_2 << ".\n";
}
