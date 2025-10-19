#include <iostream>
using namespace std;

int main(){
    int choice, seats, seatssold;
    seats = 500;
    seatssold = 0;
    double totalAmount = 0.0;

    while (true) {
        cout << "1. Purchase Ticket(s)" << endl;
        cout << "2. Display Available Seats and Total Amount" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        
        if (choice == 1) {
            if (seatssold >= seats){
                 cout << "All seats are sold out!" << endl;
                continue;
            }
            int ticketcount;

            cout << "Enter number of tickets to purchase: ";
            cin >> ticketcount;
            
            if (ticketcount <= 0) {
                cout << "Invalid ticket count!" << endl;
                continue;
            }
            if (seatssold + ticketcount > seats) {
                cout << "Only " << (seats - seatssold) << " seats are available." << endl;
                continue;
            }
            char type;

            cout << "Are you a Sophomore (S) or Junior (J)? ";
            cin >> type;

            double pricePerTicket;

             if (type == 'S' || type == 's') {
                pricePerTicket = 100;
            } else if (type == 'J' || type == 'j') {
                pricePerTicket = 50;
            } else {
                cout << "Invalid type entered!" << endl;
                continue;
            }
            double totalPrice = ticketcount * pricePerTicket;

            if (ticketcount > 3) {
                totalPrice *= 0.8; 
            }
            seatssold += ticketcount;
            totalAmount += totalPrice;

             cout << "Purchase successful. Total price: PKR " << totalPrice << endl;

        } else if (choice == 2) {
            cout << "Available seats: " << (seats - seatssold) << endl;
            cout << "Total amount collected: PKR " << totalAmount << endl;

        } else if (choice == 3) {
            cout << "Terminating the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }
    }

    return 0;
}
