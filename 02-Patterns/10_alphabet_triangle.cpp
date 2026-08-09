#include <iostream>
using namespace std;

int main()
{
    int height;
    char ch = 'A';

    cout << "Enter height of the triangle: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
        ch++;
    }

    return 0;
}
