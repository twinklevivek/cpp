#include <iostream>
#include <string>

using namespace std;

// Class for individual menu items
class MenuItem {
private:
    string name;
    double price;

public:
    MenuItem(string itemName, double itemPrice) {
        name = itemName;
        price = itemPrice;
    }

    double getPrice() {
        return price;
    }

    string getName() {
        return name;
    }
};

// Class for managing the restaurant bill
class RestaurantBill {
private:
    MenuItem> items;

public:
    void addItem(MenuItem item) {
        items.push_back(item);
    }

    double getTotalBill() {
        double total = 0;
        for (const auto& item : items) {
            total +=item.getPrice();
        }
        return total;
    }
};

int main() {
    // Create some menu items
    MenuItem item1("Pizza", 200);
    MenuItem item2("Burger", 120);
    MenuItem item3("Salad", 140);

    // Create a restaurant bill
    RestaurantBill ;

    // Add items to the bill
    bill.addItem(item1);
    bill.addItem(item2);
    bill.addItem(item3);

    // Calculate and display the total bill
    double totalBill = bill.getTotalBill();
    cout << "Total Bill: " << totalBill << endl;

    return 0;
}
