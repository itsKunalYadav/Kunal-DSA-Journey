#include <iostream>
using namespace std;

int main()
{
    int height;
    char ch;

    cout << "Enter height of the triangle: ";
    cin >> height;

    cout << "Enter the symbol: ";
    cin >> ch;

    for (int i = 1; i <= height; i++)
    {
        for (int k = 1; k <= height - i; k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}
