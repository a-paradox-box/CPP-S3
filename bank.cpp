#include <iostream>
#include <string.h>
#include <string>

class BankAccount {
    public:
    static float interest;
    int balance;
    char name[30];
    char type[10];
    long int account_number;
    void getData() {
    std::cout<<"Enter account name (<30): ";
    std::cin>>name;
    std::cout<<"Enter account number: ";
    std::cin>>account_number;
    std::cout<<"Enter account balance: ";
    std::cin>>balance;
    std::cout<<"Enter account type: ";
    std::cin>>type;
    };
    void displayData(){
        std::cout<<"Bank Account Details"<<std::endl;
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Account Number: "<<account_number<<std::endl;
        std::cout<<"Balance: "<<balance<<std::endl;
        std::cout<<"Type of account: "<<type<<std::endl;
    };
    BankAccount()
    {
        balance = 500;
        strcpy(name, "null");
        account_number = 0;
        strcpy(type, "current");
    }
    BankAccount(std::string name_str, int bal, long int no, std::string typ)
    {
        balance = bal;
        account_number = no;
        strcpy(name, name_str.c_str());
        strcpy(type, typ.c_str());

    }
    BankAccount(BankAccount &obj)
    {
        account_number = obj.account_number;
        balance = obj.balance;
        strcpy(type, obj.type);
        strcpy(name, obj.name);
    }
};

float BankAccount::interest = 1.2;

int main(){
    BankAccount A("HarrisonWells", 1000, 129192192, "current");
    BankAccount B(A);
    A.displayData();
    B.displayData();
    B.getData();
    BankAccount C(B);
    C.displayData();
}
