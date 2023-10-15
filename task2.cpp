#include <iostream>
using namespace std;
float calculateAverage(float, float, float, float, float);
string calculateGrade(float);
int main()
{
    string Grade, name;
    float englih, math, social, che, biology;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for English: ";
    cin >> englih;

    cout << "Enter marks for Maths: ";
    cin >> math;

    cout << "Enter marks for Chemistry: ";
    cin >> che;

    cout << "Enter marks for Social Science: ";
    cin >> social;

    cout << "Enter marks for Biology: ";
    cin >> biology;

    float average = calculateAverage(englih, math, social, che, biology);
    string grade = calculateGrade(average);

    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;
}

float calculateAverage(float E, float M, float SS, float c, float Bio)
{
    float sum;
    sum = ((E + M + SS + c + Bio) / 500) * 100;
    return sum;
}

string calculateGrade(float sum)
{
    if (sum >= 90 && sum <= 100)
        return "A+";
    else if (sum >= 80)
        return "A";
    else if (sum >= 70)
        return "B+";
    else if (sum >= 60)
        return "B";
    else if (sum >= 50)
        return "C";
    else if (sum >= 40)
        return "D";
    else
        return "F";
}
