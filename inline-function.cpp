#include <iostream>

inline float cubic(int s){
    return s*s*s;
}

inline float multiply(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    std::cout<<"Enter the number to find its cube: ";
    std::cin>>a;
    std::cout<<cubic(a)<<std::endl;
    std::cout<<"Enter two numbers to find its product:\n";
    std::cin>>a;
    std::cin>>b;
    std::cout<<multiply(a, b)<<std::endl;
}