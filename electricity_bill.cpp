#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class ElecricityBill
{
public:
    int invoice;
    int consumer_number;
    string consumer_name;
    string consumer_address;

    void displayData()
    {
        cout << "Charge:" << invoice;
        cout << "consumer number: " << consumer_number;
        cout << "consumer name: " << consumer_name;
        cout << "consumer address: " << consumer_address;
    }
    void getData()
    {
        cout << "Enter Charge:";
        cin >> invoice;
        cout << "Enter consumer number: ";
        cin >> consumer_number;
        cout << "Enter consumer name: ";
        cin >> consumer_name;
        cout << "Enter consumer address: ";
        cin >> consumer_address;
    }
    ElecricityBill()
    {
        invoice = 0;
        consumer_number = 0;
        consumer_name = "nill";
        consumer_address = "nill";
    }
    ElecricityBill(int charge, int number, string name, string address)
    {
        invoice = charge;
        consumer_number = number;
        consumer_name = name;
        consumer_address = address;
    }
};

int main()
{
    ElecricityBill E;
    E.getData();
    E.displayData();
}