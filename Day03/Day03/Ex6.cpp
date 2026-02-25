#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Customer
{
    int id;
    string name;

public:
    Customer(int i, string n)
    {
        id = i;
        name = n;
    }

    void writeToFile(ofstream& out)
    {
        out << "Customer ID: " << id
            << ", Name: " << name << endl;
    }
};

class Item
{
    int itemId;
    string itemName;
    double price;

public:
    Item(int id, string name, double p)
    {
        itemId = id;
        itemName = name;
        price = p;
    }

    void writeToFile(ofstream& out) 
    {
        out << "Item ID: " << itemId
            << ", Name: " << itemName
            << ", Price: " << price << endl;
    }
};

template <class T>
class DataManager
{
public:
    void saveToFile(T obj, string filename)
    {
        ofstream out(filename, ios::app);

        if (out.is_open())
        {
            obj.writeToFile(out);
            out.close();
        }
        else
        {
            cout << "File could not be opened.\n";
        }
    }
};

int main()
{
    DataManager<Customer> customerManager;
    DataManager<Item> itemManager;

    Customer c1(1, "Reema");
    Item i1(101, "Laptop", 55000);

    customerManager.saveToFile(c1, "customer.txt");
    itemManager.saveToFile(i1, "item.txt");

    return 0;
}