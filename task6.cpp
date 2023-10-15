#include <iostream>
using namespace std;
float studio(string, int);
float apartment(string, int);
main()
{
    string mOnth;
    int stays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> mOnth;
    cout << "Enter the number of stays: ";
    cin >> stays;
    cout << "Apartment: " << apartment(mOnth, stays) << endl;
    cout << "Studio: " << studio(mOnth, stays);
}

float studio(string month, int days)
{
    float price;
    if (month == "may" || month == "october")
    {
        price = (days * 50);
    }
    else if (month == "may" || month == "october" && days > 7)
    {
        price = days * 50;
        price = price - (price * 0.05);
        
    }
    else if (month == "may" || month == "october" && days > 14)
    {
        price = days * 50;
        price = price - (price * 0.3);
        
    }
    else if (month == "june " || month == "september")
    {
        price = days * 75.20;
     
    }
    else if (month == "june" || month == "september" && days > 14)
    {
        price = price * 75.20;
        price = price - (price * 0.2);
       
    }
    if (month == "july" || month == "august")
    {
        price = days * 76;
        
    }
    return price;
}
float apartment(string month, int days)
{
    float price;
    if (days > 14)
    {
        days = days * 0.9;
    }
    if (month == "may" || month == "october")
    {
        price = (days * 65);
        
    }

    else if (month == "june " || month == "september")
    {
        price = days * 68.70;
        
    }
    if (month == "july" || month == "august")
    {
        price = days * 77;
        
    }
    return price;
}
