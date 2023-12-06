#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct DataKesehatan {
    string nama;
    int tekananDarah;
};

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "=== APLIKASI KESEHATAN ===\n";
    cout << "1. Masukkan Data Kesehatan\n";
    cout << "2. Tampilkan Data Kesehatan\n";
    cout << "3. Sorting Data Berdasarkan Tekanan Darah\n";
    cout << "4. Cari Data Berdasarkan Nama\n";
    cout << "5. Keluar\n";
    cout << "Pilih menu (1-5): ";
}

// Fungsi untuk memasukkan data kesehatan
void masukkanData(vector<DataKesehatan>& data) {
    DataKesehatan pasien;
    cout << "Masukkan Nama: ";
    cin >> pasien.nama;
    cout << "Masukkan Tekanan Darah: ";
    cin >> pasien.tekananDarah;

    data.push_back(pasien);
    cout << "Data berhasil dimasukkan.\n";
}

// Fungsi untuk menampilkan data kesehatan
void tampilkanData(const vector<DataKesehatan>& data) {
    cout << "=== DATA KESEHATAN ===\n";
    for (const auto& pasien : data) {
        cout << "Nama: " << pasien.nama << "\tTekanan Darah: " << pasien.tekananDarah << endl;
    }
}

// Fungsi untuk sorting data berdasarkan tekanan darah
void sortData(vector<DataKesehatan>& data) {
    sort(data.begin(), data.end(), [](const DataKesehatan& a, const DataKesehatan& b) {
        return a.tekananDarah < b.tekananDarah;
    });
    cout << "Data berhasil diurutkan berdasarkan tekanan darah.\n";
}

// Fungsi untuk mencari data berdasarkan nama
void cariData(const vector<DataKesehatan>& data) {
    string namaCari;
    cout << "Masukkan Nama yang dicari: ";
    cin >> namaCari;

    auto it = find_if(data.begin(), data.end(), [namaCari](const DataKesehatan& pasien) {
        return pasien.nama == namaCari;
    });

    if (it != data.end()) {
        cout << "Data ditemukan. Tekanan Darah: " << it->tekananDarah << endl;
    } else {
        cout << "Data tidak ditemukan.\n";
    }
}

int main() {
    vector<DataKesehatan> dataKesehatan;

    int pilihan;
    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                masukkanData(dataKesehatan);
                break;
            case 2:
                tampilkanData(dataKesehatan);
                break;
            case 3:
                sortData(dataKesehatan);
                break;
            case 4:
                cariData(dataKesehatan);
                break;
            case 5:
                cout << "Keluar dari aplikasi.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 5);

    return 0;
}