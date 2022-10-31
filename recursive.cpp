#include <iostream>

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int a_number;
    std::cout << "Enter a number to find its factorial : ";
    std::cin >> a_number;
    std::cout << a_number << "! = " << factorial(a_number) << std::endl;
}