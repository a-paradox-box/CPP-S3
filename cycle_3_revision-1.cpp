#include <iostream>
#include <string>

struct letters
{
    int A = 0;
    int E = 0;
    int I = 0;
    int O = 0;
    int U = 0;
};

void _vowels(char words[], int limit)
{
    letters vowels;
    for (int x = 0; x <= limit; x++)
    {
        switch (words[x])
        {
        case 'A':
        case 'a':
            vowels.A += 1;
            break;
        case 'E':
        case 'e':
            vowels.E += 1;
            break;
        case 'I':
        case 'i':
            vowels.I += 1;
            break;
        case 'O':
        case 'o':
            vowels.O += 1;
            break;
        case 'U':
        case 'u':
            vowels.U += 1;
            break;
        }
    }
    std::printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n",
                vowels.A, vowels.E, vowels.I, vowels.O, vowels.U);
}

// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
int main()
{
    int limit = 0;
    std::cout << "Enter limit of the array: ";
    std::cin >> limit;
    char words[limit];
    std::cout << "Enter a string :- ";
    std::cin >> words;
    // vowels count
    _vowels(words, limit);
}