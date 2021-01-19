#include <iostream>


int main(){
    int* a=NULL, size=1, sum=0;
    std::cout<<"Enter the limit of the array: ";
    std::cin>>size;
    std::cout<<"Now Enter the elements of the array"<<std::endl;
    a = new int[size];
    for (int i=0; i<size; i++) {
        std::cin>>a[i];    // Read all elements 
    }
    for (int i=0; i<size; i++){
        sum += a[i];
    }
    std::cout<<sum<<std::endl;
    delete[] a;
    a = NULL;
}