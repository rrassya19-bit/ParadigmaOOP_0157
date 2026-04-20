#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;     
    string nama;  
    float nilai;  

    // Method untuk menampilkan semua data mahasiswa
    void printData() {
        cout << "=== DATA MAHASISWA ===" << endl;
        cout << "NIM   : " << nim << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
        cout << "======================" << endl;
    }
};

int main() {
    // Membuat objek mahasiswa
    Mahasiswa mhs;
    
    // Mengisi data mahasiswa
    mhs.nim = 20250140157;
    mhs.nama = "Ahmad Rassya Maulana";
    mhs.nilai = 95.5;
    
    // Menampilkan data
    mhs.printData();
    
    return 0;
}