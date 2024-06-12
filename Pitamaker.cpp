#include "Pitamaker.h"


void Pitamaker::sell_pita() {
    if (queue.empty()) {
        std::cout << "There are no customers waiting in the queue." << std::endl;
    }
    else {
        Customer* m = queue.front();
        std::cout << m->getname() << "'s pita given." << std::endl;
        queue.pop();
    }
}

void Pitamaker::get_queue(Customer* m) {
    if (m) {
        queue.push(m);
    }
}

std::ostream& operator<<(std::ostream& o, const Pitamaker& p) {
    if (p.queue.empty()) {
        o << "There are no customers waiting in the queue." << std::endl;
    }
    else {
        int size = p.queue.size();
        std::queue<Customer*> temp = p.queue;
        o << "Customers waiting in the queue:" << std::endl;
        for (int i = 1; i <= size; i++) {
            Customer* m = temp.front();
            o << i << " -> " << m->getname() << " wants to buy " << m->getnumber() << " pita(s)." << std::endl;
            temp.pop();
        }
    }
    return o;
}
