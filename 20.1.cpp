#include <iostream>
#include <string>
using namespace std;

//1
//class Overcoat 
//{
//private:
//    string coatType; 
//    double price;    
//
//public:
//    Overcoat(const string& type, double cost)
//        : coatType(type), price(cost) {}
//
//    bool operator==(const Overcoat& other) const 
//    {
//        return coatType == other.coatType;
//    }
//
//    Overcoat& operator=(const Overcoat& other) 
//    {
//        if (this == &other) 
//        {
//            return *this; 
//        }
//        coatType = other.coatType;
//        price = other.price;
//        return *this;
//    }
//
//    bool operator>(const Overcoat& other) const 
//    {
//        if (coatType == other.coatType) 
//        {
//            return price > other.price;
//        }
//        return false;
//    }
//
//    void display() const 
//    {
//        cout << "Coat type: " << coatType << ", Price: " << price << " UAN" << endl;
//    }
//};

//2
class Flat {
private:
    double area;  
    double price; 

public:
    Flat(double area, double price)
        : area(area), price(price) {}

    bool operator==(const Flat& other) const 
    {
        return area == other.area;
    }

    Flat& operator=(const Flat& other) 
    {
        if (this == &other)
        {
            return *this; 
        }
        area = other.area;
        price = other.price;
        return *this;
    }

    bool operator>(const Flat& other) const 
    {
        return price > other.price;
    }

    void display() const 
    {
        cout << "Flat area: " << area << " sqm, Price: " << price << " USD" << endl;
    }
};

int main() 
{
    //1
    /*Overcoat coat1("Jacket", 1500.0);
    Overcoat coat2("Coat", 2000.0);
    Overcoat coat3("Jacket", 1700.0);

    if (coat1 == coat3) 
    {
        cout << "coat1 and coat3 have the same coat type." << endl;
    }

    coat2 = coat1;
    coat2.display(); 

    if (coat3 > coat1) 
    {
        cout << "coat3 is more expensive than coat1." << endl;
    }*/

    //2
    Flat flat1(75.0, 250000.0);
    Flat flat2(80.0, 300000.0);
    Flat flat3(75.0, 275000.0);

    if (flat1 == flat3) 
    {
        cout << "flat1 and flat3 have the same area." << endl;
    }

    flat2 = flat1;
    flat2.display(); 

    if (flat2 > flat3) 
    {
        cout << "flat2 is more expensive than flat3." << endl;
    }
    else 
    {
        cout << "flat3 is more expensive than flat2." << endl;
    }
}

