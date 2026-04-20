#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void PrintData() {
        cout << "Nama: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
        cout << endl;
    }
};

int main() {
    // Objek Elektronik
    Barang Elektronik;
    Elektronik.nama = "Iphone 17 Pro Max";
    Elektronik.jumlah = 5;
    Elektronik.kategori = "Elektronik";
    Elektronik.tanggalProduksi = "2026-04-01";

    // Objek NonElektronik
    Barang NonElektronik;
    NonElektronik.nama = "Kursi";
    NonElektronik.jumlah = 50;
    NonElektronik.kategori = "Non Elektronik";
    NonElektronik.tanggalProduksi = "2025-06-15";

    // Tampilkan data
    Elektronik.PrintData();
    NonElektronik.PrintData();

    return 0;
}