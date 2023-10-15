#include <iostream>
#include <string>
using namespace std;

double calculateRegularServiceBill(int minutes) {
    double baseCharge = 10.00;
    int freeMinutes = 50;
    double overageRate = 0.20;

    if (minutes <= freeMinutes)
        return baseCharge;
    else
        return baseCharge + ((minutes - freeMinutes) * overageRate);
}

double calculatePremiumServiceBill(int dayMinutes, int nightMinutes) {
     double baseCharge = 25.00;
     int dayFreeMinutes = 75;
     int nightFreeMinutes = 100;
     double dayOverageRate = 0.10;
     double nightOverageRate = 0.05;

    double totalCharge = baseCharge;

    if (dayMinutes > dayFreeMinutes)
        totalCharge += (dayMinutes - dayFreeMinutes) * dayOverageRate;

    if (nightMinutes > nightFreeMinutes)
        totalCharge += (nightMinutes - nightFreeMinutes) * nightOverageRate;

    return totalCharge;
}

int main() {
    char serviceCode;
    int minutes;
    string timeOfDay;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> timeOfDay;

    if (serviceCode == 'r' || serviceCode == 'R') {
        cout << "Enter the number of minutes the service was used: ";
        cin >> minutes;
        double amountDue = calculateRegularServiceBill(minutes);
        cout << "Type of service: Regular" << endl;
        cout << "Number of minutes used: " << minutes << endl;
        cout << "Amount due: $" << amountDue << endl;
    } else if (serviceCode == 'p' || serviceCode == 'P') {
        int dayMinutes, nightMinutes;
        cout << "Enter the number of day minutes used: ";
        cin >> dayMinutes;
        cout << "Enter the number of night minutes used: ";
        cin >> nightMinutes;
        double amountDue = calculatePremiumServiceBill(dayMinutes, nightMinutes);
        cout << "Type of service: Premium" << endl;
        cout << "Number of day minutes used: " << dayMinutes << endl;
        cout << "Number of night minutes used: " << nightMinutes << endl;
        cout << "Amount due: $" << amountDue << endl;
    } else 
      cout << "Invalid service code. Please enter 'r' for Regular or 'p' for Premium." << endl;

  
}
