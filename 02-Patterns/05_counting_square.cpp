#include <iostream>
using namespace std;

int main()
{
    int side;
    int counter = 1;

    cout << "Enter side of the square: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }

    return 0;
}
