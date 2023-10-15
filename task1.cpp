#include <iostream>
using namespace std;

// Declare the function prototype
string decideActivity(string, string);

int main()
{
    string a, b;
    cout << "Enter temperature (warm or cold): ";
    cin >> a;
    cout << "Enter humidity (dry or humid): ";
    cin >> b;

    cout << "Recommended activity: " << decideActivity(a, b) << endl;

 
}

string decideActivity(string tempe, string humidity)
{
    
    if (tempe == "warm" && humidity == "dry")
        return "Play tennis";
    else if (tempe == "warm" && humidity == "humid")
        return "Swim";
    else if (tempe == "cold" && humidity == "dry")
        return "Play basketball";
    else if (tempe == "cold" && humidity == "humid")
        return "Watch TV";
    else
        return "Invalid input, please try again.";
}
