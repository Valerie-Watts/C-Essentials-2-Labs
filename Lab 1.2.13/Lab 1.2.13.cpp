#include <iostream>

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool canceReservations(int number_ob_seats);
private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    if (capacity > 0)
    {
        this->capacity = capacity;
    }
    else
    {
        this->capacity = 0;
    }
    if (reserved > 0)
    {
        this->reserved = reserved;
    }
    else
    {
        this->reserved = 0;
    }

    if (this->reserved > (105 * this->capacity) / 100)
    {
        this->reserved = (105 * this->capacity) / 100;
    }

}

bool FlightBooking::reserveSeats(int number_ob_seats)
{
    if (number_ob_seats <= 0 || reserved + number_ob_seats > (105 * capacity) / 100)
    {
        return false;
    }
    else {
        reserved = reserved + number_ob_seats;
        return true;
    }
    // try to add reservations and return 'true' on success
    // keep the limits in mind

}

bool FlightBooking::canceReservations(int number_ob_seats)
{
    if (number_ob_seats <= 0 || reserved - number_ob_seats < 0) {

        return false;
    }
    else {
        reserved = reserved - number_ob_seats;
        return true;
    }
    // try to cancel reservations and return 'true' on success
    // keep the limits in mind

}

void FlightBooking::printStatus()
{
    std::cout << "Flight " << id << ": " << reserved <<
        "/" << capacity << "(" << (100 * reserved) / capacity
        << "%) seats reserved\n\n";
}


int main()
{
    int reserved = 0;
    int capacity = 0;
    std::string command;

    std::cout << "Provide flight capacity: ";
    std::cin >> capacity;

    std::cout << "Provide number of reserved seats: ";
    std::cin >> reserved;

    FlightBooking booking(1, capacity, reserved);


    while (command != "quit")
    {
        booking.printStatus();
        std::cout << "What would you like to do?: (quit, add, cancel) \n\n";
        std::cin >> command;

        if (command == "add")
        {
            int seats;
            std::cout << "How many seats would you like to add?\n";
            std::cin >> seats;
            std::cout << "\n\n";


            if (!booking.reserveSeats(seats)) {
                std::cout << "Cannot perform this operation\n";
            }
        }
        else if (command == "cancel")
        {
            int seats;
            std::cout << "How many seats would you like to remove?\n";
            std::cin >> seats;
            std::cout << "\n\n";

            if (!booking.canceReservations(seats))
            {
                std::cout << "Cannot perform this operation\n";
            }
        }
        else if (command != "quit")
        {
            std::cout << "Unknown command";
        }

        // handle the command
    }

    return 0;
}