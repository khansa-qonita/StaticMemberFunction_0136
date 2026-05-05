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

    