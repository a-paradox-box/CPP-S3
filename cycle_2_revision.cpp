#include <iostream>


void read_array(int size, int arr[]){
    // array reading
    for(int i=0; i<size; i++){
        std::cout<<"Enter the element at "<<i<<"th position of the array :- ";
        std::cin>>arr[i];
    }}


void display_array(int size, int arr[]){
    // array displaying
    for(int i=0; i<size; i++){
        std::printf("Element at %d position is %d\n", i, arr[i]);
    }
}


void read_display_name(){
    std::string name;
    // read and display my name
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
    std::cout<<"Your Name is : "<<name<<std::endl;
}


int sum_of_an_array(int size, int arr[]){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}


int largest_of_an_array(int size, int arr[]){
    int largest = arr[0];
    for(int i=1; i<size; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}


int main(){
    int size;
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;
    int new_array[size];
    read_array(size, new_array);
    display_array(size, new_array);
    std::cout<<"Sum of the elements of this array :- "<<
    sum_of_an_array(size, new_array)<<std::endl;
    std::cout<<"Largest element of this array :-"<<
    largest_of_an_array(size, new_array)<<std::endl;
}