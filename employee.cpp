
#include <iostream>


class Employee{
    public:
    int employee_id;
    int employee_age;
    std::string employee_name;
    Employee(){  // default constructor 
        employee_id = 0;
        employee_age = 20;
        employee_name = '\0';
    };
    Employee(int id, int age, std::string name){  // parameterised constructor
        employee_id = id;
        employee_age = age;
        employee_name = name;
    };
    void displayData(){
        std::cout<<"\tEmployee Detail Chart\n";
        std::cout<<"Name: "<<employee_name<<std::endl;
        std::cout<<"ID : "<<employee_id<<std::endl;
        std::cout<<"Age: "<<employee_age<<std::endl;
    };
    void getData(){
        std::cout<<"Enter the employee name: ";
        std::cin>>employee_name;
        std::cout<<"Enter the employee ID: ";
        std::cin>>employee_id;
        std::cout<<"Enter the age of employee: ";
        std::cin>>employee_age;
    }
};

int main(){
    Employee arrays[7];
    for(int x = 0; x<=6 ; x++){
        Employee temp;
        temp.getData();
        arrays[x] = temp;
    }
    for(int x = 0; x<=6 ; x++){
        arrays[x].displayData();
    }
}
