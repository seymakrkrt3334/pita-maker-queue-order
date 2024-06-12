
#ifndef PÝTAMAKER_H
#define PÝTAMAKER_H
#include "Customer.h"
#include<iostream>
#include<queue>
using namespace std;

class Pitamaker {
	std::queue<Customer*>queue;
public:
	void sell_pita();
	
	
	void get_queue(Customer* m);

	friend ostream& operator<<(std::ostream& o, const Pitamaker& p);

};
#endif 
