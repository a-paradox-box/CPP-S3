#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
public:
    int salary, emp_id;
    char name[30];
    char department[20];
    void read()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Employe ID: ";
        cin >> emp_id;
        cout << "Enter department: ";
        cin >> department;
        cout << "Employee created successfully\n";
    }
    Employee()
    { // default constructor
        salary = 0;
        strcpy(name, "null"); // null char
        emp_id = 0;
        strcpy(department, "null"); // default
    }
    Employee(string name_str, int _salary, int _id, string dep)
    { // parameterized constructor
        salary = _salary;
        emp_id = _id;
        strcpy(name, name_str.c_str());  // string to char array
        strcpy(department, dep.c_str()); // ,,
    }
};

int total_objects = 5;

// Bubble sorting
// https://www.cs.cmu.edu/~adamchik/15-121/lectures/Sorting%20Algorithms/sorting.html
Employee *highest_salary(Employee EA[])
{
    int n = total_objects;
    for (int x = n - 1; x >= 0; x--)
    {
        for (int j = 1; j <= x; j++)
        {
            if (EA[j - 1].salary > EA[j].salary)
            {
                Employee temp = EA[j - 1];
                EA[j - 1] = EA[j];
                EA[j] = temp;
            }
        }
    }
    return EA;
}

int main()
{
    Employee E[total_objects + 1];
    Employee *EA;
    for (int x = 0; x <= total_objects; x++)
        E[x].read();
    EA = highest_salary(E);
    cout << "Highest Salary In Order :-\n";
    int n = sizeof(EA) / sizeof(EA[0]);
    for (int x = total_objects; x >= 0; x--)
        printf("%s - %d\n", EA[x].name, EA[x].salary);
}