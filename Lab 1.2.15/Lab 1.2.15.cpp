#include <iostream>

class Memberships
{
private:
    int id;
    std::string name;
    int validMonths;

public:
    Memberships();
    Memberships(int id, std::string name, int validMonths);
    void createID(int id) { this->id = id; };
    void extend(int monthsExtended);
    void cancel();
    void print();
    int getID() { return id; }

};

Memberships::Memberships()
{
    this->id = NULL;
    this->name = "";
    this->validMonths = 0;
}
Memberships::Memberships(int id, std::string name, int validMonths)
{
    this->id = id;
    this->name = name;
    this->validMonths = validMonths;
}

void Memberships::extend(int monthsExtended)
{
    if (monthsExtended >= 0)
    {
        this->validMonths += monthsExtended;

    }
    else {
        std::cout << "\nMust be greater than 0\n";
    }

}

void Memberships::cancel()
{
    validMonths = 0;
}

void Memberships::print()
{
    std::cout << "Member " << id << ": " << name <<
        ", subscription is valid for " << validMonths << " months\n\n";
}

int main()
{
    Memberships Gym[10];

    for (int i = 0; i < 10; i++)
    {
        Gym[i].createID(-1);
    }

    std::string command;
    int counter = 0;

    std::cout << "Welcome to the Gym Membership Managing System\n\n";


    while (command != "quit")
    {
        if (counter == 0) {
            std::cout << "\nThere are no flights registered\n\n";
        }

        std::cout << "What would you like to do?: (quit, extend, cancel, create, delete) \n\n";
        std::cin >> command;
        if (command == "create")
        {
            int id, index = -1;
            std::string name;

            std::cout << "Insert member id number: \n";
            std::cin >> id;
            std::cout << "Insert member name: \n";
            std::cin >> name;

            for (int i = 0; i < 10; i++) {
                if (Gym[i].getID() == -1) {
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                Gym[index] = Memberships(id, name, 0);
                counter++;

                std::cout << "Memeber " << id << " has been created\n";
                Gym[index].print();
            }
            else {
                std::cout << "Cannot create, system full\n";
            }
        }
        else if (command == "extend")
        {
            int months, id, index = -1; ;


            std::cout << "What member would you like to extend the membership to?\n";
            std::cin >> id;
            std::cout << "How many months would you like to extend?\n";
            std::cin >> months;
            std::cout << "\n\n";

            for (int i = 0; i < 10; i++)
            {
                if (Gym[i].getID() == id) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                Gym[index].extend(months);
                Gym[index].print();
            }
            else {
                std::cout << "Could not find member / Member not found.\n";
            }
        }
        else if (command == "cancel")
        {
            int months, id, index = -1;
            std::cout << "What member would you liek to cancel membershio from?\n";
            std::cin >> id;
            std::cout << "How many months do you want to remove?\n";
            std::cin >> months;
            std::cout << "\n\n";

            for (int i = 0; i < 10; i++) {
                if (Gym[i].getID() == id)
                {
                    index = i;
                    break;
                }
            }

            if (index != -1)
            {
                Gym[index].cancel();
                Gym[index].print();
            }
        }
        else if (command == "delete") {

            int id, index = -1;

            std::cout << "What member would you like to remove? \n";
            std::cin >> id;

            for (int i = 0; i < 10; i++) {
                if (Gym[i].getID() == id) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                Gym[index] = Memberships();
                counter--;
                std::cout << "Member " << id << " has been removed\n\n";
            }
            else
            {
                std::cout << "Member not found\n";
            }

        }
        else if (command != "quit")
        {
            std::cout << "Unknown command\n";
        }

    }
    return 0;

}