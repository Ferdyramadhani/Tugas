#include <iostream>
using namespace std;

int main()
{
    int total = 0;

    for (int i = 1; i <= 10; i++)
    {

        int bilangan_genap = i * 2;
        total += bilangan_genap;
        cout << bilangan_genap;
        if (i < 10)
        {
            cout << " + ";
        }
    }

    cout << " = " << total << endl;

    return 0;
}