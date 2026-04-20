#include <iostream>
using namespace std;

class barang{

public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;

    void printData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalproduksi << endl;
    }
};

int main(){
    barang elektronik;
    elektronik.nama = "Kulkas";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalproduksi = "2024-06-01";

    barang nonElektronik;
    nonElektronik.nama = "Topeng";
    nonElektronik.jumlah = 8;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalproduksi = "2024-05-15";
}