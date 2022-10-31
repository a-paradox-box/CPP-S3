#include <iostream>

union Employee
{
    float TOTAL, HRA, DA;
} Employee;

int main()
{
    float BP;
    std::cout << "Enter the BasicPay: ";
    std::cin >> BP;
    Employee.DA = BP / 50;
    std::cout << "DA : " << Employee.DA << std::endl;
    Employee.HRA = BP / 10;
    std::cout << "HRA : " << Employee.HRA << std::endl;
    Employee.TOTAL = (BP / 50) + Employee.HRA + BP;
    std::cout << "Total Pay : " << Employee.TOTAL << std::endl;
}
