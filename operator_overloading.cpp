#include <iostream>

class Complex{
    public:
    int realnumber;
    int imaginary;
    // display function
    void display(){
	std::cout<<realnumber<<"+"<<imaginary<<"i\n";
    };
    void getData(){
        std::cout<<"Enter the real number part :- ";
        std::cin>>realnumber;
        std::cout<<"Enter the imaginary part :- ";
        std::cin>>imaginary;
    }
    // default constructor
    Complex(){
        realnumber = 0;
        imaginary = 0;
    };
    // parenthesized constructor
    Complex(int r, int im){
        realnumber = r;
        imaginary = im;
    };
    // ++ operator overloading 
    Complex operator ++(){
        realnumber++;
        imaginary++;
        return Complex(realnumber, imaginary);
    }
    // -- operator overloading
    Complex operator --(){
        realnumber--;
        imaginary--;
        return Complex(realnumber, imaginary);
    }
};

int main() {
    Complex hello(1, 2);
    hello.display();
    ++hello;
    hello.display();
    --hello;
    hello.display();
}
