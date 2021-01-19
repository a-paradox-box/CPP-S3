#include <iostream>


bool isPrime(int n){
    if (n <= 1)
        return false;
    // checking from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false;
    return true;
}


int main(){
    int n=0, reversed=0, original, remainder;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    original = n;
    while (n != 0) {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }
    // palindrome if orginal and reversed are equal
    if (original == reversed)
        std::printf("%d is a palindrome.", original);
    else
        std::printf("%d is not a palindrome.", original);
    std::cout<<"\n";
    // checking prime
    if (isPrime(original)){
        std::printf("%d is a prime number.", original);
    } else{
        std::printf("%d is not a prime number.", original);
    } 
}