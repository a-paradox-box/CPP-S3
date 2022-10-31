#include <iostream>

using namespace std;

void factorial1()
{
    int no, fact = 1;
    cin >> no;
    for (int i = 1; i <= no; i++)
        fact = fact * i;
    cout << "Factorial : " << fact << endl;
}

void factorial2(int no)
{
    int fact = 1;
    for (int i = 1; i <= no; ++i)
        fact = fact * i;
    cout << "Factorial : " << fact << endl;
}

int factorial3()
{
    int fact = 1, no;
    cin >> no;
    for (int i = 1; i <= no; i++)
        fact = fact * i;
    return fact;
}

int factorial4(int no)
{
    int fact = 1;
    for (int i = 1; i <= no; ++i)
        fact = fact * i;
    return fact;
}

int main()
{
    int no = 0, fact;
    cout << "Enter the number for func1: ";
    factorial1();
    cout << "Enter the number for func2: ";
    cin >> no;
    factorial2(no);
    cout << "Enter the number for func3: ";
    fact = factorial3();
    cout << "Factorial : " << fact << endl;
    cout << "Enter the number for func4: ";
    cin >> no;
    fact = factorial4(no);
    cout << "Factorial : " << fact << endl;
}
