#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Deklarasi Variabel untuk Menyimpan Input dari Pengguna
    string namaSiswa;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;

    // Meminta Input dari Pengguna
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Nilai Ujian: ";
    cin >> nilaiUjian;

    // Proses untuk Mendapatkan Nilai Murni dari masing-masing Nilai
    float nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
    float nilaiMurniTugas = nilaiTugas * 0.3;
    float nilaiMurniUjian = nilaiUjian * 0.5;

    // Hitung Nilai Akhir
    float nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Menentukan Nilai Huruf Berdasarkan Nilai Akhir
    string grade;
    if (nilaiAkhir > 80)
    {
        grade = "A";
    }
    else if (nilaiAkhir > 70)
    {
        grade = "B";
    }
    else if (nilaiAkhir > 56)
    {
        grade = "C";
    }
    else if (nilaiAkhir > 46)
    {
        grade = "D";
    }
    else
    {
        grade = "E";
    }
    // Menampilkan Output
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Dengan Nilai Presentasi Yang dihasilkan. " << endl;
    cout << "Nilai Keaktifan * 20%: " << nilaiMurniKeaktifan << endl;
    cout << "Nilai Tugas * 30%: " << nilaiMurniTugas << endl;
    cout << "Nilai Ujian * 50%: " << nilaiMurniUjian << endl;
    cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << "dengan grade " << grade << "." << endl;

    return 0;
}