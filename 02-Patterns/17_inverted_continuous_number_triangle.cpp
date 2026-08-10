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
        for (int k = 1; k <= height - i; k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << value << " ";
            value++;
        }

        cout << endl;
    }

    return 0;
}
