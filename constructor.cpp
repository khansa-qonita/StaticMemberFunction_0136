#include <iostream>
using namespace std;

class mahasiswa{
public:
    mahasiswa();  //conatructor
};

mahasiswa::mahasiswa() {
    cout <<"constructor terpanggil" << endl;  //definisi constructor    
};

int main(){
    mahasiswa mhs;  //pembuatan object
    return 0;
}