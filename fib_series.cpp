#include <iostream>

int main(){
    int x=0, y=1, z, limit;
    std::cout<<"Enter the limit :";
    std::cin>>limit;
    std::cout<<"Fibonacci Series: ";
    for(int i=1; i<=limit ; i++){
        if(i==1){
            std::cout<<x<<" ";
            continue;
        }
        if(i==2){
            std::cout<<y<<" ";
            continue;
        }
        z = x+y;
        x=y;y=z;
        std::cout<<z<<" ";
    }

}