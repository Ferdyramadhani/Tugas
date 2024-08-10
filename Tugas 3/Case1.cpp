#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Deklarasi
    string namaSiswa;
    float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

    // Meminta Input
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Nilai Pertandingan I: ";
    cin >> nilaiPertandingan1;
    cout << "Nilai Pertandingan II: ";
    cin >> nilaiPertandingan2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilaiPertandingan3;

    // Menghitung Nilai Rata-Rata
    float nilaiRataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

    // Menentukan Juara
    string juara;
    if (nilaiRataRata > 80)
    {
        juara = "Juara I";
    }
    else if (nilaiRataRata > 75)
    {
        juara = "Juara II";
    }
    else if (nilaiRataRata > 65)
    {
        juara = "Juara III";
    }
    else
    {
        juara = "Tidak mendapat juara";
    }
    // Menampilkan Output
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << nilaiRataRata << "dan menjadi " << juara << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;
}