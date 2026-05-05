#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;

public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int inNim, string iNama);
    void cetak();
};

// constructor tanpa parameter
mahasiswa::mahasiswa() {
    nim = 0;
    nama = "";
}

// constructor hanya nim
mahasiswa::mahasiswa(int inNim) {
    nim = inNim; // definisi hanya NIM
}

// constructor hanya nama
mahasiswa::mahasiswa(string iNama) {
    nama = iNama; // definisi hanya NAMA
}

// constructor nim dan nama
mahasiswa::mahasiswa(int inNim, string iNama) {
    nim = inNim;   // definisi NIM dan NAMA
    nama = iNama;
}

// fungsi cetak
void mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main() {
    mahasiswa mhs1(102030);
    mahasiswa mhs2("Andi");
    mahasiswa mhs3(102030, "Santi");

    // tampilkan nilai
    cout << "Mahasiswa 1:";
    mhs1.cetak();

    cout << "Mahasiswa 2:";
    mhs2.cetak();

    cout << "Mahasiswa 3:";
    mhs3.cetak();

    return 0;
}