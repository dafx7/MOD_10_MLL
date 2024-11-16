#include <iostream>
#include "flight.h"

using namespace std;

int main() {
    ListJadwal L;
    int n;

    createListJadwal_103012300198(L);

    cout << "Masukkan jumlah jadwal penerbangan: ";
    cin >> n;

    // Input jadwal penerbangan sebanyak n kali
    for (int i = 0; i < n; ++i) {
        infotype J;
        cout << "Masukkan Kode: ";
        cin >> J.Kode;
        cout << "Masukkan Jenis: ";
        cin >> J.Jenis;
        cin.ignore();
        cout << "Masukkan Tanggal: ";
        getline(cin, J.Tanggal);
        cout << "Masukkan Waktu: ";
        cin >> J.Waktu;
        cout << "Masukkan Asal: ";
        cin >> J.Asal;
        cout << "Masukkan Tujuan: ";
        cin >> J.Tujuan;
        cout << "Masukkan Kapasitas: ";
        cin >> J.Kapasitas;

        adr_jadwalP P = createElemenJadwal_103012300198(J);
        InsertLastJ_103012300198(L, P);
        cout << endl;
    }

    // Menampilkan jadwal penerbangan
    cout << "\nDaftar Jadwal Penerbangan:" << endl;
    ShowJadwal_103012300198(L);

    // delete Jadwal penerbangan
    cout << "\nMenghapus jadwal pertama.." << endl;
    adr_jadwalP tmp;
    DeleteFirstJ_103012300198(L, tmp);

    cout << "\nDaftar Jadwal Penerbangan Setelah Dihapus: " << endl;
    ShowJadwal_103012300198(L);

    // Cari jadwal penerbangan dari surabaya ke malang tanggal 9 Desember 2022
    adr_jadwalP cari = SearchJ_103012300198(L, "surabaya", "malang", "9 desember 2022");
    if (cari == NULL)
    {
        cout << "Jadwal tidak ditemukan." << endl;
    }
    else
    {
        cout << "Jadwal ditemukan." << endl;
        cout << "Kode: " << info(cari).Kode << endl;
    }
    return 0;
}
