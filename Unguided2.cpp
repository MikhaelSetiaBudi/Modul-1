#include <iostream>
using namespace std;

// Difinisi Class untuk informasi lansia
class lansia {
public:
    string nama;
    int umur;
    float tb;
    float bb;

    void display() {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Umur: "<<umur<<" Tahun"<<endl;
        cout<<"Tinggi Badan: "<<tb<<" cm"<<endl;
        cout<<"Berat Badan: "<<bb<<" kg"<<endl;
    }
};

// Difinisi Struct untuk informasi BBM
    struct BBM {
    string Nama;
    float liter;
    float harga;

    };

int main() {
    // Membuat objek lansia 1 sampai 3 dari class lansia
    lansia lansia1;
    lansia1.nama = "Rizal";
    lansia1.umur = 99;
    lansia1.tb = 170;
    lansia1.bb = 50;

    lansia lansia2;
    lansia2.nama = "Wisnu";
    lansia2.umur = 100;
    lansia2.tb = 180;
    lansia2.bb = 65;

    lansia lansia3;
    lansia3.nama = "Yoka";
    lansia3.umur = 101;
    lansia3.tb = 165;
    lansia3.bb = 60;

    // panggil metode display untuk menampilkan lansia1 sampai lansia3
    lansia1.display();
    lansia2.display();
    lansia3.display();

// Membuat objek bbm1 dan bbm2 dari struct BBM
    BBM bbm1;
    bbm1.Nama = "Pertamax";
    bbm1.liter = 1;
    bbm1.harga = 17.000;

    BBM bbm2;
    bbm2.Nama = "Pertalite";
    bbm2.liter = 1;
    bbm2.harga = 14.000;


    // Menampilkan informasi bbm1 dan bbm2 dari struct BBM
    cout<<"Nama: "<<bbm1.Nama<<endl;
    cout<<"Liter: "<<bbm1.liter<<" L"<<endl;
    cout<<"Harga: "<<bbm1.harga<<" Rupiah"<<endl;

    cout<<"Nama: "<<bbm2.Nama<<endl;
    cout<<"Liter: "<<bbm2.liter<<" L"<<endl;
    cout<<"Harga: "<<bbm2.harga<<" Rupiah"<<endl;


    return 0;
}


// Mikhael Setia Budi
// 2311110033
//copyright@MikhaelS.B