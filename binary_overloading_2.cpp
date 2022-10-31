#include <iostream>

class Name
{
public:
    std::string name;
    // display function
    void display()
    {
        std::cout << "Name is:" << name << std::endl;
    };
    // default constructor
    Name()
    {
        name = '\0';
    };
    // parenthesized constructor
    Name(std::string thisname)
    {
        name = thisname;
    };
    // + operator overloading
    Name operator+(Name &obj)
    {
        return Name(name + " " + obj.name);
    }
};

int main()
{
    Name A("Harrison");
    Name B("Wells");
    A.display();
    B.display();
    A = A + B;
    A.display();
}