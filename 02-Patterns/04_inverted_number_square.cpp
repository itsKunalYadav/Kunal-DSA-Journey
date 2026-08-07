#include <iostream>
using namespace std;

int main()
{
    int side;

    cout << "Enter side of the square: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            cout << (side - j + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
