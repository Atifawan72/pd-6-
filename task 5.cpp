#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit;
    string day;
    double quantity;
    double price = 0;

    cout << "Enter the fruit name: ";
    cin >> fruit;

    cout << "Enter the day of the week(e.g., Monday, Sunday): ";
    cin >> day;

    cout << "Enter the quantity: ";
    cin >> quantity;

    // Check the day of the week and set the prices accordingly
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday") {
        if (fruit == "banana") price = 2.50;
        else if (fruit == "apple") price = 1.20;
        else if (fruit == "orange") price = 0.85;
        else if (fruit == "grapefruit") price = 1.45;
        else if (fruit == "kiwi") price = 2.70;
        else if (fruit == "pineapple") price = 5.50;
        else if (fruit == "grapes") price = 3.85;
        else cout << "error" << endl;
    }
    else if (day == "saturday" || day == "sunday") {
        if (fruit == "banana") price = 2.70;
        else if (fruit == "apple") price = 1.25;
        else if (fruit == "orange") price = 0.90;
        else if (fruit == "grapefruit") price = 1.60;
        else if (fruit == "kiwi") price = 3.00;
        else if (fruit == "pineapple") price = 5.60;
        else if (fruit == "grapes") price = 4.20;
        else cout << "error" << endl;
    }
    else {
        cout << "error" << endl;
    }

    if (price > 0) {
        double totalPrice = quantity * price;
        cout<< totalPrice << endl;
    }

    return 0;
}
