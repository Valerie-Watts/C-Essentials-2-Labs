#include <iostream>


class ShopItemOrder
{
private:
    std::string name;
    double price;
    int itemsOrdered;
public:
    ShopItemOrder(std::string name, double price, int items)
    {
        this->name = name;
        if (price > 0)
        {
            this->price = price;
        }
        else {
            this->price = 0;
        }
        if (items > 0) {
            this->itemsOrdered = items;
        }
        else {
            this->itemsOrdered = 0;
        }
    };

    std::string getName() { return name; }
    double getPrice() { return price; }
    int getItemsOrdered() { return itemsOrdered; }
    double totalPrice() { return price * itemsOrdered; }

};

#include <iostream>

int main()
{
    ShopItemOrder apples("Apples", 25.5, 5);

    std::cout << "You have ordered: " << apples.getItemsOrdered() << " "
        << apples.getName() << " for $" << apples.getPrice() << " \nYour total is: $" << apples.totalPrice();
}