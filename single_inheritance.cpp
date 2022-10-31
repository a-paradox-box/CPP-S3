#include <iostream>

using namespace std;

class Mark
{
public:
    int mark;
    void setMark(int x)
    {
        mark = x;
    }
    void displayMark()
    {
        cout << "Mark: " << mark << "\n";
    }
    Mark()
    {
        mark = 0;
    };
    Mark(int x)
    {
        mark = x;
    };
};

class Student : public Mark
{
public:
    int rollno, classno;
    string name;
    void getData()
    {
        cout << "Enter the name: ";
        getline(cin, name);
        cout << "Enter the class: ";
        cin >> classno;
        cout << "Enter roll number: ";
        cin >> rollno;
    }
    void displayData()
    {
        cout << "\t\tStudent Details\n";
        cout << "Name: " << name.c_str() << "\n";
        cout << "Roll No: " << rollno << "\n";
        cout << "Class: " << classno << "\n";
        displayMark();
    }
    Student()
    {
        name = '\0';
        classno = 0;
        rollno = 0;
    }
    Student(string _name, int roll, int cls)
    {
        name = _name;
        rollno = roll;
        classno = cls;
    }
};

int main()
{
    Student S;
    S.setMark(12);
    S.getData();
    S.displayData();
}
