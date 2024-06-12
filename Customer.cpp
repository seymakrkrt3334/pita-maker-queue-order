
#include "Customer.h"


using namespace std;

Customer::Customer(string _name,int _number):name(_name),number(_number){}

ostream& operator<<(ostream& o,const Customer& m) {
	o << m.name << " " << " want to take"<<m.number<<"pita";
	return o;
}




