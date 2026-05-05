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

