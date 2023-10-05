#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int nrp;
    string tanggal_lahir;
    string informasi;
};

map<string, Mahasiswa> Data;

void tampilkanData() {
    if (Data.empty()) {
        cout << "Data kosong." << endl;
    } else {
        cout << "Data yang tersimpan:" << endl;
        for (const auto& entry : Data) {
            cout << "Nama: " << entry.first << endl;
            cout << "NRP: " << entry.second.nrp << endl;
            cout << "Tanggal Lahir: " << entry.second.tanggal_lahir << endl;
            cout << "Informasi Tambahan: " << entry.second.informasi << endl;
            cout << endl;
        }
    }
}

void tambahData() {
    string nama, informasi, tanggal_lahir;
    int nrp;
    cout << "Masukkan nama: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan NRP: ";
    cin >> nrp;
    cin.ignore();
    cout << "Masukkan Tanggal Lahir: ";
    getline(cin, tanggal_lahir);
    cout << "Masukkan informasi tambahan: ";
    getline(cin, informasi);

    if (Data.find(nama) == Data.end()) {
        Mahasiswa m;
        m.nama = nama;
        m.nrp = nrp;
        m.tanggal_lahir = tanggal_lahir;
        m.informasi = informasi;
        Data[nama] = m;
        cout << "Data berhasil ditambahkan." << endl;
    } else {
        cout << "Data dengan nama tersebut sudah ada dalam Data." << endl;
    }
}

void hapusData() {
    string nama;
    cout << "Masukkan nama yang akan dihapus: ";
    cin.ignore();
    getline(cin, nama);

    if (Data.find(nama) != Data.end()) {
        Data.erase(nama);
        cout << "Data berhasil dihapus." << endl;
    } else {
        cout << "Data dengan nama tersebut tidak ditemukan dalam Data." << endl;
    }
}


int main() {
    while (true) {
        cout << "\nPilih operasi:" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Tambah Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Ubah Data" << endl;
        cout << "5. Cari Data" << endl;
        cout << "6. Keluar" << endl;

        int pilihan;
        cout << "Pilih program yang ingin Anda jalankan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanData();
                break;
            case 2:
                tambahData();
                break;
            case 3:
                hapusData();
                break;

            case 6:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    }

    return 0;
}
