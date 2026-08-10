#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of the triangle: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        int value = 1;

        for (int k = 1; k <= i; k++)
        {
            cout << "  ";
        }

        for (int j = height; j >= i; j--)
        {
            cout << value << " ";
            value++;
        }

        cout << endl;
    }

    return 0;
}
