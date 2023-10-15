#include <iostream>
using namespace std;

int main()
{
    string yearType;
    int holidays, hometownWeekends;
    int totalWeekends = 48;
    int totalHolidays = 365;
    cout << "Enter the year type (leap/normal): ";
    cin >> yearType;
    cout << "Enter the count of holidays: ";
    cin >> holidays;
    cout << "Enter the count of weekends Vladimir travels to his hometown: ";
    cin >> hometownWeekends;

    int volleyballCount = 0;

    if (yearType == "normal")
    {

        volleyballCount = totalWeekends - hometownWeekends;

        volleyballCount = volleyballCount + ( holidays)* 2/ 3;
    }

    else if (yearType == "leap")
    {

        volleyballCount = totalWeekends - hometownWeekends;

        volleyballCount = volleyballCount + (holidays)*2 / 3;

        volleyballCount = (volleyballCount * 1.15);
    }

    cout << "Vladimir played volleyball " << volleyballCount << " times this year." << endl;

    return 0;
}
