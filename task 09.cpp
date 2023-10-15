#include <iostream>
#include <string>
using namespace std;

string position(int x, int y, int h);

int main() 
{
    int height, x, y;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    cout << position(x, y, height) << endl;

    return 0;
}

string position(int x, int y, int h) {
    if (x == 0 && y == 0)
        return "border";
    else if (x == 0 && y == h)
        return "border";
    else if (x == h && y == h)
        return "border";
    else if (x == 3 * h && y < h)
        return "inside";
    else if (x == 2 * h && y == 0)
        return "border";
    else if (x == 3 * h && y == h)
        return "border";
    else if (x == 2 * h && y == 3 * h)
        return "border";
    else if (x == h && y == 3 * h)
        return "border";
    else if (x == h && y == 4 * h)
        return "border";
    else if (x == 2 * h && y == 2 * h)
        return "border";
   else if (x == 3 * h && y == 0)
        return "border";
    else if (x == 2 * h && y == 4 * h)
        return "border";
   else if (x == h && y == 0)
        return "border";
    else if ((x < 2 * h && x > h) && y < 4 * h)
        return "inside";
    else
        return "outside";
}
