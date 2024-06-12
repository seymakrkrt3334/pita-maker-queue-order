#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    int number;

public:
    Customer(string _name, int _number);

    friend ostream& operator<<(ostream& o, const Customer& m);

    


    string getname() {
        return name;
    }
    int getnumber () {
        return number;
    }
};

#endif 