#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    float nilai;

    void printData() {
        cout << "NIM   : " << nim << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
};

int main() {
    Mahasiswa mhs;
    
    mhs.nim = 20250140157;
    mhs.nama = "Ahmad Rassya Maulana";
    mhs.nilai = 95.5;
    
    mhs.printData();
    
    return 0;
}