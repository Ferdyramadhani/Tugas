#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;

    // Deklarasi variabel
    string nim_siswa, nama_siswa;
    float nilai_tugas1, nilai_tugas2, nilai_tugas3, nilai_rata_rata;

    // Input data dari pengguna
    cout << "Nim Siswa: ";
    getline(cin, nim_siswa);
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Tugas I: ";
    cin >> nilai_tugas1;
    cout << "Nilai Tugas II: ";
    cin >> nilai_tugas2;
    cout << "Nilai Tugas III: ";
    cin >> nilai_tugas3;

    // Menghitung nilai rata-rata
    nilai_rata_rata = (nilai_tugas1 + nilai_tugas2 + nilai_tugas3) / 3;
    
    // Tampilan output
    cout << "\nLayar Keluaran\n";
    cout << "Nim " << nim_siswa << " Siswa yang bernama " << nama_siswa << endl;
    cout << "Memperoleh nilai rata-rata " << nilai_rata_rata << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}