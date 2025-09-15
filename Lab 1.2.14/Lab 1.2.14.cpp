#include <iostream>

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    FlightBooking();
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool canceReservations(int number_ob_seats);
    int getID() { return id; }
    void createID(int id);

private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking() {
    this->id = -1;
    this->capacity = 0;
    this->reserved = 0;
}

void FlightBooking::createID(int ID)
{
    this->id = ID;

}

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
    FlightBooking booking[10];

    for (int i = 0; i < 10; i++)
    {
        booking[i].createID(-1);
    }

    std::string command;
    int counter = 0;

    std::cout << "Welcome to the Flight Booking System\n\n";


    while (command != "quit")
    {
        if (counter == 0) {
            std::cout << "\nThere are no flights registered\n\n";
        }

        std::cout << "What would you like to do?: (quit, add, cancel, create, delete) \n\n";
        std::cin >> command;
        if (command == "create")
        {
            int id, capacity, index = -1;

            std::cout << "Insert flight number: \n";
            std::cin >> id;
            std::cout << "Insert flight capacity: \n";
            std::cin >> capacity;

            for (int i = 0; i < 10; i++) {
                if (booking[i].getID() == -1) {
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                booking[index] = FlightBooking(id, capacity, 0);
                counter++;

                std::cout << "Flight " << id << " has been created\n";
                booking[index].printStatus();
            }
            else {
                std::cout << "Cannot create, system full\n";
            }
        }
        else if (command == "add")
        {
            int seats, id, index = -1; ;


            std::cout << "What flight would like to add seats?\n";
            std::cin >> id;
            std::cout << "How many reservations would you like to add?\n";
            std::cin >> seats;
            std::cout << "\n\n";

            for (int i = 0; i < 10; i++)
            {
                if (booking[i].getID() == id) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                booking[index].reserveSeats(seats);
                booking[index].printStatus();
            }
            else {
                std::cout << "Flight does not exist / Could not find flight\n";
            }
        }
        else if (command == "cancel")
        {
            int seats, id, index = -1;
            std::cout << "What flight would like to remove seats from?\n";
            std::cin >> id;
            std::cout << "How many reservations would you like to remove?\n";
            std::cin >> seats;
            std::cout << "\n\n";

            for (int i = 0; i < 10; i++) {
                if (booking[i].getID() == id)
                {
                    index = i;
                    break;
                }
            }

            if (index != -1)
            {
                booking[index].canceReservations(seats);
                booking[index].printStatus();
            }
        }
        else if (command == "delete") {

            int id, index = -1;

            std::cout << "What flight would you like to remove? \n";
            std::cin >> id;

            for (int i = 0; i < 10; i++) {
                if (booking[i].getID() == id) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                booking[index] = FlightBooking();
                counter--;
                std::cout << "Flight " << id << " has been removed\n\n";
            }
            else
            {
                std::cout << "Flight not found\n";
            }

        }
        else if (command != "quit")
        {
            std::cout << "Unknown command\n";
        }

    }
    return 0;
}