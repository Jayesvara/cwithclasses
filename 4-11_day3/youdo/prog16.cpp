#include <iostream>
using namespace std;

int main() {
    int adult_ticket_price = 120;
    int child_ticket_price = 60;

    int num_adults = 4;
    int num_children = 3;

    int total_amount = (adult_ticket_price * num_adults) + (child_ticket_price * num_children);

    cout << "Total amount: " << total_amount << " rupees" << endl;

    return 0;
}
