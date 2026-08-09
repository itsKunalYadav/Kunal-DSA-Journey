#include <iostream>
using namespace std;

int main()
{
    int height;
    char value;
    char ch = 'A';

    cout << "Enter height of the triangle: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        value = ch + height - i;

        for (int j = 1; j <= i; j++)
        {
            cout << value << " ";
            value++;
        }

        cout << endl;
    }

    return 0;
}
