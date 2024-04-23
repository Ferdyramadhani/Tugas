#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string nama_siswa;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;
    float nilai_murni_keaktifan, nilai_murni_tugas, nilai_murni_ujian, nilai_akhir;

    // Tampilan untuk input
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilai_tugas;
    cout << "Nilai Ujian: ";
    cin >> nilai_ujian;

    // Menghitung nilai murni dari masing-masing komponen
    nilai_murni_keaktifan = nilai_keaktifan * 0.2;
    nilai_murni_tugas = nilai_tugas * 0.5;
    nilai_murni_ujian = nilai_ujian * 0.3;

    // Menghitung nilai akhir
    nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;

    // Tampilkan hasil
    cout << "\nLayar Keluaran\n";
    cout << "Siswa yang bernama " << nama_siswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20% : " << nilai_murni_keaktifan << endl;
    cout << "Nilai Tugas * 50% : " << nilai_murni_tugas << endl;
    cout << "Nilai Ujian * 30% : " << nilai_murni_ujian << endl;
    cout << "Jadi Siswa yang bernama " << nama_siswa << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;

    return 0;
}
