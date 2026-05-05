#include <iostream>
#include <string>

using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // Constructor tanpa parameter (Default)
    Kendaraan() {
        id = 0;
        nama = "Belum Diatur";
    }

    // Constructor dengan parameter ID saja
    Kendaraan(int pId) {
        id = pId;
        nama = "Anonim";
    }

    // Constructor dengan parameter Nama saja
    Kendaraan(string pNama) {
        id = 0;
        nama = pNama;
    }

    // Constructor dengan parameter lengkap (ID dan Nama)
    Kendaraan(int pId, string pNama) {
        id = pId;
        nama = pNama;
    }

    // Metode untuk menampilkan informasi kendaraan
    void tampilkanInfo() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "---------------------------" << endl;
    }
};


int main() {
    cout << "=== Data Pengelolaan Kendaraan ===" << endl << endl;

    // Inisialisasi menggunakan Constructor 1
    Kendaraan k1;
    cout << "Objek 1 (Default):" << endl;
    k1.tampilkanInfo();

    // Inisialisasi menggunakan Constructor 2
    Kendaraan k2(101);
    cout << "Objek 2 (Hanya ID):" << endl;
    k2.tampilkanInfo();

    // Inisialisasi menggunakan Constructor 3
    Kendaraan k3("Motor Matic");
    cout << "Objek 3 (Hanya Nama):" << endl;
    k3.tampilkanInfo();

    // Inisialisasi menggunakan Constructor 4
    Kendaraan k4(202, "Mobil Listrik");
    cout << "Objek 4 (Lengkap):" << endl;
    k4.tampilkanInfo();

    return 0;
}
