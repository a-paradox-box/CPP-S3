#include <iostream>

int main()
{
    int n = 0, reversed = 0, original, remainder;
    std::cout << "Enter a number : ";
    std::cin >> n;
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    std::cout << "Reverse: " << reversed << std::endl;
}
