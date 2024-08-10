#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Deklarasi variabel untuk menyimpan input dari pengguna
    string namaKaryawan, pendidikan;
    int golonganJabatan, jumlahJamKerja;

    // Deklarasi variabel konstanta gaji pokok dan tarif lembur per jam
    const float gajiPokok = 300000;
    const float tarifLemburPerJam = 3500;

    // Meminta input dari pengguna
    cout << "PROGRAM HITUNG GAJI KARYAWAN KONTRAK" << endl;
    cout << "Nama Karyawan: ";
    getline(cin, namaKaryawan);
    cout << "Golongan Jabatan : ";
    cin >> golonganJabatan;
    cout << "Pendidikan : ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja: ";
    cin >> jumlahJamKerja;

    // Hitung tunjangan jabatan
    float tunjanganJabatan;
    if (golonganJabatan == 1)
        tunjanganJabatan = 0.05 * gajiPokok;
    else if (golonganJabatan == 2)
        tunjanganJabatan = 0.10 * gajiPokok;
    else if (golonganJabatan == 3)
        tunjanganJabatan = 0.15 * gajiPokok;
    else
        tunjanganJabatan = 0;

    // Hitung tunjangan pendidikan
    float tunjanganPendidikan;
    if (pendidikan == "SMA")
        tunjanganPendidikan = 0.025 * gajiPokok;
    else if (pendidikan == "D1")
        tunjanganPendidikan = 0.05 * gajiPokok;
    else if (pendidikan == "D3")
        tunjanganPendidikan = 0.20 * gajiPokok;
    else if (pendidikan == "S1")
        tunjanganPendidikan = 0.30 * gajiPokok;
    else
        tunjanganPendidikan = 0;

    // Hitung honor lembur
    float honorLembur = 0;
    if (jumlahJamKerja > 8)
        honorLembur = (jumlahJamKerja - 8) * tarifLemburPerJam;

    // Hitung total gaji
    float honor_diterima = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

    // Tampilkan output
    cout << "Karyawan yang bernama " << namaKaryawan << endl;
    cout << "Honor yang diiterima Rp " << honor_diterima << endl;
    cout << "Tunjangan Jabatan Rp " << tunjanganJabatan << endl;
    cout << "Tunjangan Pendidikan Rp " << tunjanganPendidikan << endl;
    cout << "Honor Lembur Rp " << honorLembur << endl;

    return 0;
}