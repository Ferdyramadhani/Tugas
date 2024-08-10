#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan Selection Sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "\nArray sebelum diurutkan: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}