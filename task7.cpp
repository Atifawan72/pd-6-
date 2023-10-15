#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMin, int shour, int smin);
void time(int examHour, int examMin, int shour, int smin);
main()
{
    int examHour, examMin, shour, smin;
    cout << "Enter Exam Starting Time (hours): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minuteas): ";
    cin >> examMin;
    cout << "Enter Student hour of arrival: ";
    cin >> shour;
    cout << "Enter Student minutes of arrival: ";
    cin >> smin;
    cout << checkStudentStatus(examHour, examMin, shour, smin);
    cout << endl;
    time(examHour, examMin, shour, smin);
}
string checkStudentStatus(int examHour, int examMin, int shour, int smin)
{
    int examTime, studentTime;
    examTime = examHour * 60 + examMin;
    studentTime = shour * 60 + smin;
    if ((studentTime >= (examTime - 30) || studentTime == examTime) && studentTime <= examTime)
    {
        return "On time";
    }
    if (studentTime > examTime)
    {
        return "Late";
    }
    if (studentTime < (examTime - 30))
    {
        return "Early";
    }
}
void time(int examHour, int examMin, int shour, int smin)
{
    int examTime, studentTime, finalTime, mins, hurs;
    examTime = examHour * 60 + examMin;
    studentTime = shour * 60 + smin;
    if (examTime < studentTime)
    {
        finalTime = studentTime - examTime;
        mins = finalTime % 60;
        hurs = finalTime / 60;
        if (finalTime < 60)
        {
            cout << mins << " minutes after the start";
        }
        else
        {
            cout << hurs << ":" << mins << " hours after the start";
        }
    }
    if (examTime > studentTime)
    {
        finalTime = examTime - studentTime;
        mins = finalTime % 60;
        hurs = finalTime / 60;
        if (finalTime < 60)
        {
            cout << mins << " minutes before the start";
        }
        else
        {
            cout << hurs << ":" << mins << " hours before the start";
        }
    }
}