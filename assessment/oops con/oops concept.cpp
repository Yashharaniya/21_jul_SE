#include <iostream>
using namespace std;

class Food {
private:
    string name;
    double price;

public:
    Food(string n, double p) {
        name = n;
        price = p;
    }

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }
};

class Order {
private:
    string customerName;
    double totalCost;

public:
    Order(string name) {
        customerName = name;
        totalCost = 0.0;
    }

    void addFood(Food food, int quantity) {
        double cost = food.getPrice() * quantity;
        totalCost += cost;
    }

    void generateBill() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Total Cost: $" << totalCost << endl;
    }
};

int main() {
    string customerName;
    cout << "Enter your name: ";
    cin >> customerName;

    Order order(customerName);

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Pizza - $10\n";
        cout << "2. Burger - $5\n";
        cout << "3. Pasta - $8\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int quantity;
                cout << "Enter the quantity: ";
                cin >> quantity;
                Food pizza("Pizza", 10.0);
                order.addFood(pizza, quantity);
                break;
            }
            case 2: {
                int quantity;
                cout << "Enter the quantity: ";
                cin >> quantity;
                Food burger("Burger", 5.0);
                order.addFood(burger, quantity);
                break;
            }
            case 3: {
                int quantity;
                cout << "Enter the quantity: ";
                cin >> quantity;
                Food pasta("Pasta", 8.0);
                order.addFood(pasta, quantity);
                break;
            }
            case 4:
                // Exit the loop and generate the bill
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    order.generateBill();

    return 0;
}
