#include <iostream>
// call by reference
using namespace std;
void swap(int*, int*);
int main(){
int a, b;
cout<<"Enter two numbers : ";
cin>>a>>b;
cout<<"Before swapping a = "<<a<<" b = "<<b<<endl;
swap(&a, &b);
cout<<"After swapping a = "<<a<<" b = "<<b<<endl;
}

void swap(int* x, int* y){
int temp;
temp=*x;
*x=*y;
*y=temp;
cout<<"while swapping a = "<<*x<<" b = "<<*y<<endl;
}
