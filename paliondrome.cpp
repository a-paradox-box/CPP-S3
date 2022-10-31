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
    // palindrome if orginal and reversed are equal
    if (original == reversed)
        std::printf("%d is a palindrome.\n", original);
    else
        std::printf("%d is not a palindrome.\n", original);
}