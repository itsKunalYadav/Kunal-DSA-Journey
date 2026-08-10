#include <iostream>
using namespace std;

int main()
{
    int height;
    int value = 1;

    cout << "Enter height of the triangle: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "  ";
        }

        for (int j = height; j >= i; j--)
        {
            cout << value << " ";
        }

        cout << endl;
        value++;
    }

    return 0;
}
