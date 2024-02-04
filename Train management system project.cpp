#include <iostream>
using namespace std;
struct Passenger {
    string name;
    int seatNumber;
};

class Train {
private:
    int* seats;
    int maxSeats;
    int numSeats;
    Passenger* bookingRequests;
    int maxBookingRequests;
    int numBookingRequests;

public:
    Train(int maxSeats, int maxBookingRequests) {
        this->maxSeats = maxSeats;
        this->maxBookingRequests = maxBookingRequests;
        seats = new int[maxSeats];
        numSeats = 0;
        bookingRequests = new Passenger[maxBookingRequests];
        numBookingRequests = 0;
    }

    ~Train() {
        delete[] seats;
        delete[] bookingRequests;
    }

    void addSeat() {
        if (numSeats < maxSeats) {
            seats[numSeats] = numSeats + 1;
            numSeats++;
            sortSeats();
            cout << "Seat " << numSeats << " added successfully.\n";
        } else {
            cout << "Cannot add seat. Maximum capacity reached.\n";
        }
    }

    void bookTicket(const Passenger& passenger) {
        if (numBookingRequests < maxBookingRequests) {
            bookingRequests[numBookingRequests++] = passenger;
            cout << "Ticket booked for " << passenger.name << " successfully.\n";
        } else {
            cout << "Cannot book ticket. Maximum booking capacity reached.\n";
        }
    }

    void cancelTicket(const string& passengerName) {
        for (int i = 0; i < numBookingRequests; i++) {
            if (bookingRequests[i].name == passengerName) {
                int seatNumber = bookingRequests[i].seatNumber;
                shiftBookingRequests(i);
                seats[numSeats++] = seatNumber;
                sortSeats();
                cout << "Ticket canceled for " << passengerName << " successfully.\n";
                return;
            }
        }
        cout << "Ticket not found for " << passengerName << ".\n";
    }

    void allocateSeats() {
    for (int i = 0; i < numBookingRequests; i++) {
        Passenger& passenger = bookingRequests[i];  // Use reference to modify seatNumber

        if (numSeats == 0) {
            cout << "No seats available. Booking for " << passenger.name << " failed.\n";
            continue;
        }

        int allocatedSeat = seats[--numSeats];

        passenger.seatNumber = allocatedSeat;

        cout << "Booking confirmed for " << passenger.name << ". Seat Number: " << allocatedSeat << "\n";
    }
}


    void displaySeats() {
        cout << "Available Seats: ";
        for (int i = 0; i < numSeats; i++) {
            cout << seats[i] << " ";
        }
        cout << "\n";
    }

    void displayBookedTickets() {
    cout << "Booked Tickets:\n";
    for (int i = 0; i < numBookingRequests; i++) {
        Passenger passenger = bookingRequests[i];
        cout << "Name: " << passenger.name << ", Seat Number: ";
        if (passenger.seatNumber != -1) {
            cout << passenger.seatNumber;
        } else {
            cout << "Not allocated";
        }
        cout << "\n";
    }
}


private:
    void sortSeats() {
        for (int i = 0; i < numSeats - 1; i++) {
            for (int j = 0; j < numSeats - i - 1; j++) {
                if (seats[j] > seats[j + 1]) {
                    int temp = seats[j];
                    seats[j] = seats[j + 1];
                    seats[j + 1] = temp;
                }
            }
        }
    }

    void shiftBookingRequests(int index) {
        for (int i = index; i < numBookingRequests - 1; i++) {
            bookingRequests[i] = bookingRequests[i + 1];
        }
        numBookingRequests--;
    }
};

int main() {
    int maxSeats;
    cout << "Enter the maximum number of seats: ";
    cin >> maxSeats;

    const int maxBookingRequests = 5;
    Train train(maxSeats, maxBookingRequests);

    int choice;

    do {
        cout << "\n=======================";
        cout << "\nTrain Ticket Reservation";
        cout << "\n=======================\n";
        cout << "1. Add Seat\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Allocate Seats\n";
        cout << "5. Display Available Seats\n";
        cout << "6. Display Booked Tickets\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                train.addSeat();
                break;
            case 2: {
                string name;
                cout << "Enter passenger name: ";
                cin.ignore();
                getline(cin, name);
                Passenger passenger = {name, -1};
                train.bookTicket(passenger);
                break;
            }
            case 3: {
                string name;
                cout << "Enter passenger name: ";
                cin.ignore();
                getline(cin, name);
                train.cancelTicket(name);
                break;
            }
            case 4:
                train.allocateSeats();
                break;
            case 5:
                train.displaySeats();
                break;
            case 6:
                train.displayBookedTickets();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 7);

    return 0;
}

