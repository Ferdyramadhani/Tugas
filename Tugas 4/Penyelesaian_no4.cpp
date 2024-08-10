#include <iostream>
using namespace std;

int main()
{
    int product = 1;
    for (int a = 1; a <= 9; a += 2)
    {
        product *= a;
        cout << "1";
        for (int b = 3; b <= a; b += 2)
        {
            cout << " * " << b;
        }
        cout << " = " << product << endl;
    }
    return 0;
}