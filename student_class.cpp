#include <iostream>


class Student{
    public:
    int roll_no;
    int class_no;
    int mark;
    std::string student_first_name;
    std::string student_last_name;
    Student(){
        student_first_name = '\0';
        student_last_name = student_first_name;
        roll_no = 0;
        class_no = 0;
        mark = 0;
    };
    Student(std::string first, std::string last, int roll, int _class, int _mark){
        student_first_name = first;
        student_last_name = last;
        roll_no = roll;
        class_no = _class;
        mark = _mark;
    };
    void displayData(){
        std::cout<<"\tStudent Detail Chart\n";
        std::cout<<"Name: "<<student_first_name<<" "<<student_last_name<<std::endl;
        std::cout<<"Roll no: "<<roll_no<<std::endl;
        std::cout<<"Class: "<<class_no<<std::endl;
        std::cout<<"Mark: "<<mark<<std::endl;
    };
    void getData(){
        std::cout<<"Enter the first name: ";
        std::getline(std::cin, student_first_name);
        std::cout<<"Enter the last name: ";
        std::getline(std::cin, student_last_name);
        std::cout<<"Enter the roll no: ";
        std::cin>>roll_no;
        std::cout<<"Enter the class no: ";
        std::cin>>class_no;
        std::cout<<"Enter the mark: ";
        std::cin>>mark;
    };
};

int main(){
    Student a;
    Student b("Eobawd", "Thawne", 2, 3, 100);
    a.getData();
    a.displayData();
    b.displayData();
}
