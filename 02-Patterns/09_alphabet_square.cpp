#include <iostream>
using namespace std;

int main()
{
    int side;
    char ch = 'A';

    cout << "Enter side of the square: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
        ch++;
    }

    return 0;
}
