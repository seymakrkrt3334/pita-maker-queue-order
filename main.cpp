#include<iostream>
#include<queue>
#include "Customer.h"
#include"Pitamaker.h"
using namespace std;

int main() {
	Pitamaker pitamaker;
	Customer m1("Seda", 4);
	Customer m2("Merve", 3);
	Customer m3("Kevser", 2);
	Customer m4("Alperen", 6);
	Customer m5("Kerem", 9);


	pitamaker.get_queue(&m1);
	pitamaker.get_queue(&m2);
	pitamaker.get_queue(&m3);
	pitamaker.get_queue(&m4);

	cout << pitamaker;
	pitamaker.sell_pita();
	cout << pitamaker;
	pitamaker.sell_pita();
	cout << pitamaker;
	pitamaker.sell_pita();
	cout << pitamaker;
	pitamaker.get_queue(&m5);
	cout << pitamaker;
	pitamaker.sell_pita();
	pitamaker.sell_pita();
	cout << pitamaker;



	

	return 0;

}
