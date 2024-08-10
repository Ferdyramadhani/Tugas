#include <iostream>

using namespace std;

int main()
{
    int jumlah_deret = 10;
    int total = 0;
    int bilangan = 1;

    for (int i = 0; i < jumlah_deret; ++i)
    {
        if (i > 0)
            cout << " + ";
        cout << bilangan;
        total += bilangan;
        bilangan += 2;
    }

    cout << " = " << total << endl;

    return 0;
}