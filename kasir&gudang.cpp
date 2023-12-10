#include <iostream>
#include <string>
#include <map>
using namespace std;

class Barang {
public:
    int stok;
    double harga;

    Barang() : stok(0), harga(0.0) {}

    Barang(int stok, double harga) : stok(stok), harga(harga) {}
};

class Gudang {
private:
    map<string, Barang> dataBarang;

public:
    void tambahBarang(const string& namaBarang, int stok, double harga) {
        dataBarang[namaBarang] = Barang(stok, harga);
        cout << "Barang " << namaBarang << " ditambahkan ke stok." << endl;
    }

    void tampilkanStok() {
        cout << "Stok Gudang:" << endl;
        for (const auto& barang : dataBarang) {
            cout << barang.first << ": Stok=" << barang.second.stok << ", Harga=" << barang.second.harga << endl;
        }
    }

    bool beliBarang(const string& namaBarang, int jumlah) {
        if (dataBarang.find(namaBarang) != dataBarang.end() && dataBarang[namaBarang].stok >= jumlah) {
            double totalHarga = jumlah * dataBarang[namaBarang].harga;

            // Mengurangkan stok
            dataBarang[namaBarang].stok -= jumlah;

            cout << "Barang " << namaBarang << " dibeli sejumlah " << jumlah << " buah dengan total harga: " << totalHarga << endl;
            return true;
        } else {
            cout << "Stok tidak mencukupi atau barang tidak ditemukan." << endl;
            return false;
        }
    }
};

void user(){

while (true)
{
    Gudang gudang;

    cout << "======================" << endl;
    cout << "SELAMAT DATANG DI TOKO" << endl;
    cout << "======================" << endl;
  
    cout << "\n\n";
    
                string namaBarang;
                int jumlah;

                cout << "daftar barang: " << endl;
                gudang.tampilkanStok();
                cout << endl;

                cout << "Masukkan nama barang yang ingin dibeli: ";
                cin >> namaBarang;

                cout << "Masukkan jumlah barang yang ingin dibeli: ";
                cin >> jumlah;
               
                gudang.beliBarang(namaBarang,jumlah);
}
};


void tampilan_admin(){
  Gudang gudang;

    while (true)
    {
     int input;
     cout << "========" << endl;
     cout << "Admin" << endl;
     cout << "========" << endl;
     cout << "1. Tambah barang" << endl;
     cout << "2. lihat barang" << endl;
     cout << "0. kembali" << endl;
     cout << "input : "; cin >> input;

      switch (input)
        {
         case 1:
        {
                string namaBarang;
                int stok;
                double harga;

                cout << "Masukkan nama barang: ";
                cin >> namaBarang;

                cout << "Masukkan jumlah stok barang: ";
                cin >> stok;

                cout << "Masukkan harga barang: ";
                cin >> harga;
                gudang.tambahBarang(namaBarang, stok, harga);
        
                break;
            }
         break;

         case 2: 
         gudang.tampilkanStok();
         break;

         case 0:
         return;
         
         default: 
         cout << "pilihan anda tidak ada" << endl;
         break;
        }
    }
};

void admin(){

    while (true){
    
    int password;
    cout << "password = 1234" << endl;
    cout << "0. keluar" << endl;
    cout << "masukan password: "; cin >> password;

    switch (password){
    case 1234:
    cout << "password benar\n" << endl;
    tampilan_admin();
    break;

    case 0:
    return;

    default:
    cout << "password salah\n" << endl;
    
  }

    }
    
};


int main(){

do{
    int input;

     cout << "======================================" << endl;
     cout << "SELAMAT DATANG DI PROGRAM SAYA :)     " << endl;
     cout << "======================================" << endl;
     cout << "saat ini Anda berperan sebagai siapa? " << endl;
     cout << "1. Admin " << endl;
     cout << "2. User "  << endl;
     cout << "0. Keluar" << endl;
     cout << "======================================" << endl;
     cout << "Input: "; cin >> input;

     switch (input)
        {
            case 1:
            admin();
            break;

            case 2:
            user();
            break;

            case 0:
            cout << "Terima kasih" << endl;
            return false;

            default:
            cout << "input anda salahh" << endl;
            break;
         }
}while (true);


    cin.get();
    return 0;
}